#include "Framework.h"
#include "CShader.h"

// HLSL�� ���̳ʸ� �������� ������ ���°��� ǥ��
void CShader::OutMessage(wstring InFileName, ID3DBlob* OutError)
{
    string message = (char*)OutError->GetBufferPointer();
    MessageBoxA(NULL, message.c_str(), "HLSL ����", MB_OK);
}
