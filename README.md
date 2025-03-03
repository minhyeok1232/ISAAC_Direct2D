# ISAAC_Direct2D
DirectX 2D를 활용하여 The Binding of Isaac의 게임 플레이를 재현한 모작 게임입니다.

1. [🔎 프로젝트 소개](#-프로젝트-소개)
2. [🎯 프로젝트 기간](#-프로젝트-기간)
3. [🚀 주요 기능](#-주요-기능)
4. [❓ 기술적 의사결정](#-기술적-의사결정)
5. [📃 API 설계서](#-api-설계서)
6. [🛠 ERD](#-erd)
7. [🛠 아키텍처](#-아키텍처)
8. [🚨 트러블 슈팅](#-트러블-슈팅)

## 🔎 프로젝트 소개
- 장르 : 2D Top view Shooting Game
- IDE : Visual Studio 2019 (DirectX 2D)
- 이 프로젝트는 'ISAAC'을 모작한 작품으로, HLSL 프로그래밍 및 그래픽 파이프라인에 대한 이해를 심화하기 위해 제작되었습니다.

<details>
  <summary>🎇 프로젝트 실행 방법</summary>

### 1️⃣ Git Clone
  ```bash
  git clone https://github.com/minhyeok1232/ISAAC_Direct2D.git
```

### 2️⃣ 파일 실행
ISAAC_Direct2D\DirectX2D_ISAAC 경로로 들어가서, DirectX2D.sln를 실행합니다.
</details>

## 🎯 프로젝트 기간
- MVP 개발 기간 : 2024.07 ~ 2024.09
- 프로젝트 인원 : 1인 (개인)

## 프로젝트 목표
그래픽 렌더링 : DirectX11을 활용한 렌더링 파이프라인 구축
HLSL 셰이더 프로그래밍 : 좌표 변환 및 픽셀 연산을 활용한 그래픽 효과 구현
물리 연산 : 객체의 움직임, 상호작용, 충돌 등을 직접 구현
