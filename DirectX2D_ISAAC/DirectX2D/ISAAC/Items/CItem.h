#pragma once
enum  eItemType
{
    BOMB, RED_HEART, RED_HEART_MOVE, GOLD_COIN, COIN, THESADONION, BRIMSTONE
};
class CItem  : public CGameObject
{
public:
    CItem(eItemType type = eItemType::BOMB);
    ~CItem();
public:
    void Update() override;
    void Render() override;
public:
    void OnNotify(UINT msg, CCollider* Other) override;
    eItemType  GetItemType()       { return Type; }

private:
    void  CreateSpriteImage(eItemType type);
private:
    eItemType Type;
    float Interval = 0.0f;

};

