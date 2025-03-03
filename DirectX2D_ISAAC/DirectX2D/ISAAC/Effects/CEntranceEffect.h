#pragma once
class CEntranceEffect  : public CGameObject
{
public:
    CEntranceEffect();
    ~CEntranceEffect();
public:
    void Update() override;
    void Render() override;
private:
    void  EndFrame(string clipName);

};

