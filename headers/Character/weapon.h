#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

#include "items.h"

class Weapon : public I::Items {
protected:
	std::string name, standardName;
	int damage, upgradeDamage;
	int value;
	int upgradeTier;
	std::string attribute;
public:
	Weapon(Character& ch) : Items(ch, false) {}

	void addAttribute(std::string attr) {
		attribute = attr;
		name = attribute + " " + standardName;
	}

	std::string getName() const {
		return name;
	}

	std::string info() const {
		std::stringstream ss;
		std::string def = "Damage: " + std::to_string(upgradeDamage);
		std::string val = "Value: " + std::to_string(value);
		ss << std::setw(30) << std::left << name << std::setw(12) << def << std::setw(12) << val;
		std::string out = ss.str();
		return out;
	}

	int getPrice() const {
		return 0;
	}

	int getSellPrice() const {
		return 0;
	}

	void upgradeWeapon();
};
#endif //weapon_h