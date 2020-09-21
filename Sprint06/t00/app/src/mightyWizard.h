#pragma once

#include <iostream>
#include<string>

enum class FoodType {
    ApplePie,
    HoneyNut,
    Sweetroll,
    PoisonedFood,
    Invalid
};

class FoodItem {
public:
    virtual ~FoodItem() = default;
    virtual FoodType getType();
    virtual std::string getFoodName();
};

class ApplePie : public FoodItem {
public:
    FoodType getType();
    std::string getFoodName();
};

class HoneyNut : public FoodItem {
public:
    FoodType getType();
    std::string getFoodName();
};

class Sweetroll : public FoodItem {
public:
    FoodType getType();
    std::string getFoodName();
};

class PoisonedFood : public FoodItem {
public:
    FoodType getType();
    std::string getFoodName();
};

class AbstractWizard {
protected:
    virtual void deductFoodType(FoodItem& item) = 0;
};

class MightyWizard : public AbstractWizard {
public:
    MightyWizard(std::string newName);
    void deductFoodType(FoodItem& item) override;
    void checkFood(FoodItem& item);

    void checkFood(FoodItem* item);
private:
    std::string name;
    FoodItem foodItem;
};

