#include "output.h"

#include "RayWin.h"
void output::out(std::string message) {
  OutputDebugString(std::string(INFO + message + '\n').c_str());
}
void output::error(std::string message, std::string type) {
  OutputDebugString(std::string(type + message + '\n').c_str());
}