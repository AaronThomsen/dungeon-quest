#include "armour_basic_armour.h"

Basic_Armour::Basic_Armour(int uT, Character& ch, std::string attr) : Items(ch, false) {
	defense = upgradeDefense = 3;
	value = 6;
	upgradeTier = uT;
	attribute = attr;
	if (attribute.empty()) {
		name = "Magic Armour";
	}
	else {
		name = attribute + " Magic Armour";
	}
	ch.setDEF(ch.getDEF() + defense);
}

void Basic_Armour::addAttribute(std::string attr) {
	attribute = attr;
	name = attribute + " Magic Armour";
}
std::string Basic_Armour::getName() const {
	return name;
}
std::string Basic_Armour::info() const {
	std::stringstream ss;
	std::string def = "Defense: " + std::to_string(upgradeDefense);
	std::string val = "Value: " + std::to_string(value);
	ss << std::setw(30) << std::left << name << std::setw(12) << def << std::setw(12) << val;
	std::string out = ss.str();
	return out;
}

void Basic_Armour::upgradeArmor() {
	upgradeDefense += defense;
	upgradeTier++;
	int buff = ch.getDEF() + defense;
	if (ch.getName() == "Adventurer" && upgradeTier % 2) {
		buff = ch.getDEF() + (defense * 2);
	}
	ch.setDEF(buff);
	switch (upgradeTier) {
	case 1:
		attribute = "Leather";
		break;
	case 2:
		attribute = "Iron";
		break;
	case 3:
		attribute = "Bronze";
		break;
	case 4:
		attribute = "Silver";
		break;
	case 5:
		attribute = "Gold";
		break;
	case 6:
		attribute = "Platinum";
		break;
	case 7:
		attribute = "Tungsten";
		break;
	case 8:
		attribute = "Obsidian";
		break;
	case 9:
		attribute = "Molten";
		break;
	default:
		attribute = "Diamond";
		break;
	}
	addAttribute(attribute);
}