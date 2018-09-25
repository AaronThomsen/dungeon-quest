#ifndef weapons_alcohol_bottle_h
#define weapons_alcohol_bottle_h

#include "weapon.h"

class Alcohol_Bottle : public Weapon {
public:
	Alcohol_Bottle(int uT, Character& ch, std::string attr = "");
};
#endif // weapons_alcohol_bottle_h
