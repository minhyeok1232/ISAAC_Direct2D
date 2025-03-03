<!DOCTYPE html>
<html lang="ko">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ISAAC_Direct2D - 프로젝트 소개</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 0;
        }
        .container {
            width: 80%;
            margin: 0 auto;
            padding: 20px;
        }
        h1, h2, h3 {
            color: #333;
        }
        ul {
            list-style-type: none;
            padding: 0;
        }
        ul li {
            margin: 5px 0;
        }
        code {
            background-color: #f4f4f4;
            padding: 2px 4px;
            border-radius: 4px;
        }
        details {
            margin: 20px 0;
        }
        summary {
            font-weight: bold;
            cursor: pointer;
        }
        .image-container {
            text-align: center;
            margin: 20px 0;
        }
        .image-container img {
            max-width: 100%;
            height: auto;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>ISAAC_Direct2D</h1>
        <p>DirectX 2D를 활용하여 'The Binding of Isaac'의 게임 플레이를 재현한 모작 게임입니다.</p>

        <h2>목차</h2>
        <ul>
            <li><a href="#프로젝트-소개">프로젝트 소개</a></li>
            <li><a href="#프로젝트-기간">프로젝트 기간</a></li>
            <li><a href="#주요-기능">주요 기능</a></li>
            <li><a href="#프로젝트-목표">프로젝트 목표</a></li>
            <li><a href="#개발-관점에서의-느낀-점">개발 관점에서의 느낀 점</a></li>
        </ul>

        <h2 id="프로젝트-소개">프로젝트 소개</h2>
        <ul>
            <li><strong>장르</strong>: 2D Top view Shooting Game</li>
            <li><strong>IDE</strong>: Visual Studio 2019 (DirectX 2D)</li>
            <li>이 프로젝트는 'ISAAC'을 모작한 작품으로, HLSL 프로그래밍 및 그래픽 파이프라인에 대한 이해를 심화하기 위해 제작되었습니다.</li>
        </ul>

        <details>
            <summary>프로젝트 실행 방법</summary>
            <h3>1. Git Clone</h3>
            <pre><code>git clone https://github.com/minhyeok1232/ISAAC_Direct2D.git</code></pre>
            <h3>2. 파일 실행</h3>
            <p><code>ISAAC_Direct2D\DirectX2D_ISAAC</code> 경로로 들어가서, <code>DirectX2D.sln</code>를 실행합니다.</p>
        </details>

        <h2 id="프로젝트-기간">프로젝트 기간</h2>
        <ul>
            <li><strong>MVP 개발 기간</strong>: 2024.07 ~ 2024.09</li>
            <li><strong>프로젝트 인원</strong>: 1인 (개인)</li>
        </ul>

        <h2 id="주요-기능">주요 기능</h2>
        <ul>
            <li><strong>그래픽 렌더링</strong>: DirectX11을 활용한 렌더링 파이프라인 구축</li>
            <li><strong>HLSL 셰이더 프로그래밍</strong>: 좌표 변환 및 픽셀 연산을 활용한 그래픽 효과 구현</li>
            <li><strong>물리 연산</strong>: 객체의 움직임, 상호작용, 충돌 등을 직접 구현</li>
        </ul>

        <h2 id="프로젝트-목표">프로젝트 목표</h2>
        <ul>
            <li>그래픽 렌더링: DirectX11을 활용한 렌더링 파이프라인 구축</li>
            <li>HLSL 셰이더 프로그래밍: 좌표 변환 및 픽셀 연산을 활용한 그래픽 효과 구현</li>
            <li>물리 연산: 객체의 움직임, 상호작용, 충돌 등을 직접 구현</li>
        </ul>

        <h2 id="개발-관점에서의-느낀-점">개발 관점에서의 느낀 점</h2>
        <p>Win32 API와 C++을 활용하여 게임 엔진을 직접 구현하면서 저수준 프로그래밍의 중요성을 체감할 수 있었습니다.</p>
        <p>단순한 비트맵 파일을 로드하는 과정조차도 상당한 양의 코드가 필요했으며, 윈도우 핸들, 디바이스 컨텍스트 등의 시스템 객체를 다루면서 하드웨어와의 인터페이스에 대해 깊이 이해하게 되었습니다. 이러한 경험을 통해 시스템 아키텍처와 그래픽 렌더링의 원리를 보다 명확히 파악할 수 있었습니다.</p>
        <p>이러한 저수준 프로그래밍 경험은 향후 Unity, Unreal Engine, Godot과 같은 상용 엔진을 다룰 때 엔진의 내부 동작을 더욱 깊이 이해하는 데 도움이 될 것이라 생각합니다. 또한, 엔진의 기본 구조를 직접 구현해 본 경험이 최적화와 커스텀 렌더링 파이프라인 설계 등의 고급 기술을 익히는 데 중요한 밑바탕이 될 것이라 기대됩니다.</p>

        <div class="image-container">
            <img src="https://www.miricanvas.com/v2/design/149xcgd" alt="프로젝트 이미지">
        </div>
    </div>
</body>
</html>
위의 HTML 코드를 README.html 파일로 저장하신 후, 웹 브라우저로 열어보시면 프로젝트에 대한 상세한 정보를 확인하실 수 있습니다. 추가로 필요한 내용이나 수정사항이 있으시면 알려주세요!


출처






나의 말:
아 내가 html형식이아닌가? 지금 내 형식으로
ChatGPT의 말:
네! 현재 사용하신 형식(Markdown)으로 그대로 작성해드릴게요. 요청하신 추가 내용도 반영해서 README.md를 업데이트하겠습니다.

markdown
복사
편집
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
