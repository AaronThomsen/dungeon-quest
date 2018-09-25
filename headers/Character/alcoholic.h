#ifndef ALCOHOLIC_H
#define ALCOHOLIC_H

#include <string>
#include <vector> 

#include "Character.h"

class Alcoholic : public Character // A character that can stun monsters (or himself randomly), and takes percentage reduced damage
{
private:
	int tooDrunk = 0; //Count for invincibility
	int painLess = 80; // % of the initial incoming damage is changed to 
public:
	Alcoholic();

	int painOfAThousandHangovers();

	bool takeDamage(int dmg);

	void displayMoves();

	int useSpecial(int num, Monster* m);
};
#endif