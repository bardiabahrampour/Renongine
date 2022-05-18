#pragma once
#include "Settings.h"
#include "Window.h"
#include "output.h"

class Application {
  Settings settings;
  Window window;
  virtual void main(std::string argv);
  virtual void draw();
  virtual void setup();

 public:
  Application(std::string argv);
  ~Application();
};
