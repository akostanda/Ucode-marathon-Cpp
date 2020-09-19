#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <regex>

class Draugr {
public:
    Draugr();
    explicit Draugr(int newFrostResist);
    explicit Draugr(double newHelth, int newFrostResist = 50);

    void shoutPhrase(int shoutNumber) const;

private:
    double m_health;
    const int m_frostResist;
};
