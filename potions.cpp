#include "potions_health.h"
#include "potions_combat.h"
#include "potions_special.h"

Health_Potions::Health_Potions(std::string t, Character& ch) : Items(ch) {
	tier = t;
	name = tier + " Health Potion";
	if (tier == "Small") {
		potency = 15;
		value = 50;
	}
	else if (tier == "Medium") {
		potency = 30;
		value = 400;
	}
	else if (tier == "Large") {
		potency = 60;
		value = 800;
	}
	else if (tier == "Full") {
		potency = 1000;
		value = 1000;
	}
}

Combat_Potions::Combat_Potions(std::string ti, std::string ty, Character& ch) : Items(ch) {
	tier = ti;
	if (ty == "Attack") {
		type = "Attack";
		name = tier + " " + type + " Potion";
	}
	else {
		type = "Defense";
		name = tier + " " + type + " Potion";
	}

	if (tier == "Small") {
		potency = 5;
		value = 350;
	}
	else if (tier == "Medium") {
		potency = 10;
		value = 850;
	}
	else if (tier == "Large" || tier == "Full") {
		tier == "Large";
		potency = 15;
		value = 1350;
	}
}

Special_Potions::Special_Potions(std::string t, Character& ch) : Items(ch) {
	tier = t;
	name = tier + " Mana Potion";
	if (tier == "Small") {
		potency = 15;
		value = 35;
	}
	else if (tier == "Medium") {
		potency = 30;
		value = 370;
	}
	else if (tier == "Large") {
		potency = 60;
		value = 600;
	}
	else if (tier == "Full") {
		potency = 1000;
		value = 750;
	}
}