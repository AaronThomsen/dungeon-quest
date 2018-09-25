#ifndef NO_EVENT_H
#define NO_EVENT_H

#include <iostream>

#include "Event.h"

class NoEvent : public Event {
public:
	NoEvent(Character& ch, Inventory& i) : Event(ch, i) {
		
	}

	void performEvent() override {
		isVisited = true;
		return;
	}
};

#endif //no_event_h