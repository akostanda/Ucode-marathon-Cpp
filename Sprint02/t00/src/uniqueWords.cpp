#include "uniqueWords.h"

void uniqueWords(std::set<std::string>& words, std::string& fileName) {
    auto id = fileName.find_last_of('.');
    if (id != std::string::npos)
        fileName.insert(id, "_mod");
    else
        fileName.insert(fileName.size(), "_mod");
    std::ofstream output (fileName);
    for (auto& w : words) {
        output << w << "\n";
    }
}
