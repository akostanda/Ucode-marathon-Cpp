#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <utility>

class Draugr {
public:
    Draugr();
    Draugr(double newHealth);
    Draugr(double newHelth, int newFrostResist);

    Draugr(Draugr& other) = delete;
    Draugr(Draugr&& other) = delete;
    void shoutPhrase(int shoutNumber) const;
    void setName(const std::string&& name);

private:
    double m_health;
    const int m_frostResist;
    std::string m_name;
};
