#include "mightyWizard.h"

FoodType FoodItem::getType() {
        return FoodType::Invalid;
}
std::string FoodItem::getFoodName() {
        return "Invalid";
}

FoodType ApplePie::getType() {
    return FoodType::ApplePie;
}
std::string ApplePie::getFoodName() {
    return "Apple pie";
}

FoodType HoneyNut::getType() {
    return FoodType::HoneyNut;
}
std::string HoneyNut::getFoodName() {
    return "Honey nut";
}

FoodType Sweetroll::getType() {
    return FoodType::Sweetroll;
}
std::string Sweetroll::getFoodName() {
    return "SweetRoll";
}

FoodType PoisonedFood::getType() {
    return FoodType::PoisonedFood;
}
std::string PoisonedFood::getFoodName() {
    return "Poison";
}

MightyWizard::MightyWizard(std::string newName) {
    name = newName;
}
void MightyWizard::deductFoodType(FoodItem& item) {
    foodItem = item;
}
void MightyWizard::checkFood(FoodItem& item) {
    if (item.getType() == FoodType::ApplePie || item.getType() == FoodType::PoisonedFood)
        std::cout << item.getFoodName() << ". Ugh, not again!" << "\n";
    else if (item.getType() == FoodType::HoneyNut || item.getType() == FoodType::Sweetroll)
        std::cout << item.getFoodName() << ". Mmm, tasty!" << "\n";
}
void MightyWizard::checkFood(FoodItem* item) {
    if(item == nullptr)
        std::cout << "<wtf>. Ugh, not again!" << "\n";
    else if ((*item).getType() == FoodType::ApplePie || (*item).getType() == FoodType::PoisonedFood)
        std::cout << (*item).getFoodName() << ". Ugh, not again!" << "\n";
    else if ((*item).getType() == FoodType::HoneyNut || (*item).getType() == FoodType::Sweetroll)
        std::cout << (*item).getFoodName() << ". Mmm, tasty!" << "\n";
}
