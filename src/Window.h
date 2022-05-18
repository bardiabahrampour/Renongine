#pragma once
#include <RayWin.h>

#include <string>

struct Window {
  void init(int w, int h, std::string t);
  void setFps(int f);
  void setFullscreen(bool s);
};