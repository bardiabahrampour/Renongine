#pragma once
#define INFO    "Info: "
#define FATAL   "Fatal: "
#define ERROR   "Error: "
#define WARNING "Warning: "
#include <string>
namespace output {
	void out(std::string message);
	void error(std::string message, std::string type);
}