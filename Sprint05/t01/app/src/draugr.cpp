#include "draugr.h"

// Draugr::Draugr() : m_health(100), m_frostResist(50) {}
Draugr::Draugr() : Draugr::Draugr(100, 50) {}

// Draugr::Draugr(int newFrostResist) : m_health(100), m_frostResist(newFrostResist) {}
Draugr::Draugr(int newFrostResist) : Draugr::Draugr(100, newFrostResist) {}

Draugr::Draugr(double newHealth, int newFrostResist) : m_health(newHealth), m_frostResist(newFrostResist) {
    std::cout << "Draugr with " << m_health << " health and " << m_frostResist << "% frost resist was born!" << "\n";
}

void Draugr::shoutPhrase(int shoutNumber) const {
    std::vector<std::string> phrase = {"Qiilaan Us Dilon!", "Bolog Aaz, Mal Lir!", "Kren Sosaal!",
                                       "Dir Volaan!", "Aar Vin Ok!", "Unslaad Krosis!", "Faaz! Paak! Dinok!",
                                       "Aav Dilon!", "Sovngarde Saraan!"};
    std::cout << "Draugr (" << m_health << " health, " << m_frostResist << "% frost resist) shouts:" << "\n";
    std::cout << phrase[shoutNumber] << "\n";
}

