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
  - The Binding of Isaac 게임 플레이를 참고하여 시스템 설계 및 구현

<details>
  <summary>🎇 프로젝트 실행 방법</summary>

### 1️⃣ Git Clone
  ```bash
  git clone https://github.com/minhyeok1232/ISAAC_Direct2D.git
2️⃣ 실행 파일
ISAAC_Direct2D/DirectX2D_ISAAC 경로로 이동
DirectX2D.sln을 실행하여 Visual Studio에서 프로젝트 빌드 및 실행
</details>
🕒 프로젝트 기간
MVP 개발 기간 : 2024.07 ~ 2024.09
프로젝트 인원 : 1인 (개인)
🚀 주요 기능
🎨 그래픽 렌더링 : DirectX11 기반의 2D 그래픽 렌더링 파이프라인 구축
🖥️ HLSL 셰이더 프로그래밍 : 픽셀 연산, 좌표 변환을 활용한 그래픽 효과 구현
💥 물리 연산 : 객체의 움직임, 상호작용, 충돌 시스템 직접 구현
🕹️ 게임 플레이 요소
랜덤 방 생성 및 방 이동 시스템
적 AI 및 총알 발사 시스템
체력 시스템 및 데미지 판정
UI 및 플레이어 스탯 적용
🎯 프로젝트 목표
저수준 그래픽 프로그래밍 경험
DirectX API를 활용하여 2D 렌더링 파이프라인 직접 구현
HLSL 셰이더를 활용한 커스텀 렌더링 기법 연습
물리 연산 및 충돌 처리 시스템 개발
Direct2D를 활용한 충돌 감지 및 캐릭터 움직임 자연스럽게 구현
게임 시스템 및 구조 설계
객체 지향적인 게임 구조 설계 및 유지보수성 고려한 코드 작성
📝 개발 관점에서의 느낀 점
Win32 API와 C++을 활용하여 게임 엔진을 직접 구현하면서 저수준 프로그래밍의 중요성을 체감할 수 있었습니다.
단순한 비트맵 이미지 로드부터 Direct2D를 활용한 그래픽 처리까지 모든 과정에서 하드웨어와의 인터페이스를 직접 다루면서 시스템 아키텍처를 깊이 이해할 수 있었습니다.
HLSL을 활용한 셰이더 프로그래밍을 적용하면서 DirectX 렌더링 파이프라인에 대한 이해도를 높일 수 있었으며, 이를 통해 그래픽 효과 최적화의 중요성을 배웠습니다.
게임 개발을 직접 진행하면서 객체 지향적인 게임 설계와 데이터 흐름 관리의 중요성을 체감하였고, 이러한 경험이 앞으로 Unity, Unreal Engine과 같은 상용 엔진을 다룰 때 엔진 내부 동작을 이해하는 데 큰 도움이 될 것이라 생각합니다.
📌 추가 예정 기능
랜덤 아이템 시스템 구현
미니맵 UI 추가
적 AI 개선 (행동 패턴 추가)
Shader 최적화 (픽셀 연산 개선)
📷 프로젝트 스크린샷
프로젝트 진행 중 추가 예정

📌 더 많은 정보는 프로젝트 페이지에서 확인할 수 있습니다.

markdown
복사
편집

---

### 🔹 **추가된 내용**
1. **주요 기능 세부 설명**  
   - 방 이동, 적 AI, 총알 발사, 체력 시스템 등 추가  
2. **프로젝트 목표 정리**  
   - 그래픽, 물리 연산, 시스템 설계 목표 세분화  
3. **추가 예정 기능 명시**  
   - 향후 개선할 기능 리스트 작성  
4. **프로젝트 페이지 링크 추가**  
   - miricanvas 링크 제공  
