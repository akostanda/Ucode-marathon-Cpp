#include "draugr.h"

Draugr::Draugr() : m_health(100), m_frostResist(50) {}

void Draugr::shoutPhrase(int shoutNumber) const {
    std::vector<std::string> phrase = {"Qiilaan Us Dilon!", "Bolog Aaz, Mal Lir!", "Kren Sosaal!",
                                       "Dir Volaan!", "Aar Vin Ok!", "Unslaad Krosis!", "Faaz! Paak! Dinok!",
                                       "Aav Dilon!", "Sovngarde Saraan!"};
    std::cout << "Draugr (" << m_health << " health, " << m_frostResist << "% frost resist) shouts:" << "\n";
    std::cout << phrase[shoutNumber] << "\n";
}
