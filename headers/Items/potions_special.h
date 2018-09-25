#ifndef potions_special_h
#define potions_special_h

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

#include "items.h"

class Special_Potions : public I::Items {
    std::string name;
    std::string tier;
    int potency;
    int value;
public:
	Special_Potions(std::string t, Character& ch);

    void consume() {
       ch.setCurrMana(potency);
    }
    std::string getName() const {
        return name;
    }
    std::string info() const {
        std::stringstream ss;
        std::string id = tier + " Mana Potion";
        std::string poten = "Potency: " + std::to_string(potency);
        std::string val = "Value: " + std::to_string(value);
        ss << std::setw(30) << std::left << id << std::setw(12) << poten << std::setw(12) << val;
        std::string out = ss.str();
        return out;
    }

	int getPrice() const {
		return value;
	}

	int getSellPrice() const {
		return value / 2;
	}

	std::string getPotency() const {
		return std::to_string(potency);
	}
};
#endif // potions_special_h

