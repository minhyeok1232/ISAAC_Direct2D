#pragma once
//  Animation
//    |----  Sprite
//    |----- AnimClip
class CSprite;
class CAnimClip
{
public:
	enum eState
	{
		Loop = 0,   // IDLE
		Once,       // Attack,Jump
		End,
		EndStay
	};
public:
	CAnimClip(eState InType = eState::Loop, string InCilpName ="");
	~CAnimClip();

public:
	void  Update();
	void  Render();
public:   // Setter
	void  SetStop()    { bPlay = false; }
	void  SetPlay();
public:   // getter
	bool  IsPlay()     { return bPlay; }
	string GetName()   { return Name; }
public:
	void  AddFrame(CSprite* Sprite, wstring InFile, float InDelta);
	void  AddFrame(CSprite* Sprite, wstring InFile, int sx, int sy, int ex, int ey, float InDelta);
	void  GetFrame(wstring& ImageFile, Vector2& Offset, Vector2& OffsetSize, Vector2& TextureSize);
	void  UpdateFrame(UINT index, Vector2 pos, Vector2 scale);

public:
	void  SetEvent(function<void(string)> cbFunction) { EndCallback = cbFunction; }


private:
	struct FrameData
	{
		wstring ImageFile;    // �̹��� ���ϸ�
		Vector2 Offset;       // �̹����� ������ġ
		Vector2 OffsetSize;   // �̹����� ũ��
		float   Delta;        // ���۽ð�
		Vector2 DefaultPos;   // �߰� ��ġ
		Vector2 DefaultScale; // �߰� Scale
	};


private:
	vector<FrameData*> Frames;       // Idle��� 8����� 8���� Frame�� ����
	CSprite* Sprite = nullptr;       // �ּҷ� ����
	eState   State = eState::Loop;   // Clip�� Type
	UINT     CurrentIndex = 0;       // ���� ���۵��� Frame�� Index
	float    DeltaTime = 0.0f;       // �ð�ī����
	bool     bPlay = true;           // Play��
	string   Name;                   // Clip�� ��Ī
private:
	function<void(string)>  EndCallback = nullptr;
};

