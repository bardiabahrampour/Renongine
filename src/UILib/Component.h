#pragma once

#include <raylib.h>

class __declspec(dllexport) Component {
protected:
  Vector2 position{};
  bool visible = false;
  bool hoverable = false;
  virtual void Render();

public:
  Component(bool p_hvr);
  void Hide();
  void Show();
  bool IsVisible();
  void MainRender();
  void SetPosition(Vector2 pos);
  void SetPosition(int x, int y);
  Vector2 GetPosition();
};
