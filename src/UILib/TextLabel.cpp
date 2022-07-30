#include "TextLabel.h"

TextLabel::TextLabel(std::string str, Vector2 size, Color col, int font_size,
                     Vector2 pos, int rot) {
  this->str = str;
  this->size = size;
  this->color = col;
  this->font_size = font_size;
  this->position = pos;
  this->rotate = rot;
}

void TextLabel::Hide() { this->visbile = false; }

void TextLabel::Show() { this->visbile = true; }

void TextLabel::UpdateStr(std::string str) { this->str = str; }