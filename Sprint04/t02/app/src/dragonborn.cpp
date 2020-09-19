#include "dragonborn.h"

void Dragonborn::executeAction(const Actions action) {
    std::map<Actions, void(Dragonborn::*)() const> actDrag {
        {Actions::Shout, &Dragonborn::shoutThuum},
        {Actions::Magic, &Dragonborn::attackWithMagic},
        {Actions::Weapon, &Dragonborn::attackWithWeapon}
    };
    std::invoke(actDrag.at(action), this);
}

void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul" << std::endl;
}
void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*" << std::endl;
}
void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*" << std::endl;
}
