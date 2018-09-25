#ifndef ADVENTURER_H
#define ADVENTURER_H

#include <string>
#include <vector> 

#include "Character.h"

class Adventurer : public Character // A character that gets bonus upgrades when upgrading items 
{
private:
	int upgradeFactor = 2;
						   
public:
	Adventurer();
};
#endif //ADVENTURER_H
