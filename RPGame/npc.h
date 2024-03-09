#ifndef N_PC
#define N_PC

#include <iostream>
#include <string>

//forward declaration
class character;

//NPC CHARACTER
class NPC
{
public:
	//functions
	NPC();
	NPC(std::string name);
	std::string getName();
	virtual void dialogue(character& c);
protected:
	std::string name;
};


//NPC 1

class Duster : public NPC
{
public:

	Duster(std::string name);

	void dialogue(character& c);
};

#endif