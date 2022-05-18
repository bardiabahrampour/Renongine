#include "Window.h"
#include <RayWin.h>

void Window::init(int w, int h, std::string t) { InitWindow(w, h, t.c_str()); }

void Window::setFps(int f) { SetTargetFPS(f); }

void Window::setFullscreen(bool s) {
  if (s) {
    SetWindowState(FLAG_FULLSCREEN_MODE);
  }
}