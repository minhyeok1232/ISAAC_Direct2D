#pragma once
class CShader
{
private:
    friend class CShaderManager;   // ������ �Ѱ����� �����
public:
    virtual void Set() = 0;
    void OutMessage(wstring InFileName, ID3DBlob* OutError);
};

