#include "meadSong.h"

void meadSong() {
  int battels = 99;
  int i = battels;
  std::string str1 = " bottles of mead on the wall";
  std::string str12 = " bottle of mead on the wall";
  std::string str2 = " bottles of mead.\nTake one down and pass it around, ";
  std::string str22 = " bottle of mead.\nTake it down and pass it around, ";
  std::string str3 = "No more bottles of mead on the wall, no more bottles"
                     " of mead.\nGo to the store and buy some more, ";
  while (i >= 0) {
    if (i != 0) {
      if (i != 1)
        std::cout << i << str1 << ", " << i << str2;
      else
        std::cout << i << str12 << ", " << i << str22;
      --i;
      if (i > 1)
        std::cout << i << str1 << ".\n\n";
      else if (i == 1)
        std::cout << i << str12 << ".\n\n";
      else
        std::cout << "no more" << str1 << ".\n\n";
    } else {
      std::cout << str3 << battels << str1 << ".\n";
      break;
    }
  }
}
