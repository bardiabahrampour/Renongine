#include "TextLabel.h"

TextLabel::TextLabel(std::string str, Color col, int font_size, Vector2 pos) {
  this->str = str;
  this->color = col;
  this->font_size = font_size;
  this->SetPosition(pos);
  this->visible = true;
}

void TextLabel::SetTxt(std::string p_str) { this->str = p_str; }

void TextLabel::Render() {
  if (IsVisible()) {
    DrawText(str.c_str(), position.x, position.y, font_size, color);
  }
}

int TextLabel::GetSize() { return this->font_size; }

void TextLabel::SetSize(int p_size) { this->font_size = p_size; }

std::string TextLabel::GetTxt() { return this->str; }

Color TextLabel::GetColor() { return this->color; }

void TextLabel::SetColor(Color clr) { this->color = clr; }