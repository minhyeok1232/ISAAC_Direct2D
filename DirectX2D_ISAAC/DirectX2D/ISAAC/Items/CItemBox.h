#pragma once
enum  eItemBoxType
{
    NORMAL, NORMAL_OPEN, GOLD, GOLD_OPEN,
};
class CItemBox : public CGameObject
{
public:
    CItemBox();
    ~CItemBox();
public:
    void Update() override;
    void Render() override;
public:
    void Enter() override;

public:
    void OnNotify(UINT msg, CCollider* Other) override;

private:
    void  CreateAnimation();
    void  CreateItem();
private:
    eItemBoxType Type;
};

