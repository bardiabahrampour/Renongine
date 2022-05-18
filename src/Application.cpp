#include "Application.h"

Application::Application(std::string argv) { this->main(argv); }

void Application::main(std::string argv) {
  this->setup();
  while (!WindowShouldClose()) {
    BeginDrawing();
    draw();
    EndDrawing();
  }
}

void Application::setup() {
  settings.get_settings();
  window.init(settings.width, settings.height, settings.title);
  window.setFps(settings.fps);
  window.setFullscreen(settings.fullscreen);
}

Application::~Application() { CloseWindow(); }

void Application::draw() { ClearBackground(BLACK); }