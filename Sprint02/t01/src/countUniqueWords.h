#pragma once

#include <iostream>
#include <set>
#include <fstream>
#include <string>
#include <regex>

void countUniqueWords(std::set<std::string>& uniqueWords,
                      std::multiset<std::string> words, std::string& fileName);
