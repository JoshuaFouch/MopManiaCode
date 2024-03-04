#ifndef NPC
#define NPC

#include <iostream>
#include <string>

//forward declaration
class character;

//NPC CHARACTER
class NPC
{
public:
	//functions
	NPC(std::string name);
	std::string getName();
	virtual void get_dialogue();

private:
	std::string name;
};


#endif