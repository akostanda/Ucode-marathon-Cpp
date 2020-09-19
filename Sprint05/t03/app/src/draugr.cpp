#include "draugr.h"

Draugr::Draugr() : Draugr::Draugr(100, 50) {}

Draugr::Draugr(double newHealth) : Draugr::Draugr(newHealth, 50) {}

Draugr::Draugr(double newHealth, int newFrostResist) : m_frostResist(newFrostResist) {
    m_health = newHealth;
    std::cout << "Draugr with " << m_health << " health and " << m_frostResist << "% frost resist was born" << "\n";
}

void Draugr::shoutPhrase(int shoutNumber) const {
    std::vector<std::string> phrase = {"Qiilaan Us Dilon!", "Bolog Aaz, Mal Lir!", "Kren Sosaal!",
                                       "Dir Volaan!", "Aar Vin Ok!", "Unslaad Krosis!", "Faaz! Paak! Dinok!",
                                       "Aav Dilon!", "Sovngarde Saraan!"};
    std::cout << "Draugr " << m_name << " (" << m_health << " health, " << m_frostResist << "% frost resist) shouts:" << "\n";
    std::cout << phrase[shoutNumber] << "\n";
}

void Draugr::setName(const std::string&& name) {
    m_name = name;
}
