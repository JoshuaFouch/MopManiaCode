#include "character.h"
#include "enemy.h"
#include "utility.h"
#include "npc.h"


NPC::NPC()
{
	this->name = "Average Joe";
}

NPC::NPC(std::string name)
{
	this->name = name;
}

std::string NPC::getName()
{
	return name;
}

void NPC::dialogue(character& c)
{
	color(3);
	std::cout << this->name << ": What is up?" << std::endl;
}