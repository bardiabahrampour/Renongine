#pragma once

#include <raylib.h>

class __declspec(dllexport) Component {
protected:
  Vector2 position;
  bool visible = false;
  bool hoverable = false;

public:
  Component(bool p_hvr);
  void Hide();
  void Show();
  bool IsVisible();
  virtual void Render();
  void SetPosition(Vector2 pos);
  void SetPosition(int x, int y);
  Vector2 GetPosition();
};
