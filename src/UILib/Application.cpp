#include "Application.h"

Application::Application(int w, int h, std::string name,
                         Color background_color) {
  this->win_size.x = w;
  this->win_size.y = h;
  this->app_name = name;
  this->background_color = background_color;

  this->Init();
}

void Application::Init() {
  InitWindow(this->win_size.x, this->win_size.y, this->app_name.c_str());
  SetTargetFPS(FPS);
}

void Application::SetLoop(std::function<void()> loop) {
  this->loop_callback = loop;
}

void Application::Start() {
  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(this->background_color);
    this->loop_callback();

    // Render Components
    for (auto c : this->components) {

        //OutputDebugStringA("rend\n");
        c->Render();

    }

    EndDrawing();
  }
}

void Application::Kill() { CloseWindow(); }

void Application::AddComponent(Component &cmp) {
  OutputDebugStringA("added cmp\n");
  this->components.push_back(&cmp);
}

Application::~Application() { this->Kill(); }