#pragma once
#include <raylib.h>

#include <string>

class TextLabel {
  std::string str;
  Vector2 size;
  Color color;
  int font_size;
  Vector2 position;
  int rotate;
  bool visbile;

public:
  TextLabel(std::string str, Vector2 size, Color col, int font_size,
            Vector2 pos, int rot);
  void Hide();
  void Show();
  void UpdateStr(std::string str);
};
