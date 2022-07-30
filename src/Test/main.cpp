#include <Application.h>

struct App {
  App();

private:
  Application app;
  int x = 0, y = 0;
  bool l = false;
  void loop();
};

App::App() : app(800, 600, "Shit") {
  this->app.SetLoop(std::bind(&App::loop, this));
  this->app.Start();
}

void App::loop() {
  if (l) {
    x -= 4;
    y -= 4;
  } else {
    x += 2;
    y += 2;
  }

  DrawText("DVD", x, y, 30, BLACK);

  if (x >= 500) {
    l = true;
  } else if (x <= 0) {
    l = false;
  }
}

int main() {
  App app;

  return 0;
}