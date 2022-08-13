#include <Application.h>
#include <TextLabel.h>

struct App {
  App();

private:
  Application app;
  int x = 0, y = 0;
  bool l = false;
  TextLabel txt;
  void loop();
};

App::App() : app(800, 600, "App"), txt("PlaceHolder", RED, 1, Vector2{380,280}) {
  this->app.SetLoop(std::bind(&App::loop, this));
  this->app.AddComponent(txt);
  this->txt.Show();
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