#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <utility>

class Draugr {
public:
    Draugr();
    explicit Draugr(int newFrostResist);
    explicit Draugr(double newHelth, int newFrostResist = 50);
    Draugr(Draugr& other);
    Draugr(Draugr&& other);

    void shoutPhrase(int shoutNumber) const;
    void setName(const std::string&& name);

private:
    double m_health;
    const int m_frostResist;
    std::string m_name;
};
