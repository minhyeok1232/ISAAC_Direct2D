#pragma once
#define  SHADER CShaderManager::GetInstance()
class CShaderManager
{
private:
    CShaderManager();
public:
    ~CShaderManager();
public:
    static CShaderManager* GetInstance()
    {
        static  CShaderManager singleTone; // instanceȭ �Ǿ���
        return  &singleTone;
    }
 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public:
    class CVertexShader* AddVS(wstring file);
    class CPixelShader*  AddPS(wstring file);

private:
    unordered_map<wstring, class CShader*> Shaders;

};

