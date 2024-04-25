#ifndef IN_GAME
#define IN_GAME
#include "character.h"
#include "enemy.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <stdlib.h>
#include "utility.h"
#include "npc.h"


int Start_Menu()
{
	playMusic("void.wav");
	clear();
	Sdelay(3);
	std::cout << "You wake up one day with no body... all you see is the void of darkness" << std::endl;
	Sdelay(6);
	std::cout << "You hear a voice calling in the distance:" << std::endl;
	Sdelay(4);
	color(6);	//Janitorius (Grime Reaper) is yellow text
	std::cout << "My dear soul,";
	Sdelay(2);
	std::cout << " I am Janitorius, "; MSdelay(720); std::cout <<"the custodian of Le' Hospitale"; ellipsis();
	Sdelay(2);
	std::cout << "\nYou seem to have lost all your memory from that day." << std::endl;
	Sdelay(4);
	std::cout << "You "; MSdelay(800); std::cout << "died"; ellipsis();
	Sdelay(2);
	std::cout << " Unfortunate. " << std::endl;
	Sdelay(3);
	std::cout << "\nWell anyways, you failed in your previous life so now I will offer you a new life"; ellipsis();
	Sdelay(1);
	std::cout << "\nA life"; ellipsis(); std::cout << " as a"; ellipsis(); std::cout << " cleaning"; MSdelay(670); std::cout << " supply"; ellipsis();
	Sdelay(4);
	std::cout << "\nWill you accept this new life?...";
	color(8);
	std::cout << " type: [y/n]" << std::endl;
	color(7);
	std::string choice;
	std::cin >> choice;
	color(6);

	if (choice == "y")
	{
		clear();
		std::cout << "As you should..." << std::endl;
		Sdelay(4);
	}
	else
	{
		endMusic();
		clear();
		Sdelay(5);
		std::cout << "Okay... goodbye..." << std::endl;
		Sdelay(4);
		clear();
		color(7);
		return 0;
	}

	int charChoice;
	bool kill = false;
	while (kill == false)
	{
		clear();
		std::cout << "Choose a cleaning supply..." << std::endl;
		Sdelay(3);
		int x;
		color(7);
		std::cout << "\n"; color(8); std::cout << "[1]: "; color(6); std::cout << "Broomba, the Explosive Custodian" << std::endl;
		Sdelay(2);
		std::cout << "\tA high-energy soldier with a passion for cleaning up messes in a blast." << std::endl;
		Sdelay(2);
		std::cout << "\tThis broombastic soldier can turn any cleaning session into a dazzling display of pyrotechnic prowess" << std::endl;
		Sdelay(2);
		std::cout << "\tBroomba roams MopMania, leaving sparkling trails of cleanliness and a touch of controlled chaos" << std::endl;
		Sdelay(3);

		std::cout << "\n"; color(8); std::cout << "[2]: "; color(6); std::cout << "Swifter JetWet, the Splashy Sentinel" << std::endl;
		Sdelay(2);
		std::cout << "\tSwifter JetWet takes cleanliness to new depths! JetWet gained its aquatic powers by the ancient water sage, " << std::endl;
		Sdelay(2);
		std::cout << "\tMrs. Clean. Now, armed with the ability to control water, JetWet jets across Mop-topia," << std::endl;
		Sdelay(2);
		std::cout << "\tleaving a trail of cleanliness and refreshing splashes. JetWet seeks to mop away the dirt and" << std::endl;
		std::cout << "\tgrime that threaten the land." << std::endl;
		Sdelay(3);

		std::cout << "\n"; color(8); std::cout << "[3]: "; color(6); std::cout << "Byson V8, the cyclonic custodian" << std::endl;
		Sdelay(2);
		std::cout << "\tCrafted, in the legendary Byson Forge, the BysonV8 harnessed the power of air origins, becoming a vacuum marvel." << std::endl;
		Sdelay(2);
		std::cout << "\tByson V8 roams MopMania, a swirling force that sucks up dirt and leaves behind a breath of pristine air" << std::endl;
		std::cout << "\tprotecting the realm from the chaos of dust and debris." << std::endl;
		Sdelay(3);
		color(7);
		std::cin >> x;
		color(6);

		switch (x)
		{
		case 1:
			playMusic("GoDown.wav");
			clear();
			std::cout << "You have chosen well, the Broomba will serve you well on your journey" << std::endl;
			Sdelay(3);
			std::cout << "My dear Broomba, go and defeat all the trash and grime off our precious land. " << std::endl;
			Sdelay(4);
			std::cout << "Defeat all our enemies, and purge the world from the sludge and filth \n to restore it as it once was, " << std::endl;
			Sdelay(3);
			color(5);
			std::cout << "\nThe World of MOP MANIA\n" << std::endl;
			color(7);
			system("pause");
			charChoice = 1;
			kill = true;
			break;
		case 2:
			playMusic("GoDown.wav");
			clear();
			std::cout << "You have chosen well, the JetWet will serve you well on your journey" << std::endl;
			Sdelay(3);
			std::cout << "My dear JetWet, go and defeat all the trash and grime off our precious land. " << std::endl;
			Sdelay(4);
			std::cout << "Defeat all our enemies, and purge the world from the sludge and filth \n to restore it as it once was, " << std::endl;
			Sdelay(3);
			color(5);
			std::cout << "\nThe World of MOP MANIA\n" << std::endl;
			color(7);
			system("pause");
			charChoice = 2;
			kill = true;
			break;
		case 3:
			playMusic("GoDown.wav");
			clear();
			std::cout << "You have chosen well, the BysonV8 will serve you well on your journey" << std::endl;
			Sdelay(3);
			std::cout << "My dear BysonV8, go and defeat all the trash and grime off our precious land. " << std::endl;
			Sdelay(4);
			std::cout << "Defeat all our enemies, and purge the world from the sludge and filth \n to restore it as it once was, " << std::endl;
			Sdelay(3);
			color(5);
			std::cout << "\nThe World of MOP MANIA\n" << std::endl;
			color(7);
			system("pause");
			charChoice = 3;
			kill = true;
			break;
		default:
			clear();
			std::cout << "Try again" << std::endl;
			continue;
		}
	}

	endMusic();
	//end text color
	color(7);
	return charChoice;
}

void EndCredits() {
	endMusic();
	playMusic("creativity.wav");
	clear();
	color(2);
	std::cout << "MOP MANIA: The Purging of Le' Hospitale\n\n";
	Sdelay(2);
	color(7);
	std::cout << "\tcreated by:\n";
	Sdelay(1);
	std::cout << "\t Joshua Fouch\n";
	Sdelay(1);
	std::cout << "\t Seamus Sommers\n";
	Sdelay(1);
	std::cout << "\t Eljay Jimenez\n";
	Sdelay(3);

	std::cout << "end credits..." << std::endl;
	system("pause");
}

#endif
