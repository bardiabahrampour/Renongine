#include "BaseApplication.h"

BaseApplication::BaseApplication(int argc, char** argv) {
	this->main(argc, argv);
}

void
BaseApplication::main(int argc, char** argv) {
	this->setup();
	while (!WindowShouldClose()) {
		BeginDrawing();
		this->draw();
		EndDrawing();
	}
}

void
BaseApplication::setup() {
	settings.get_settings();
	window.init(settings.width, settings.height, settings.title);
	window.setFps(settings.fps);
	
}

void
Window::init(int w, int h, std::string t) {
	InitWindow(w, h, t.c_str());
}

void
Window::setFps(int f) {
	SetTargetFPS(f);
}

void
Window::setFullscreen(bool s) {
	SetWindowState(FLAG_FULLSCREEN_MODE);
}