// DirectX2D.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "DirectX2D.h"
#include <fstream>

void LoadFont();

int APIENTRY wWinMain(HINSTANCE hInstance,
                      HINSTANCE hPrevInstance,
                      LPWSTR    lpCmdLine,
                      int       nCmdShow)
{
    CMainWindow::GetInstance()->CreateGameWindow(hInstance, 1490, 950);
    CSceneManager::GetInstance()->InitScene();
    DirectWrite::GetInstance();

    // IMGUI Setting
    {
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO();
        (void)io;
        ImGui_ImplWin32_Init(MAIN->GetHandle());
        ImGui_ImplDX11_Init(DEVICE, DC);
        LoadFont();
        ImGui::StyleColorsDark();
    }

 //   TIMER->SetLock(true, 60);
    MSG msg;
    // GetMessage  :  Idle후 Messgge를 가져 오는 방식
    // PeekMessage :  즉시 가져오는 방식
    while (true)
    {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
                break;
            TranslateMessage(&msg);
            DispatchMessage(&msg);  // CMainWindow-->WinProc()
        }
        TIMER->Update();
        SOUND->Update();
        CMainWindow::GetInstance()->Update();
        CMainWindow::GetInstance()->Render();
    }
    // IMGUI Delete
    {
        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();
    }
    return (int) msg.wParam;
}

void LoadFont()
{
	ImGuiIO& io = ImGui::GetIO();
	ImFont* font = nullptr;
	std::string font_file = "./TTF/malgunbd.ttf";
	//std::string font_file = "imgui/fonts/D2Coding.ttf";

	std::ifstream ifile;
	ifile.open(font_file);
	if (ifile) {
		std::cout << "file exists\n";
		font = io.Fonts->AddFontFromFileTTF(font_file.c_str(),
			16.0f, NULL, io.Fonts->GetGlyphRangesKorean());
	}
	else {
		std::cout << "file doesn't exist\n";
		font = io.Fonts->AddFontDefault();
	}
	IM_ASSERT(font != NULL);
}
