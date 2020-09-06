#include <iostream>
#include <string>

void checkValid(char* str, size_t index) {
  if (str[index] != '\0')
    throw 1;
}

int main(int argc, char** argv) {
  auto i = 2;
  auto level = 0;
  auto health = 0.0f;
  auto stamina = 0.0;
  if (argc != 5) {
      std::cerr << "usage:./automaton [name] [level] [health] [stamina]" << std::endl;
      return 1;
  }
  try {
    auto index = 0lu;
    level = std::stoi(argv[i], &index, 10);
    checkValid(argv[i], index);
    health = std::stof(argv[++i], &index);
    checkValid(argv[i], index);
    stamina = std::stod(argv[++i], &index);
    checkValid(argv[i], index);
  }
  catch (...) {
    std::cerr << "Invalid argument: " << argv[i] << std::endl;
    return 1;
  }
  std::cout << "Name = " << argv[1] << std::endl;
  std::cout << "Level = " << level << std::endl;
  std::cout << "Health = " << health << std::endl;
  std::cout << "Stamina = " << stamina << std::endl;
  return 0;
}
