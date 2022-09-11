#pragma once
#include <raylib.h>

bool CompareColors(Color lparam, Color rparam) {
  if (lparam.a == rparam.a && lparam.b == rparam.b && lparam.g == rparam.g &&
      lparam.r == rparam.r) {
    return true;
  }
  return false;
}