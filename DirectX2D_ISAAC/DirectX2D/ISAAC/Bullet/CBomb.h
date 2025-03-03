#pragma once
class CBomb  : public CGameObject
{
public:
    CBomb();
    ~CBomb();
public:
    void Update() override;
    void Render() override;
public:
    void SetShoot(Vector2 pos);
public:
    Matrix& GetMatrix() { return Shadow->GetMatrix(); }
private:
    CAnimation* Bullet = nullptr;
    CSprite* Shadow = nullptr;
private:
    void     EndFrame(string frame);
};

