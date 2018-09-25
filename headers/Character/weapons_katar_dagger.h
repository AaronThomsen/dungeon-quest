#ifndef weapons_katar_dagger_h
#define weapons_katar_dagger_h

#include "weapon.h"

class Katar_Dagger : public Weapon {
public:
	Katar_Dagger(int uT, Character& ch, std::string attr = "");
};
#endif // weapons_katar_dagger_h
