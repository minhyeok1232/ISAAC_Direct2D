#pragma once
// Shader는 이름이 같은 경우는 1개만 생성
class CPixelShader : public CShader
{
private:
    friend class CShaderManager;       // factory pattern
    CPixelShader(wstring file);
    ~CPixelShader();
public: 
    void Set() override;
private:
    ID3D11PixelShader* Shader = NULL;   // HLSL을 PS
};

