#pragma once
#include <raylib.h>
#include "output.h"
#include "Settings.h"
class BaseApplication
{
	Settings app_settings;

	virtual void main(int argc, char** argv);
public:
	BaseApplication(int argc,char** argv);
	~BaseApplication();
};

