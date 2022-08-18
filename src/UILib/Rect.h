#pragma once

#include "Component.h"
#include <raylib.h>

/*
        Base Class for Rectangles:
                Normal	 Rect: normal color
                Outlined Normal Rect: normal color with outline
                Gradient Rect: gradient color rect
                Outlined Gradient Rect: gradient color rect with outline
*/

class Rect : public Component {
  Vector2 size{};
  Color color;

public:
  Rect(int w, int h, int x = 0, int y = 0, Color p_clr = BLACK);
  Rect(Vector2 p_size, Vector2 p_pos, Color p_clr);
  Vector2 GetSize();
  Color GetColor();
  void SetSize(Vector2 p_size);
  void SetSize(int p_w, int p_h);
  void SetColor(Color p_clr);
  void Render();
};
