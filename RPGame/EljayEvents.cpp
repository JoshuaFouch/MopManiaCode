#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"
#include "npc.h"

//RustyBucket Shop Menu
/*
Rusty has like 50 kids, and once you die, Rusty will send his kids to get you when you die, however, 
they will steal some money from you to keep up with the rent and keep the Rusty Bucket open.

	Following items within the shop menu:
	====================================
		1. Shop
		2. Talk Mrs. Clean
		3. Talk to Bubble Mamma
		4. Get a Drink
	====================================

*/

RustyBucketEvent::RustyBucketEvent() {};

void RustyBucketEvent::trigger(character& c)
{
	endMusic();
	//playMusic();
	Sdelay(2);
	std::cout << "You entered the Rusty Bucket...." << std::endl;
	MSdelay(2000);
	std::cout << "It doesn't seem very lively in here..." << std::endl;
	MSdelay(3000);
	std::cout << "There seems to be a few places you can stop by..." << std::endl;
	MSdelay(3000);

	clear();
	while (true) {
		std::string choice;

		std::cout << "What would you like to do?\n" << std::endl;

		std::cout << ""; color(8); std::cout << "[1]: "; color(7); std::cout << "Rusty's Shop" << std::endl;
		std::cout << ""; color(8); std::cout << "[2]: "; color(7); std::cout << "Talk to Mrs. Clean" << std::endl;
		std::cout << ""; color(8); std::cout << "[3]: "; color(7); std::cout << "Talk to Bubble Momma" << std::endl;
		std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Get a Drink" << std::endl;
		std::cout << ""; color(8); std::cout << "[5]: "; color(7); std::cout << "Exit" << std::endl;
	
		std::cin >> choice;

		if (choice == "1") //Rusty's Shop
		{
			//potions (att_up, def_up, heal_potion)
			//trade dead rats - > soaptokens
			clear();
			color(7);
			std::cout << "You walked over to the shop to see what kind of items they may have..." << std::endl;
			MSdelay(4000);
			color(8); std::cout << "Ah adventurer, welcome to my shop..." << std::endl;
			MSdelay(2000);
			std::cout << "Take a gander of what I have: " << std::endl;
			MSdelay(3000);
			std::cout << " But I can't sell ya anything, sorry pal..." << std::endl;

			// game shop menu implementation
	
			system("pause");
			color(7);
			clear();
			continue;
		}
		else if (choice == "2") //Talk to Mrs. Clean
		{
			MrsClean MrsClean;
			MrsClean.dialogue(c);
			clear();
			color(7);
			continue;
		}
		else if (choice == "3") //Talk to Bubble Momma + Bubble Boy Event Encounter??
		{
			//function to call the Bubble Momma Dialogue
			color(1);
			std::cout << "Ah the "; color(2); std::cout << "Bubble Momma..." << std::endl;
			color(3);
			std::cout << "Did you find Bubble Boy??" << std::endl;
			MSdelay(2000);
			std::cout << "... " << std::endl;
			MSdelay(2000);
			color(7);
			system("pause");
			clear();
			continue;
		}
		else if (choice == "4") //Drink Stuff
		{
			std::string choice;
			
			clear();
			color(8); std::cout << " Oh sure! I can grab ya a hearty drink! What can I get you?" << std::endl;
			MSdelay(2000);
			color(7);
			std::cout << "=================================================" << std::endl;
			std::cout << ""; color(8); std::cout << "[1]: "; color(9); std::cout << "Barnacle Berry Blast" << std::endl;
			std::cout << ""; color(8); std::cout << "[2]: "; color(2); std::cout << "Melon Grime" << std::endl;
			std::cout << ""; color(8); std::cout << "[3]: "; color(8); std::cout << "MudWeiser" << std::endl;
			std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
			std::cout << "==================================================" << std::endl;

			std::cin >> choice;
			if (choice == "1") //Barnacle Berry Blast
			{
				clear();
				std::cout << "You grab the barnacle berry blast from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious berry blast!" << std::endl;
				//paid like 25 soap tokens
				color(7);
				system("pause");
				clear();
			}
			else if (choice == "2") 
			{
				clear();
				std::cout << "You grab the melon grime from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious melon grime!" << std::endl;
				//paid like 25 soap tokens
				color(7);
				system("pause");
				clear();
			}
			else if (choice == "3") 
			{
				clear();
				std::cout << "You grab the mudweiser from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious mudweiser!" << std::endl;
				MSdelay(3000);
				Dotdot();
				std::cout << "You start feeling whoozy..." << std::endl;
				MSdelay(4000);
				std::cout << "It's a delicious again" << std::endl;
				//paid like 30 soaptokens
				color(7);
				system("pause");
				clear();
			}
			else if (choice == "5")
			{
				std::cout << "You have exited" << std::endl;
				//exit
			}
			clear();
			continue;
		}
	}
}