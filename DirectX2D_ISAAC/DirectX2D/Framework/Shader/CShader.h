#pragma once
class CShader
{
private:
    friend class CShaderManager;   // 생성을 한곳에서 만들게
public:
    virtual void Set() = 0;
    void OutMessage(wstring InFileName, ID3DBlob* OutError);
};

