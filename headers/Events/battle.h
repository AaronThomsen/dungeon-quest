#ifndef BATTLE_H
#define BATTLE_H

#include <algorithm>
#include <random>
#include <vector>

#include "event.h"
#include "monsters.h"

class Battle : public Event {
private:
	Monster * getRandMonster();

	bool isDead;
	int floorNumber;
	Monster* monster; //the current monster for the current battle
public:
	Battle(Character& ch, Inventory& i, int f);

	~Battle();

	void performEvent() override;

	void monsterAttack(int maxHP);

	std::string getSymbol() const override;

};

#endif //battle_h
