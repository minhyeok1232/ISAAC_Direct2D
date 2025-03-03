# ISAAC_Direct2D
DirectX 2D를 활용하여 The Binding of Isaac의 게임 플레이를 재현한 모작 게임입니다.

## 📌 목차
1. [🔎 프로젝트 소개](#-프로젝트-소개)
2. [🕒 프로젝트 기간](#-프로젝트-기간)
3. [🚀 주요 기능](#-주요-기능)
4. [🎯 프로젝트 목표](#-프로젝트-목표)
5. [📝 개발 관점에서의 느낀 점](#-개발-관점에서의-느낀-점)

---

## 🔎 프로젝트 소개
- **장르** : 2D Top view Shooting Game
- **IDE** : Visual Studio 2019 (DirectX 2D)
- **목적** : 
  - DirectX 2D의 렌더링 파이프라인을 학습하기 위해 제작된 프로젝트
  - HLSL을 활용한 셰이더 프로그래밍과 그래픽 효과 구현 연습

<details>
  <summary>🎇 프로젝트 실행 방법</summary>

### 1️⃣ Git Clone
  ```bash
  git clone https://github.com/minhyeok1232/ISAAC_Direct2D.git
```
### 2️⃣ 실행 파일
ISAAC_Direct2D/DirectX2D_ISAAC 경로로 이동
DirectX2D.sln을 실행하여 Visual Studio에서 프로젝트 빌드 및 실행
</details>


## 🎯 프로젝트 기간
- MVP 개발 기간 : 2024.12.18 ~ 2025.01.31
- 프로젝트 인원 : 1인 (개인)

## 🚀 주요 기능
🎯 실시간 성능 모니터링을 통한 최적화
- ImGui를 활용하여 FPS(Frame Per Second)를 실시간으로 표시하여 성능 모니터링
- 디버깅 창을 직접 띄워 코드 변경 없이 오브젝트 조정, 테스트 및 최적화 가능
🎨 HLSL을 활용한 그래픽 최적화
Vertex Shader 및 Pixel Shader 적용
- 색상 변경 및 광원 효과 적용
- GPU 연산 최적화 (World 행렬 변환 적용)
⚡ 충돌 시스템 설계
- AABB (Axis-Aligned Bounding Box) 충돌 시스템
- X, Y 축을 정렬한 사각형 충돌 방식
- 빠른 충돌 판정 가능, 최적화 효과 높음
- OBB (Oriented Bounding Box) 충돌 시스템
- 회전이 고려된 충돌 방식
- 보다 정확한 충돌 판정 가능
🏗️ 객체지향 설계를 반영한 클래스 구조
- CRenderTarget, CShader, CSceneManager 등 화면 렌더링을 위한 모듈화 설계
- CGameObject, CSprite, CPlayer, CCollider 등 게임 요소를 객체 지향적으로 설계
- 확장성을 고려한 시스템 구성

## 🔄 진행 및 개선 사항
✨ 셰이더 프로그래밍 개선
- HLSL(Vertex/Pixel Shader) 활용하여 광원 및 색상 변화 효과 구현
- 오브젝트 환경에 따라 색상 변화 반영

🔀 멀티 스레드 적용
- 멀티 스레드로 게임 시간과 별도로 처리되는 로직을 분리하여 성능 최적화
- FPS 프레임 드랍 개선 (초기 로딩 시 렌더링 딜레이 해결)

🤖 AI 시스템 개선
- A* 알고리즘을 적용하여 효율적인 경로 탐색 AI 구현
- 개별 AI가 실시간으로 이동 가능 영역을 탐색하여 최적의 경로 선택

## 📝 개발 관점에서의 느낀 점
- Win32 API와 C++을 활용하여 게임 엔진을 직접 구현하면서 저수준 프로그래밍의 중요성을 체감할 수 있었습니다.
- 단순한 비트맵 이미지 로드부터 Direct2D를 활용한 그래픽 처리까지 모든 과정에서 하드웨어와의 인터페이스를 직접 다루면서 시스템 아키텍처를 깊이 이해할 수 있었습니다.
- HLSL을 활용한 셰이더 프로그래밍을 적용하면서 DirectX 렌더링 파이프라인에 대한 이해도를 높일 수 있었으며, 이를 통해 그래픽 효과 최적화의 중요성을 배웠습니다.
- 게임 개발을 직접 진행하면서 객체 지향적인 게임 설계와 데이터 흐름 관리의 중요성을 체감하였고, 이러한 경험이 앞으로 Unity, Unreal Engine과 같은 상용 엔진을 다룰 때 엔진 내부 동작을 이해하는 데 큰 도움이 될 것이라 생각합니다.

