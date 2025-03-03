#include "framework.h"
#include "CAnimation.h"


CAnimation::CAnimation(wstring InFile)
{
	Sprite = new CSprite(InFile);
}

CAnimation::~CAnimation()
{
	for (size_t i = 0; i < AnimClips.size(); i++)
	{
		delete AnimClips[i]; // new 생성된 FraneData를 지움
	}
	AnimClips.erase(AnimClips.begin(), AnimClips.end());

	SAFE_DELETE(Sprite);
}

void CAnimation::Update()
{
	if (AnimClips.size() == 0)  return;
	CAnimClip* animClip = AnimClips[ClipIndex];

	if (Owner)
	{
		Pos() = Owner->Pos() + OwnerPivot;
		Scale() = Owner->Scale();
		Rotation() = Owner->Rotation();
	}
	animClip->Update();
}

void CAnimation::Render()
{
	if (AnimClips.size() == 0)  return;
	CAnimClip* animClip = AnimClips[ClipIndex];
	animClip->Render();
}

void CAnimation::SetPlay(UINT InPlayNo)
{
	CAnimClip* animClip = nullptr;
	// Check
	if (AnimClips.size() == 0) return;
	if(InPlayNo < 0)  return;
	if (InPlayNo >= AnimClips.size())  return;

	// 현재의 ClipIndex와 InPlayNo가 같은 경우
	animClip = AnimClips[ClipIndex];
	if (InPlayNo == ClipIndex)
	{
		if (animClip->IsPlay())
			return;
	}
	ClipIndex = InPlayNo;
	animClip = AnimClips[ClipIndex];
	animClip->SetPlay();
}

void CAnimation::SetPlay(string Name)
{
	int index = -1;
	for (int i = 0; i < AnimClips.size(); i++)
	{
		if (AnimClips[i]->GetName() == Name)
			index = i;
	}
	if (index == -1) return;
	mClipName = Name;
	SetPlay((UINT)index);

}

void CAnimation::SetStop(string Name)
{
	for (int i = 0; i < AnimClips.size(); i++)
	{
//		if (AnimClips[i]->GetName() == Name)
		{
			CAnimClip* animClip =  AnimClips[i];
			animClip->SetStop();
		}	
	}
}

bool CAnimation::IsPlay()
{
	if (AnimClips.size() == 0)  return false;
	CAnimClip* animClip = AnimClips[ClipIndex];
	return animClip->IsPlay();
}

void CAnimation::SetPostion(float x, float y)
{
	Sprite->Pos() = Vector2(x, y);
}

void CAnimation::SetPostion(Vector2 pos)
{
	Sprite->Pos() = pos;
}

void CAnimation::SetScale(float x, float y)
{
	Sprite->Scale() = Vector2(x, y);
}

void CAnimation::SetScale(Vector2 scale)
{
	Sprite->Scale() = scale;
}

void CAnimation::AddClip(CAnimation::eState State,string InClipName)
{
	CAnimClip* animClip = new CAnimClip((CAnimClip::eState)State, InClipName);
	AnimClips.push_back(animClip);
}

void CAnimation::AddFrame(wstring InFile, float InDelta)
{
	if (AnimClips.size() == 0)
	{
		MessageBox(NULL, L"먼저 AddClip()함수 사용하세요!!", L"Error", MB_OK);
		return;
	}

	UINT index = (UINT)(AnimClips.size() - 1);
	CAnimClip* clip = AnimClips[index];

	clip->AddFrame(Sprite, InFile, InDelta);

}

void CAnimation::AddFrame(wstring InFile, int sx, int sy, int ex, int ey, float InDelta)
{
	if (AnimClips.size() == 0)
	{
		MessageBox(NULL, L"먼저 AddClip()함수 사용하세요!!", L"Error", MB_OK);
		return;
	}

	UINT index = (UINT)(AnimClips.size() - 1);
	CAnimClip* clip = AnimClips[index];

	clip->AddFrame(Sprite, InFile, sx,sy,ex,ey,InDelta);
}

void CAnimation::UpdateFrame(string clipName, int FrameNo, Vector2 pos, Vector2 scale)
{
	if (AnimClips.size() == 0)
	{
		MessageBox(NULL, L"먼저 AddClip()함수 사용하세요!!", L"Error", MB_OK);
		return;
	}

	int index = -1;
	for (int i = 0; i < AnimClips.size(); i++)
	{
		if (AnimClips[i]->GetName() == clipName)
			index = i;
	}
	if (index == -1) return;


	AnimClips[index]->UpdateFrame((UINT)FrameNo, pos, scale);

}

void CAnimation::GetFrame(wstring& ImageFile, Vector2& Offset, Vector2& OffsetSize, Vector2& TextureSize)
{
	CAnimClip* clip = AnimClips[ClipIndex];
	clip->GetFrame(ImageFile, Offset, OffsetSize, TextureSize);



}

void CAnimation::AddEvent(string name, function<void(string)> fp)
{

	for (int i = 0; i < AnimClips.size(); i++)
	{
		if (AnimClips[i]->GetName() == name)
		{
			CAnimClip* animClip = AnimClips[i];
			animClip->SetEvent(fp);
		}
	}
}