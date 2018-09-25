#ifndef armour_basic_armour_h
#define armour_basic_armour_h

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

#include "items.h"

class Basic_Armour : public I::Items {
    std::string name;
    int defense, upgradeDefense;
    int value;
    int upgradeTier;
    std::string attribute;

public:
	Basic_Armour(int uT, Character& ch, std::string attr = "");

	void addAttribute(std::string attr);

	std::string getName() const;

	std::string info() const;

	int getPrice() const {
		return 0;
	}

	int getSellPrice() const {
		return 0;
	}

	void upgradeArmor();
};
#endif // armour_basic_armour_h
