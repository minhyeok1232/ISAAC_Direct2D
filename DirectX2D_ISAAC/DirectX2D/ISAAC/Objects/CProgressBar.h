#pragma once
class CProgressBar : public CGameObject
{
public:
    CProgressBar(wstring foreground, wstring background);
    ~CProgressBar();
public:
    void Update() override;
    void Render() override;
    void PostRender() override;


public:
    void SetHP(int InValue) { HP = InValue; }
    void SetName(wstring InValue) { Name = InValue;}

public:
    void GUIRender() override;
private:
    CSprite* Background;
    CSprite* Foreground;
    wstring  Name;

private:
    int     HP = 0;

};

