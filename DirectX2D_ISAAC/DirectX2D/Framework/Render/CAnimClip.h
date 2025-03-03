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
		wstring ImageFile;    // 이미지 파일명
		Vector2 Offset;       // 이미지의 시작위치
		Vector2 OffsetSize;   // 이미지의 크기
		float   Delta;        // 동작시간
		Vector2 DefaultPos;   // 추가 위치
		Vector2 DefaultScale; // 추가 Scale
	};


private:
	vector<FrameData*> Frames;       // Idle장면 8개라면 8개가 Frame에 존재
	CSprite* Sprite = nullptr;       // 주소로 보관
	eState   State = eState::Loop;   // Clip의 Type
	UINT     CurrentIndex = 0;       // 현재 동작둥인 Frame의 Index
	float    DeltaTime = 0.0f;       // 시간카운팅
	bool     bPlay = true;           // Play중
	string   Name;                   // Clip의 명칭
private:
	function<void(string)>  EndCallback = nullptr;
};

