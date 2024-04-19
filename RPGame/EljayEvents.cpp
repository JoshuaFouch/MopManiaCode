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

/*RustyBucketEvent::RustyBucketEvent() {};

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

		std::cout << "What would you like to do?" << std::endl;
		std::cout << "================================================================" << std::endl;
		std::cout << ""; color(8); std::cout << "[1]: "; color(7); std::cout << "Rusty's Shop" << std::endl;
		std::cout << ""; color(8); std::cout << "[2]: "; color(7); std::cout << "Talk to Mrs. Clean" << std::endl;
		std::cout << ""; color(8); std::cout << "[3]: "; color(7); std::cout << "Talk to Bubble Momma" << std::endl;
		std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Get a Drink" << std::endl;
		std::cout << ""; color(8); std::cout << "[5]: "; color(7); std::cout << "Exit" << std::endl;
		std::cout << "================================================================" << std::endl;
		std::cin >> choice;

		if (choice == "1") //Rusty's Shop
		{
			//potions (att_up, def_up, heal_potion)
			//trade dead rats - > soaptokens
			color(7);
			std::cout << "You walked over to the shop to see what kind of items they may have..." << std::endl;
			MSdelay(4000);
			color(8); std::cout << "Ah adventurer, welcome to my shop..." << std::endl;
			MSdelay(2000);
			std::cout << "Take a gander of what I have: " << std::endl;
			MSdelay(3000);

			// game shop menu implementation

			system("pause");
			clear();
			continue;
		}
		else if (choice == "2") //Talk to Mrs. Clean
		{
			MrsClean MrsClean;
			MrsClean.dialogue(c);
			clear();
			continue;
		}
		else if (choice == "3") //Talk to Bubble Momma + Bubble Boy Event Encounter??
		{
			//function to call the Bubble Momma Dialogue
			color(1);
			//std::cout << "Ah the "; color(2); std::cout << "Grime Reaper..." << std::endl;
			MSdelay(2000);

			system("pause");
			clear();
			continue;
		}
		else if (choice == "4") //Drink Stuff
		{
			std::string choice;
			std::cout << " Oh sure! I can grab ya a hearty drink! What can I get you?" << std::endl;
			std::cout << "================================================================" << std::endl;
			std::cout << ""; color(8); std::cout << "[1]: "; color(7); std::cout << "Barnacle Berry Blast" << std::endl;
			std::cout << ""; color(8); std::cout << "[2]: "; color(7); std::cout << "Melon Grime" << std::endl;
			std::cout << ""; color(8); std::cout << "[3]: "; color(7); std::cout << "MudWeiser" << std::endl;
			std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
			std::cout << "================================================================" << std::endl;

			std::cin >> choice;
			if (choice == "1") //Barnacle Berry Blast
			{
				std::cout << "You grab the barnacle berry blast from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious berry blast!" << std::endl;
				//paid like 25 soap tokens
				system("pause");
			}
			else if (choice == "2") {
				std::cout << "You grab the melon grime from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious melon grime!" << std::endl;
				//paid like 25 soap tokens
				system("pause");
			}
			else if (choice == "3") {
				std::cout << "You grab the mudweiser from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious mudweiser!" << std::endl;
				Dotdot();
				std::cout << "You start feeling whoozy..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious again" << std::endl;
				//paid like 30 soaptokens
				system("pause");
			}
			else (choice == "4");
			{
				std::cout << "You have exited" << std::endl;
				//exit
			}
			clear();
			continue;
		}
	}
}*/