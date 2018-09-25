#include "weapons_alcohol_bottle.h"
#include "weapons_katar_dagger.h"
#include "weapons_magic_sword.h"
#include "weapon.h"

Alcohol_Bottle::Alcohol_Bottle(int uT, Character& ch, std::string attr) : Weapon(ch) {
	damage = upgradeDamage = 5;
	value = 3;
	upgradeTier = uT;
	attribute = attr;
	if (attribute.empty()) {
		standardName = name = "Alcohol Bottle";
	}
	else {
		standardName = "Alcohol Bottle";
		name = attribute + " Alcohol Bottle";
	}
	ch.setATK(ch.getATK() + damage);
}

Katar_Dagger::Katar_Dagger(int uT, Character& ch, std::string attr) : Weapon(ch) {
	damage = upgradeDamage = 6;
	value = 12;
	upgradeTier = uT;
	attribute = attr;
	if (attribute.empty()) {
		standardName = name = "Katar Dagger";
	}
	else {
		standardName = "Katar Dagger";
		name = attribute + " Katar Dagger";
	}
	ch.setATK(ch.getATK() + damage);
}

Magic_Sword::Magic_Sword(int uT, Character& ch, std::string attr) : Weapon(ch) {
	damage = upgradeDamage = 5;
	value = 15;
	upgradeTier = uT;
	attribute = attr;
	if (attribute.empty()) {
		standardName = name = "Magic Sword";
	}
	else {
		standardName = "Magic Sword";
		name = attribute + " Magic Sword";
	}
	ch.setATK(ch.getATK() + damage);
}


void Weapon::upgradeWeapon() {
	upgradeDamage += damage;
	upgradeTier++;
	ch.setATK(ch.getATK() + damage);
	switch (upgradeTier) {
	case 1:
		attribute = "Wooden";
		break;
	case 2:
		attribute = "Decent";
		break;
	case 3:
		attribute = "Sturdy";
		break;
	case 4:
		attribute = "Stone";
		break;
	case 5:
		attribute = "Bronze";
		break;
	case 6:
		attribute = "Silver";
		break;
	case 7:
		attribute = "Hard";
		break;
	case 8:
		attribute = "Golden";
		break;
	case 9:
		attribute = "Platinum";
		break;
	default:
		attribute = "Diamond";
		break;
	}
	addAttribute(attribute);
}