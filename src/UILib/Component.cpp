#include "Component.h"

void Component::Hide() { this->visible = false; }

void Component::Show() { this->visible = true; }

bool Component::IsVisible() { return this->visible; }

void Component::Render() {}

void Component::SetPosition(Vector2 pos) { this->position = pos; }

void Component::SetPosition(int x, int y) {
  this->position.x = x;
  this->position.y = y;
}

Vector2 Component::GetPosition() { return this->position; }

Component::Component(bool p_hvr) { this->hoverable = p_hvr; }