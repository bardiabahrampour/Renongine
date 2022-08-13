#pragma once

#include <raylib.h>

class __declspec(dllexport) Component {
protected:
  Vector2 position;
  bool visible = false;

public:
  void Hide();
  void Show();
  bool IsVisible();
  virtual void Render();
  void SetPosition(Vector2 pos);
  void SetPosition(int x, int y);
  Vector2 GetPosition();
};
