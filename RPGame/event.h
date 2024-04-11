/*an event will be able to have its own music and store it's own enemy.
this will be used for cutscenes before a boss battle.
the boss will be stored in an event*/
#ifndef _EVENT_H
#define _EVENT_H

#include <iostream>
#include "utility.h"

//forward declarations
class character;
class enemy;
class battle;

class event
{
public:
	//functions
	
	//constructor
	event();
	event(std::string music);


	bool isComplete = false;

	virtual void trigger(character& c);

protected:
	//members
	std::string music;
};


#endif
