#include "countUniqueWords.h"

void countUniqueWords(std::set<std::string>& uniqueWords,
                     std::multiset<std::string> words, std::string& fileName) {
    auto id = fileName.find_last_of('.');
    if (id != std::string::npos)
        fileName.insert(id, "_mod");
    else
        fileName.insert(fileName.size(), "_mod");
    std::ofstream output (fileName);
    for (auto& n : uniqueWords) {
        output << n << ": " << words.count(n) << "\n";
    }
}
