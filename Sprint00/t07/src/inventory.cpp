#include "inventor.h"

void helpPrinting() {
  std::cout << "1. insert <itemType>\n"
               "2. remove <itemType>\n"
               "3. show inventory\n"
               "4. help\n"
               "5. exit"
            << std::endl;
}

void showPrinting(std::vector<std::string>& invetors) {
  int size = invetors.size();

  std::cout << "{ ";
  for (auto v : invetors) std::cout << v << " ";
  if (size < 12) {
    for (int i = 12 - size; i > 0; i--) std::cout << "- ";
  }
  std::cout << "}" << std::endl;
}
void insertVector(std::stringstream& ss, std::vector<std::string>& invetors) {
  std::string item;
  ss >> item;
  if ((item == "w" || item == "f" || item == "a" || item == "p") && ss.eof()) {
    if (invetors.size() < 12) {
      invetors.push_back(item);
      std::cout << item << " was inserted." << std::endl;
    } else
      std::cout << "Inventory is full." << std::endl;
  } else if (ss.eof())
    std::cout << "Invalid item." << std::endl;
  else
    std::cout << "Invalid command." << std::endl;
}

void removeItem(std::stringstream& ss, std::vector<std::string>& invetors) {
  std::string item;
  ss >> item;
  int count = 0;
  if ((item == "w" || item == "f" || item == "a" || item == "p") && ss.eof()) {
    for (auto it = invetors.begin(); it != invetors.end(); ++it) {
      if (*it == item) {
        invetors.erase(it);
        std::cout << item << " was removed." << std::endl;
        count++;
        break;
      }
    }
    if (count == 0) std::cout << "Invalid item." << std::endl;
  } else
    std::cout << "Invalid command." << std::endl;
}

void comandErase(const std::string& item, std::vector<std::string>& invetors) {}

void commandChecking(std::stringstream& ss, std::string& command,
                     std::vector<std::string>& invetors) {
  if (command == "help" && ss.eof())
    helpPrinting();
  else if (command == "show" && ss.eof())
    showPrinting(invetors);
  else if (command == "insert")
    insertVector(ss, invetors);
  else if (command == "remove")
    removeItem(ss, invetors);
  else
    std::cout << "Invalid command." << std::endl;
}

void inventory() {
  std::vector<std::string> invetors;
  std::string line;

  while (true) {
    std::cout << "Enter command:> ";
    getline(std::cin, line);
    std::stringstream ss(line);
    if (!ss.eof()) {
      std::string command;
      ss >> command;
      if (command == "exit" && ss.eof()) {
        std::cout << "Bye." << std::endl;
        break;
      } else
        commandChecking(ss, command, invetors);
    } else
      std::cout << "Invalid command." << std::endl;
  }
}
