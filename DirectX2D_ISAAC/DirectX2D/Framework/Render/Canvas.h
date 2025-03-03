#pragma once
class Canvas
{
public:
	Canvas(Vector2 position, Vector2 scale);
	~Canvas();
public:
	void    Render();
public:
	void    SetShaderResourceView(ID3D11ShaderResourceView* srv) { SRV = srv; }
	void	SetPosition(Vector2 pos) { mPosition = pos; }
	void	SetScale(Vector2 size)   { mScale = size; };
	void	SetRotation(Vector3 rot) { mRotation = rot; };
	void    SetShader(wstring fileName);
private:
	void   CreateBuffer();
	void   UpdateWorld();
	void   UpdateView();
	void   UpdateProjection();
private:
	struct Vertex // 정점, 2Dor3D내에서의 한점
	{
		XMFLOAT3 position;  // x,y,z(x)
		XMFLOAT2 uv;
	};
private:
	Vector2  mPosition = Vector2(0, 0);
	Vector2  mScale    = Vector2(1, 1);
	Vector3  mRotation = Vector3(0, 0,0);

private:
	CMatrixBuffer* ProjectionBuffer;
	CMatrixBuffer* ViewBuffer;
	CMatrixBuffer* WorldBuffer;
private:
	ID3D11ShaderResourceView* SRV;
	CVertexBuffer* VertexBuffer = nullptr;
	CIndexBuffer* IndexBuffer = nullptr;
	CVertexShader* VertexShader = nullptr;
	CPixelShader* PixelShader = nullptr;
};

