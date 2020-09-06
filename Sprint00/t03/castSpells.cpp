#include "castSpells.h"

int castFloatToInt(float number) {
  int new_number = static_cast<int>(number);

  return new_number;
}

int* castToNonConstIntPtr(const int* ptr) {
  int* new_ptr = const_cast<int*>(ptr);

  return new_ptr;
}
