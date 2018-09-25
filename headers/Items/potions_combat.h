#ifndef potions_combat_h
#define potions_combat_h

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

#include "items.h"

class Combat_Potions : public I::Items {
    std::string name;
    std::string tier;
    std::string type;
    int potency;
    int value;
public:
	Combat_Potions(std::string ti, std::string ty, Character& ch);

    void consume() {
        if(type == "Attack") {
            ch.setATK(ch.getATK() + potency);
        }
        else {
            ch.setDEF(ch.getDEF() + potency);
        }
    }
    std::string getName() const {
        return name;
    }
    std::string info() const {
        std::stringstream ss;
        std::string id = tier + " " + type + " Potion";
        std::string poten = "Potency: " + std::to_string(potency);
        std::string val = "Value: " + std::to_string(value);
        ss << std::setw(30) << std::left << id << std::setw(12) << poten << std::setw(12) << val;
        std::string out = ss.str();
        return out;
    }

	std::string getPotency() const {
		return std::to_string(potency);
	}

	int getPrice() const {
		return value;
	}

	int getSellPrice() const {
		return value / 2;
	}
};
#endif // potions_combat_h

