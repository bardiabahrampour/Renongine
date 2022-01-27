#pragma once
#include <pugixml.hpp>
//XML Based Settings

enum class Quality {
	VERY_LOW,
	LOW,
	MEDIUM,
	HIGH
};

struct Settings
{
	int width, height;
	int fps;
	std::string build_str;
	Quality graphics_setting;
	bool fullscreen;

	void			get_settings();
	//template for type specific functions
	template<typename xml_value>
	void			update(xml_value value);
private:
	void			read_default();
	pugi::xml_text	get_value(std::string root,std::string child);
	pugi::xml_document doc;
};
