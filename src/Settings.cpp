#include "Settings.h"
#include "output.h"
#include <raylib.h>
#include "error_messages.h"
//settings data structure constants
#define SETTINGS_FILE_NAME "settings.xml"
#define ROOT			   "settings"
#define GENERAL			   "general"
#define FPS				   "fps"
#define WIDTH			   "width"
#define HEIGHT			   "height"
#define TITLE			   "title"
#define FULLSCREEN         "fullscreen"
#define GRAPHICS           "graphics"

//load settings files from the disk and load them into the settings structure
void
Settings::get_settings() {
	if (!doc.load_file(SETTINGS_FILE_NAME)) {
		output::error(SETTINGS_READ_FAILED, ERROR);
		this->read_default();
	}
	this->width = this->get_value(GENERAL, WIDTH).as_int();
	this->height = this->get_value(GENERAL, HEIGHT).as_int();
	this->fps = this->get_value(GENERAL, FPS).as_int();
	this->fullscreen = this->get_value(GENERAL, FULLSCREEN).as_bool();
	this->title = this->get_value(GENERAL, TITLE).as_string();
	this->graphics_setting = get_enum(this->get_value(GENERAL, GRAPHICS).as_int());
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
	this->graphics_setting = Quality::LOW;
	this->title = "game";
	// to be continued...
}

//quick helper function
Quality get_enum(int i) {
	switch (i)
	{
	case 1: return Quality::LOW; break;
	case 2: return Quality::MEDIUM; break;
	case 3: return Quality::HIGH; break;
	case 0: return Quality::VERY_LOW; break;
	default:
		break;
		return Quality::VERY_LOW;
	}
}