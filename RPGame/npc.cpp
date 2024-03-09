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


//Duster NPC

void Duster::dialogue(character& c)
{
	color(3); //the color for an NPC's text will be "aqua" (check utility.cpp for more colors)
	std::cout << this->getName() << ": Hey! Would you like a potion I found on the ground?";
	color(7); std::cout << " [y/n]:";	//change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(3);
		std::cout << this->getName() << ": Alright! Here you go!" << std::endl;
		//c.addPotion or something, we will work on this implementation when we got the inventory working
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(3);
		std::cout << this->getName() << ": Oh well... good luck fighting the enemies then!" << std::endl;
		color(7);
	}
	else
	{
		std::cout << this->getName() << ": Oh well... TAKE IT, YOU WON'T SURVIVE OUT THERE" << std::endl;
		//c.addPotion or something
		color(7);
		std::cout << "You have obtained a potion against your own will!" << std::endl;
	}
}