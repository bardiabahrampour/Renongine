#include "Settings.h"
#include "output.h"
#include <raylib.h>
//settings data structure constants
#define SETTINGS_FILE_NAME "settings.xml"
#define ROOT			   "settings"
#define GENERAL			   "general"
#define FPS				   "fps"
#define WIDTH			   "width"
#define HEIGHT			   "height"
#define TITLE			   "title"

//load settings files from the disk and load them into the settings structs
void
Settings::get_settings() {
	if (!doc.load_file(SETTINGS_FILE_NAME)) {
		output::error("Failed to read settings file", ERROR);
		read_default();
	}

}

//update settings incase of a gui call
template<typename xml_value>
void
Settings::update(xml_value value) {

}

pugi::xml_text
Settings::get_value(std::string root, std::string child) {
	return doc.root().child(root.c_str()).child(child.c_str()).text();
}

void
Settings::read_default() {
	/*
		Settings Default:
			width = get montor resolutions
			height = like above
			fps = 60
			title = hard coded
			graphics quality = low
			sound options -> to be implemnted...
	*/

	this->width = GetMonitorWidth(0);
	this->height = GetMonitorHeight(0);
	this->build_str = "null";
	this->fullscreen = true;
	this->graphics_setting = LOW;
	// to be continued...
}