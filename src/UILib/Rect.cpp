#include "Rect.h"

Rect::Rect(int w, int h, int x, int y, Color p_clr) : Component(false) {
  this->size.x = w;
  this->size.y = h;
  this->SetPosition(x, y);
  this->color = p_clr;
}

Rect::Rect(Vector2 p_size, Vector2 p_pos, Color p_clr) {
  this->size = p_size;
  this->position = p_pos;
  this->color = p_clr;
}

void Rect::SetColor(Color p_clr) { this->color = p_clr; }

void Rect::SetSize(Vector2 p_size) { this->size = p_size; }

void Rect::SetSize(int p_w, int p_h) {
  this->size.x = p_w;
  this->size.y = p_h;
}

Vector2 Rect::GetSize() { return this->size; }

Color Rect::GetColor() { return this->color; }