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
	event(std::string music);

	bool get_isComplete();
	void isCompleted();
	void setIncomplete();

	virtual void cutScene(character& c);

protected:
	//members
	std::string music;
	bool isComplete = false;
};

class GrimeEvent : public event
{
public:
	/*will contain a scene, and then create a grimeReaper enemy and a grimeReaper battle object,
	 and then will call the battle_sequence passing in the grimeReaper into it*/
	void cutScene(character& c);
};

#endif
