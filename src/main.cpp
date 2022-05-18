//#include <Raywin.h>

#include "Application.h"

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
                    _In_ LPWSTR lpCmdLine, _In_ int nShowCmd) {
  Application app(std::string(lpCmdLine));
  return 0;
}