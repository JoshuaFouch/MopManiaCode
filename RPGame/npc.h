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

//NPC 2 (Eljay)

class Latherus : public NPC
{
public:

	Latherus(std::string name);

	void dialogue(character& c);
};

//NPC 3 (Eljay)
class Scruberty : public NPC
{
public:

	Scruberty(std::string name);

	void dialogue(character& c);
};

//NPC 4 (Eljay)

class Fizzletider : public NPC
{
public:

	Fizzletider(std::string name);

	void dialogue(character& c);
};

//NPC 5 (Eljay)
class Bristlebeard : public NPC
{
public:

	Bristlebeard(std::string name);

	void dialogue(character& c);
};

#endif