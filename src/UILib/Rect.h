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

class __declspec(dllexport) Rect : public Component {
  Vector2 size{};
  Color color, outline, gradient_1, gradient_2;
  bool is_gradient = false;
  int outline_size = 0;

public:
  Rect(int w, int h, int x, int y, Color p_clr = NULLCOLOR,
       Color o_clr = NULLCOLOR, int outline = 0, Color g_1 = NULLCOLOR,
       Color g_2 = NULLCOLOR);
  Rect(Vector2 p_size, Vector2 p_pos, Color p_clr = NULLCOLOR,
       Color o_clr = NULLCOLOR, int outline = 0, Color g_1 = NULLCOLOR,
       Color g_2 = NULLCOLOR);
  Vector2 GetSize();
  Color GetColor();
  Color GetOutlineColor();
  void SetSize(Vector2 p_size);
  void SetSize(int p_w, int p_h);
  void SetOutlineColor(Color p_clr); // nullptr for no outline
  void SetGradient(Color r_clr, Color l_clr);
  void SetColor(Color p_clr);
  void Render() override;
};

// TODO: Create Color Class Containing Gradients,Normal Colors, Etc Or Create an
// Enum for Rects