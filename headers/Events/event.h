#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include "inventory.h"
#include "Character.h"

class Event {
protected:
    Character& character;
	Inventory& i;
	bool isVisited, currentlyOccupied;
	std::string notVisitedSymbol, visitedSymbol;
public:
	Event() = delete; //forced to use overloaded c-tor
	Event(Character& ch, Inventory& inv, std::string vS = " .") : character(ch), i(inv), isVisited(false),
																  currentlyOccupied(false), notVisitedSymbol(" ?"),
																  visitedSymbol(vS) {}
    virtual ~Event() = default;

	virtual std::string getSymbol() const {
		return isVisited ? visitedSymbol : notVisitedSymbol;
	}

	virtual void performEvent() {
		isVisited = true;
		std::cout << "An event has occured!" << std::endl;
	}

	bool getIsVisited() const {
		return isVisited;
	}

	void visit() {
		isVisited = true;
	}

	void unVisit() {
		isVisited = false;
	}
};
#endif //event_h
