#include "Component.h"

void Component::Hide() { this->visible = false; }

void Component::Show() { this->visible = true; }

bool Component::IsVisible() { return this->visible; }

void Component::Render() {

}

