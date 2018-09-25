#ifndef potions_health_h
#define potions_health_h

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

#include "items.h"

class Health_Potions : public I::Items {
    std::string name;
    std::string tier;
    int potency;
    int value;
public:
	Health_Potions(std::string t, Character& ch);

    void consume() {
        ch.setCurrHP(potency);
    }
    std::string getName() const {
        return name;
    }
    std::string info() const {
        std::stringstream ss;
        std::string id = tier + " Health Potion";
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
#endif // potions_health_h
