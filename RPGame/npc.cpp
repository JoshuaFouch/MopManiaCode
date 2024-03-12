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

Duster::Duster(std::string name) : NPC(name) {}

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
		c.acq_healUp();
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
		color(3);
		std::cout << this->getName() << ": Oh well... TAKE IT, YOU WON'T SURVIVE OUT THERE" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your own will!" << std::endl;
	}
}

Latherus::Latherus(std::string name) : NPC(name) {}
void Latherus::dialogue(character& c)
{
	color(6); //this dialogue will be yellow
	std::cout << this->getName() << ": Hey! Would you like a potion I found on the ground?";
	color(7); std::cout << " [y/n]:";	//change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(6);
		std::cout << this->getName() << ": Alrighto! Here you goooo good adventurer!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(6);
		std::cout << this->getName() << ": Oh well... if that is what you desire adventurer" << std::endl;
		color(7);
	}
	else
	{
		color(6);
		std::cout << this->getName() << ": Nah you are taking this boi! *chucks at yout head* " << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your own will!" << std::endl;
	}
}

Scruberty::Scruberty(std::string name) : NPC(name) {}

void Scruberty::dialogue(character& c)
{
	color(9);//this dialogue will be Light Blue
	std::cout << this->getName() << ": Hello fellow adventurer mop, I've come across a potion, maybe you need it?";
	color(7); std::cout << " [y/n]:";    //change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(9);
		std::cout << this->getName() << ": Good choice! I lay upon you a potion good adventurer!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(6);
		std::cout << this->getName() << ": Oh well... if that is what you desire adventurer. Farewell..." << std::endl;
		color(7);
	}
	else
	{
		color(6);
		std::cout << this->getName() << ": *pulls a machine gun out* You will take it adventurer..." << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You slowly obtain the potion and run with fear!" << std::endl;
	}
}

Fizzletider::Fizzletider(std::string name) : NPC(name) {}

void Fizzletider::dialogue(character& c)
{
	color(5);//this dialogue will be Light Blue
	std::cout << this->getName() << ": Heyzzzz, you are looking for an item right??";
	color(7); std::cout << " [y/n]:";    //change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(5);
		std::cout << this->getName() << ": Well here you gozzz, now show some Energy and get back on your feet!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion, with a little fizz!" << std::endl;
	}
	else if (choice == "n")
	{
		color(5);
		std::cout << this->getName() << ": Oh well... if that is what you desire adventurer. Don't ask me again for that item now..." << std::endl;
		color(7);
	}
	else
	{
		color(5);
		std::cout << this->getName() << ": You want the bomb instead? Yeah , that's what I thought... take it" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your own will... burning with fizzly soap?" << std::endl;
	}
}

Bristlebeard::Bristlebeard(std::string name) : NPC(name) {}

void Bristlebeard::dialogue(character& c)
{
	color(8);//this dialogue will be Light Blue
	std::cout << this->getName() << ": Ahoy mate, seems I found something that might be of good use to you! What do you say?";
	color(7); std::cout << " [y/n]:";    //change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(8);
		std::cout << this->getName() << ": hhahaa there you go matey, be safe amongst the sea!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(8);
		std::cout << this->getName() << ": Aw come on mate, you are seriosuly passing it? Your loss!" << std::endl;
		color(7);
	}
	else
	{
		color(8);
		std::cout << this->getName() << ": Oh well... it's either that or you walk the plank... Oh good you want it." << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your better nature!" << std::endl;
	}
}