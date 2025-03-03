#include "framework.h"
#include "CQuad.h"

CQuad::CQuad()
{
    CreateBuffer();
	WorldBuffer = new CMatrixBuffer(0);
	SpriteCutBuffer = new CSpriteCutBuffer(10);
	ColorBuffer = new CColorBuffer(11);
}

CQuad::~CQuad()
{
	SAFE_DELETE(WorldBuffer);
	SAFE_DELETE(SpriteCutBuffer);
	SAFE_DELETE(ColorBuffer);
}

void CQuad::SetShader(wstring shader)
{
	VertexShader = SHADER->AddVS(shader);
	PixelShader = SHADER->AddPS(shader);

}
void CQuad::SetImageFile(wstring imageFile)
{
	SRV[0] = IMAGEMGR->GetSprite(imageFile);
}
void CQuad::SetSecondImageFile(wstring imageFile)
{
	SRV[1] = IMAGEMGR->GetSprite(imageFile);

}
void CQuad::Render()
{
	WorldBuffer->SetVS(0);
	VertexBuffer[(UINT)Aligement]->Set();

	VertexShader->Set();
	PixelShader->Set();
	ColorBuffer->Set();
	SpriteCutBuffer->Set();

	DC->PSSetShaderResources(0, 1, &SRV[0]);
	DC->DrawIndexed(6, 0, 0);
}

void CQuad::InstanceRender()
{
	WorldBuffer->SetVS(0);
	VertexBuffer[(UINT)Aligement]->Set();
}

void CQuad::CreateBuffer()
{
	UINT indices[] = { 0,1,3, 3,1,2 };
	IndexBuffer = new CIndexBuffer(indices, 6);
	IndexBuffer->Set();

	// 정점을 만들고 VertexBuffer를 생성하기
	Vertex vertices[4];

	// 1. Center
	{
		vertices[0].position = Float3(-0.5f, -0.5f, 0.0f);      // 0
		vertices[1].position = Float3(-0.5f, +0.5f, 0.0f);      // 1
		vertices[2].position = Float3(+0.5f, +0.5f, 0.0f);      // 2
		vertices[3].position = Float3(+0.5f, -0.5f, 0.0f);      // 3

		vertices[0].uv = Float2(0, 1);
		vertices[1].uv = Float2(0, 0);
		vertices[2].uv = Float2(1, 0);
		vertices[3].uv = Float2(1, 1);
		VertexBuffer[0] = new CVertexBuffer(vertices, sizeof(Vertex), 4);
	}


	// 2. Left Center
	{
		vertices[0].position = Float3(0.0f, -0.5f, 0.0f);      // 0
		vertices[1].position = Float3(0.0f, +0.5f, 0.0f);      // 1
		vertices[2].position = Float3(1.0f, +0.5f, 0.0f);      // 2
		vertices[3].position = Float3(1.0f, -0.5f, 0.0f);      // 3
		VertexBuffer[1] = new CVertexBuffer(vertices, sizeof(Vertex), 4);
	}

	// 3. Right Center
	{
		vertices[0].position = Float3(-1.0f, -0.5f, 0.0f);      // 0
		vertices[1].position = Float3(-1.0f, +0.5f, 0.0f);      // 1
		vertices[2].position = Float3(0.0f, +0.5f, 0.0f);      // 2
		vertices[3].position = Float3(0.0f, -0.5f, 0.0f);      // 3
		VertexBuffer[2] = new CVertexBuffer(vertices, sizeof(Vertex), 4);
	}


	// 3. Top Center
	{
		vertices[0].position = Float3(-0.5f, -1.0f, 0.0f);      // 0
		vertices[1].position = Float3(-0.5f, +0.0f, 0.0f);      // 1
		vertices[2].position = Float3(+0.5f, +0.0f, 0.0f);      // 2
		vertices[3].position = Float3(+0.5f, -1.0f, 0.0f);      // 3
		VertexBuffer[3] = new CVertexBuffer(vertices, sizeof(Vertex), 4);
	}


	// 4. Bottom Center
	{
		vertices[0].position = Float3(-0.5f, 0.0f, 0.0f);      // 0
		vertices[1].position = Float3(-0.5f, 1.0f, 0.0f);      // 1
		vertices[2].position = Float3(+0.5f, 1.0f, 0.0f);      // 2
		vertices[3].position = Float3(+0.5f, 0.0f, 0.0f);      // 3
		VertexBuffer[4] = new CVertexBuffer(vertices, sizeof(Vertex), 4);
	}


}
