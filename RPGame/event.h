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
class waitingRoomEvent : public event
{
public:
	waitingRoomEvent(enemy* one, enemy* two, enemy* three, battle* b);
	void trigger(character& c);
protected:
	//points to GARBAGEDANS
	enemy* one = NULL;
	enemy* two = NULL;
	enemy* three = NULL;
	battle* Garbagebattle = NULL;
	
};

//storage room
class storageRoomevent : public event
{
public: 
	storageRoomevent(enemy* one, battle* b);
	void trigger(character& c);
protected:
	//Crazed Vacuum
	enemy* one = NULL;
	battle* Vacuumbattle = NULL;
};

//cellar
class cellarEvent : public event
{
public:
	cellarEvent(enemy* one, battle* b);
	void trigger(character& c);
protected:
	//a singly putrid python
	enemy* one = NULL;
	battle* Putridbattle = NULL;
};

//mailbox
class mailboxEvent : public event	//stores 3-5 NPC's, depending on level, you will talk to an NPC.
{
public:
	mailboxEvent(NPC* one, NPC* two, NPC* three);
	void trigger(character& c);
protected:
	NPC* one;
	NPC* two;
	NPC* three;
};

//the rusty bucket
class RustyBucketEvent : public event
{
public:
	RustyBucketEvent();	//rusty bucket will be big switch statement
	void trigger(character& c);
};

//Le' Hospitale
class HospitalEvent : public event
{
public:
	HospitalEvent(NPC* one, NPC* two, NPC* three);	//same idea as mailbox, gives different lore dialogue
	void trigger(character& c);
protected:
	NPC* one;
	NPC* two;
	NPC* three;
};

//1st floor??

//mysterious room (janitorius' office)
class FinalEvent : public event		/*may have alternate endings, help janitorius or kill*/
{									//if kill you fight Grime Reaper, if help, Dirty Bubble will possess him and you have to kill him
public:
	FinalEvent(enemy* one, enemy* two, battle* final);
	void trigger(character& c);
protected:
	enemy* one;
	enemy* two;
	battle* final;
};

//lung care unit
class lungEvent : public event	//one MucusMaw
{
public:
	lungEvent(enemy* one, battle* b);
	void trigger(character& c);
protected:
	enemy* one;
	battle* b;
};

//2nd floor??

//dermatology

//operating room

//pharmacy

//supply closet

//laboratory

//basement??

//mental health room

#endif
