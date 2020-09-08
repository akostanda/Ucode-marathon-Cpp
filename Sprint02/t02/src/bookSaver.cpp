#include "bookSaver.h"

void addBook(std::stringstream& ss, std::map<std::string, std::string>& library) {
    std::string book;
    ss >> book;
    if (ss.eof() && !book.empty()) {
        std::ifstream input("./library/" + book);
        if (input) {
            std::string content;
            std::getline(input, content, '\0');
            if (!content.empty()) {
                library[book] = content;
                std::cout << book << " added" << std::endl;
            }
            else
                std::cout << "invalid book" << std::endl;
        }
        else
            std::cout << "invalid book" << std::endl;
    }
    else
        std::cout << "invalid command" << std::endl;
}

void deleteBook(std::stringstream& ss, std::map<std::string, std::string>& library) {
    std::string book;
    ss >> book;
    if (ss.eof() && !book.empty()) {
        if (library.count(book) > 0) {
            library.erase(book);
            std::cout << book << " deleted" << std::endl;
        }
        else
            std::cout << "invalid book" << std::endl;
    }
    else
        std::cout << "invalid command" << std::endl;
}

void readBook(std::stringstream& ss, std::map<std::string, std::string>& library) {
    std::string book;
    ss >> book;
    if (ss.eof() && !book.empty()) {
        if (library.count(book) > 0) {
            std::cout << library[book] << std::endl;
        }
        else
            std::cout << "invalid book" << std::endl;
    }
    else
        std::cout << "invalid command" << std::endl;
}

void commandChecking(std::stringstream& ss, std::string& command,
                     std::map<std::string, std::string>& library) {
    if (command == "add")
        addBook(ss, library);
    else if (command == "delete")
        deleteBook(ss, library);
    else if (command == "read")
        readBook(ss, library);
    else
        std::cout << "invalid command" << std::endl;
}

void bookSaver() {
    std::map<std::string, std::string> library;
    std::string line;

    while (true) {
        std::cout << "Enter command:> ";
        getline(std::cin, line);
        std::stringstream ss(line);
        if (!ss.eof()) {
            std::string command;
            ss >> command;
            if (command == "quit" && ss.eof()) {
                std::cout << "bye" << std::endl;
                break;
            }
            else if (command == "list" && ss.eof()) {
                for (auto l : library)
                    std::cout << l.first << "\n";
            }
            else
                commandChecking(ss, command, library);
        } 
        else
            std::cout << "invalid command" << std::endl;
    }
}
