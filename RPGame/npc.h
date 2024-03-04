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

private:
	std::string name;
};


#endif