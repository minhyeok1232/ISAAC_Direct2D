#pragma once
// Shader�� �̸��� ���� ���� 1���� ����
class CPixelShader : public CShader
{
private:
    friend class CShaderManager;       // factory pattern
    CPixelShader(wstring file);
    ~CPixelShader();
public: 
    void Set() override;
private:
    ID3D11PixelShader* Shader = NULL;   // HLSL�� PS
};

