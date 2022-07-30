#pragma once

class Component {
protected:
  bool visible = false;

public:
  void Hide();
  void Show();
  bool IsVisible();
  virtual void Render();
};
