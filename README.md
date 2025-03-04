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
HLSL(Vertex/Pixel Shader)과 행렬(Matrix)를 이용하여 충돌 박스를 구현하였습니다.
- HLSL : Pixel 색상을 변경하여 충돌 상태를 시각적으로 표현하였습니다.
- 행렬 : 충돌 박스의 위치, 크기, 회전을 적용하면서 좌표 변환을 수행하였습니다.

🔀 멀티 스레드 적용
멀티 스레드를 사용함으로써 게임 시작과 동시에 별도의 스레드에서 모든 씬(Scene)을 미리 로드합니다.<br>
개선점
- 기존 싱글스레드 방식 대비 약 40% 로딩 시간 단축
- FPS 모니터링 결과 초기 로딩 중 프레임 드랍을 최대 50%까지 감소

🤖 AI 시스템 개선
- A* 알고리즘을 적용하여 효율적인 경로 탐색 AI 구현
- 개별 AI가 실시간으로 이동 가능 영역을 탐색하여 최적의 경로 선택

## 📝 개발 관점에서의 느낀 점
Win32 API와 C++을 활용하여 게임 엔진을 직접 구현하면서 `저수준 프로그래밍`의 중요성을 체감할 수 있었습니다.

단순한 비트맵 파일을 로드하는 과정조차도 많은 양의 코드가 필요했으며, 윈도우 핸들, 디바이스 컨텍스트 등의 시스템 객체를 다루면서 하드웨어와의 인터페이스에 대해 이해하게 되었습니다. 이러한 경험을 통해 시스템 아키텍처와 그래픽 렌더링의 원리를 파악할 수 있었습니다.

이러한 저수준 프로그래밍 경험은 향후 Unity, Unreal Engine과 같은 상용 엔진을 다룰 때 엔진의 내부 동작을 깊이 이해하는 데 도움이 될 것이라 생각합니다. 
또한, 엔진의 기본 구조를 직접 구현해 본 경험이 최적화와 커스텀 렌더링 파이프라인 설계 등의 고급 기술을 익히는 데 중요한 밑바탕이 될 것이라 기대됩니다.

#### 플레이 영상 : [https://www.youtube.com/watch?v=XatDEKotysU](https://www.youtube.com/watch?v=XatDEKotysU)
