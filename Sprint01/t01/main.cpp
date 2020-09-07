#include "moveAlong.h"

int main(int argc, char** argv) {
  if (argc < 2) {
      std::cerr << "usage: ./moveAlong [args]" << std::endl;
      return 1;
  }
  else
    moveAlong(argc, argv);
  return 0;
}