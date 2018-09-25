#ifndef weapons_magic_sword_h
#define weapons_magic_sword_h

#include "weapon.h"

class Magic_Sword : public Weapon {
public:
	Magic_Sword(int uT, Character& ch, std::string attr = "");
};
#endif // weapons_magic_sword_h
