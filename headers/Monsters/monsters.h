#ifndef MONSTERS_H
#define MONSTERS_H

#include <string>
#include <vector>
#include <random>
#include <iostream>

class Monster {
protected:
	std::string name;
	enum {HP, ATK, DEF, NumberOfStats};
	enum status { PSN, SLP, PAR, statusNum };
	std::vector<int> stats;
	int status;
	int sleepCount;
	int gold;

	struct ability {
		std::string abilityName;
		int power;

		//Constructor : aN = abilityName, aT = abilityType, aP = abilityPower
		ability(std::string aN, int aP) : abilityName(aN), power(aP) {}
	};

	ability move;

public:
	Monster(std::string monsterName, int hp, int a, int d, std::string aN, int aP);
	Monster() = delete;

	virtual ~Monster() = default;

	virtual void printAscii() const {}
	virtual std::string aName() { return "Kibble"; } // These two lines are ONLY for Doggos
	virtual int aPower() { return 20; }

	void setStat(int stat, int amount);

	void setGold(int amt);

	int getGold() const;

	int getStatus() const;

	std::string getStrStatus() const;

	void setStatus(int status);

	int getAbilityPower() const;

	int getATK() const;

	int getDEF() const;

	int getHP() const;

	void healMonster(int amt);

	std::string getMonsterName() const;

	std::string getAbilityName() const;

	virtual int attack();

	//This function will return TRUE if monster is still alive and FALSE if dead
	bool takeDamage(int dmg);

	bool takePoisonDamage(int dmg);
};

class AngrySpider : public Monster {
public:
	AngrySpider() : Monster("Angry Spider", 25, 13, 8, "Web Shot", 5) {}
};

class Berserker : public Monster {
public:
	Berserker() : Monster("Berserker", 60, 30, 15, "Mace Pummel", 13) {}
};

class BulkyOrc : public Monster {
public:
	BulkyOrc() : Monster("Bulky Orc", 200, 30, 60, "Axe Swing", 15) {}
};

class Chimera : public Monster {
public:
	Chimera() : Monster("Chimera", 70, 20, 24, "Maul", 8) {}
};

class Goblin : public Monster {
public:
	Goblin() : Monster("Goblin", 20, 10, 13, "Tantrum", 5) {}
};

class Golem : public Monster {
public:
	Golem() : Monster("Golem", 80, 15, 45, "Rock Smash", 9) {}
};

class GreenSlime : public Monster {
public:
	GreenSlime() : Monster("Green Slime", 30, 8, 5, "Slime Toss", 5) {}
};

class Necromancer : public Monster {
public:
	Necromancer() : Monster("Necromancer", 130, 40, 35, "Rising of the Dead", 25) {}
};


class SkeletonKing : public Monster {
public:
	SkeletonKing() : Monster("Skeleton King", 120, 50, 40, "Sword Slash", 20) {}
};


class SkeletonSoldier : public Monster {
public:
	SkeletonSoldier() : Monster("Skeleton Soldier", 65, 32, 20, "Sword Slash", 8) {}
};

class Doggo : public Monster {
public:
	Doggo() : Monster("Doggo", 150, 60, 50, "Kibble", 25) {} // Kibble is a healing ability that heals the Doggo for 20 health
	virtual std::string aName() { return "Kibble"; }
	virtual int aPower() { return 50; }
	virtual int attack();

	virtual void printAscii() const;
};

class ScaredDoggo : public Monster {
public:
	ScaredDoggo() : Monster("Scared Doggo", 1000, 1, 0, "Cry", 80) {}
	ability PackLeader = ability("Cry", 5);
	virtual std::string aName() { return PackLeader.abilityName; }
	virtual int aPower() { return PackLeader.power; }
	void printAscii() const;
};

class MadDoggo : public Monster {
public:
	MadDoggo() : Monster("Mad Doggo", 200, 35, 30, "Rabid Bite", 20) {}
	ability DogEatDog = ability("Rabid Bite", 20); // If Puppers are still alive after the counter, the Doggo will eat them and heal up
	virtual std::string aName() { return DogEatDog.abilityName; }
	virtual int aPower() { return DogEatDog.power; }

	void printAscii() const;
};

class FinalDoggo : public Monster {
public:
	FinalDoggo() : Monster("Final Doggo", 150, 0, 0, "Armadoggen", 0) {}
	ability DeadAsDog = ability("Armadoggen", 99999); // Charges up for a few turns, then does massive damage
	virtual std::string aName() { return DeadAsDog.abilityName; }
	virtual int aPower() { return DeadAsDog.power; }

	void printAscii() const;
};

class Pup : public Monster {
public:
	Pup() : Monster("Pupper", 250, 60, 50, "Bork", 10) {} // Bork is an ability that the Pups use that buffs them up, stacking
	int attack();

	void printAscii() const;
};

#endif
