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
class NPC;

class event
{
public:
	
	//constructor
	event();
	event(std::string music);

	virtual void trigger(character& c);

protected:
	//members
	std::string music;
	bool isDone = false;
};

//waiting room
class waitingRoomEvent : public event	//garbagedans
{
public:
	waitingRoomEvent();
	void trigger(character& c);
};

//storage room
class storageRoomevent : public event	//crazed vaccuum
{
public: 
	storageRoomevent();
	void trigger(character& c);
};

//cellar
class cellarEvent : public event	//putrid python
{
public:
	cellarEvent();
	//void trigger(character& c);
};

//mailbox
class mailboxEvent : public event	//stores 3-5 NPC's, depending on level, you will talk to an NPC.
{
public:
	mailboxEvent();
	void trigger(character& c);
};

//the rusty bucket
class RustyBucketEvent : public event
{
public:
	RustyBucketEvent();	//rusty bucket will be big switch statement
	void trigger(character& c);
};

//Le' Hospitale
class HospitalEvent : public event	//a bunch of NPC's
{
public:
	HospitalEvent();	//same idea as mailbox, gives different lore dialogue
	void trigger(character& c);
	int counter = 0;
};

//1st floor??

//mysterious room (janitorius' office)
class FinalEvent : public event		/*may have alternate endings, help janitorius or kill*/
{									//if kill you fight Grime Reaper, if help, Dirty Bubble will possess him and you have to kill him
public:
	FinalEvent();
	void trigger(character& c);
};



//lung care unit
/*class lungEvent : public event	//one MucusMaw
{
public:
	lungEvent();
	void trigger(character& c);
};*/

//2nd floor??

//dermatology

//operating room

//pharmacy

//supply closet

//laboratory

//basement??

//mental health room
class MentalEvent: public event	//garbagedans
{
public:
	MentalEvent();
	void trigger(character& c);
};

#endif
