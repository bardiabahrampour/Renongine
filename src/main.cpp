#include <raylib.h>
#include <RayWin.h>

int WINAPI wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd)
{
    std::string title("hello\n");
    InitWindow(800, 600,"h");
    SetTargetFPS(60);
    OutputDebugStringA(title.c_str());
    OutputDebugStringA("l\n");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        if (IsKeyPressed(KEY_ESCAPE)) break;
        EndDrawing();
    }
    CloseWindow();
    return 0;
}