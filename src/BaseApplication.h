#pragma once
#include <raylib.h>
#include "output.h"
#include "Settings.h"

struct Window {
	void init(int w, int h, std::string t);
	void setFps(int f);
	void setFullscreen(bool s);
};

class BaseApplication
{
	Settings settings;
	Window window;
	virtual void main(int argc, char** argv);
	virtual void draw();
	virtual void setup();
public:
	BaseApplication(int argc,char** argv);
	~BaseApplication();
};

