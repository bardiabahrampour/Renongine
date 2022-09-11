#include <Application.h>
#include <Rect.h>
#include <TextLabel.h>

struct App {
  App();

private:
  Application app;
  int x = 0, y = 0;
  bool l = false;
  TextLabel txt;
  Rect rect;
  void loop();
};

App::App()
    : app(800, 600, "App"), txt("PlaceHolder", RED, 1, Vector2{380, 280}),
      rect(Vector2{100, 100}, Vector2{200,200}, BLUE,BLACK,20,PURPLE,DARKBLUE) {
  this->app.SetLoop(std::bind(&App::loop, this));
  this->app.AddComponent(txt);
  this->app.AddComponent(rect);
  this->txt.Show();
  this->rect.Show();
  this->app.Start();
}

void App::loop() {
  txt.SetTxt(std::to_string(x));
  x++;
  txt.SetSize(x);
}

int main() {
  App app;

  return 0;
}