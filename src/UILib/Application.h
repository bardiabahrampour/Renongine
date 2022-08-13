#pragma once

#include "Component.h"
#include <RayWin.h>
#include <cstdint>
#include <functional>
#include <raylib.h>
#include <vector>
#include <string>

constexpr uint8_t FPS = 60;

class __declspec(dllexport) Application {
  Vector2 win_size = {0, 0};
  std::string app_name{};
  std::function<void()> loop_callback = nullptr;
  Color background_color = RAYWHITE;
  std::vector<Component*> components;
  void Init();

public:
  Application(int w, int h, std::string name,
              Color background_color = RAYWHITE);
  void SetLoop(std::function<void()> loop);
  void Start();
  void Kill();
  void AddComponent(Component &cmp);
  ~Application();
};
