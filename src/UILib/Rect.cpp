#include "Rect.h"
#include "common.hpp"

Rect::Rect(int w, int h, int x, int y, Color p_clr, Color o_clr, int outline,
           Color g_1, Color g_2)
    : Component(false) {
  this->size.x = w;
  this->size.y = h;
  this->SetPosition(x, y);
  this->color = p_clr;
  this->outline = o_clr;
  this->gradient_1 = g_1;
  this->gradient_2 = g_2;
  this->outline_size = outline;
}

Rect::Rect(Vector2 p_size, Vector2 p_pos, Color p_clr, Color o_clr, int outline,
           Color g_1, Color g_2)
    : Component(false) {
  this->size = p_size;
  this->position = p_pos;
  this->color = p_clr;
  this->outline = o_clr;
  this->gradient_1 = g_1;
  this->gradient_2 = g_2;
  this->outline_size = outline;
}

void Rect::SetColor(Color p_clr) { this->color = p_clr; }

void Rect::SetSize(Vector2 p_size) { this->size = p_size; }

void Rect::SetSize(int p_w, int p_h) {
  this->size.x = p_w;
  this->size.y = p_h;
}

Vector2 Rect::GetSize() { return this->size; }

Color Rect::GetColor() { return this->color; }

void Rect::Render() {
  if (!CompareColors(outline, NULLCOLOR)) {
    DrawRectangle(position.x - (outline_size/2), position.y - (outline_size/2), size.x + outline_size,
                  size.y + outline_size, outline);
  }
  if (CompareColors(gradient_1, NULLCOLOR) &&
      CompareColors(gradient_2, NULLCOLOR)) {
    DrawRectangle(position.x, position.y, size.x, size.y, color);
  } else {
    DrawRectangleGradientH(position.x, position.y, size.x, size.y, gradient_1,
                           gradient_2);
  }
 
}

void Rect::SetOutlineColor(Color p_clr) { this->outline = p_clr; }

void Rect::SetGradient(Color r_clr, Color l_clr) {
  this->gradient_1 = r_clr;
  this->gradient_2 = l_clr;
}

Color Rect::GetOutlineColor() { return this->outline; }