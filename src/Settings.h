#pragma once
#include <pugixml.hpp>
// XML Based Settings

enum class Quality { VERY_LOW, LOW, MEDIUM, HIGH };

struct Settings {
  int width, height;
  int fps;
  std::string title;
  Quality graphics_setting;
  bool fullscreen;

  void get_settings();
  // template for type specific functions
  template<typename xml_value>
  void update(const char* _property, xml_value value);

 private:
  void read_default();
  Quality get_enum(int i);
  pugi::xml_text get_value(std::string root, std::string child);
  pugi::xml_document doc;
};
