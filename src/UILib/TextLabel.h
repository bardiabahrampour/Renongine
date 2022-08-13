#pragma once
#include <raylib.h>

#include "Component.h"
#include <string>

class __declspec(dllexport) TextLabel : public Component {
  std::string str;
  Color color;
  int font_size;

public:
  TextLabel(std::string str, Color col, int font_size, Vector2 pos);
  void SetTxt(std::string p_str);
  void Render() override;
  int GetSize();
  void SetSize(int p_size);
  std::string GetTxt();
  Color GetColor();
  void SetColor(Color clr);
};
