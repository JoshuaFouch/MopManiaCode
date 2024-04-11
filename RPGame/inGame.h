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

	Sdelay(3);
	std::cout << "You wake up one day with no body... all you see is the void of darkness" << std::endl;
	Sdelay(6);
	std::cout << "You hear a voice calling in the distance:" << std::endl;
	Sdelay(4);
	color(6);	//Janitorius (Tyler) is yellow text
	std::cout << "My dear soul,";
	std::cout << " I am Janitorius, the custodian of Le Hospitale." << std::endl;
	Sdelay(4);
	std::cout << "You seem to have lost all your memory from that day." << std::endl;
	Sdelay(4);
	std::cout << "You died...";
	Sdelay(4);
	std::cout << " Unfortunate. " << std::endl;
	Sdelay(3);
	std::cout << "\nWell anyways, you failed in your previous life so now I will offer you a new life" << std::endl;
	Sdelay(3);
	std::cout << "A life as a cleaning mop...";
	Sdelay(4);
	std::cout << " Will you accept this new life?";
	color(7);
	std::cout << " type: [y/n]" << std::endl;
	std::string choice;
	std::cin >> choice;
	color(6);

	if (choice == "y")
	{
		std::cout << "As you should..." << std::endl;
		Sdelay(4);
	}
	else
	{
		PlaySound(0, 0, 0);
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
		std::cout << "Choose a cleaning mop host..." << std::endl;
		Sdelay(3);
		int x;
		color(7);
		std::cout << "\n1. Broomba, the Explosive Custodian" << std::endl;
		Sdelay(2);
		std::cout << "\tA high-energy soldier with a passion for cleaning up messes in a blast." << std::endl;
		Sdelay(2);
		std::cout << "\tThis broombastic soldier can turn any cleaning session into a dazzling display of pyrotechnic prowess" << std::endl;
		Sdelay(2);
		std::cout << "\tBroomba roams Mop-topia, leaving sparkling trails of cleanliness and a touch of controlled chaos" << std::endl;
		Sdelay(3);

		std::cout << "\n2. Swifter JetWet, the Splashy Sentinel" << std::endl;
		Sdelay(2);
		std::cout << "\tSwifter JetWet takes cleanliness to new depths! JetWet gained its aquatic powers by the ancient water sage, " << std::endl;
		Sdelay(2);
		std::cout << "\tMrs. Clean. Now, armed with the ability to control water, JetWet jets across Mop-topia," << std::endl;
		Sdelay(2);
		std::cout << "\tleaving a trail of cleanliness and refreshing splashes. JetWet seeks to mop away the dirt and" << std::endl;
		std::cout << "\tgrime that threaten the land." << std::endl;
		Sdelay(3);

		std::cout << "\n3. Byson V8, the cyclonic custodian" << std::endl;
		Sdelay(2);
		std::cout << "\tCrafted, in the legendary Byson Forge, the BysonV8 harnessed the power of air origins, becoming a vacuum marvel." << std::endl;
		Sdelay(2);
		std::cout << "\tByson V8 roams Mop-topia, a swirling force that sucks up dirt and leaves behind a breath of pristine air" << std::endl;
		std::cout << "\tprotecting the realm from the chaos of dust and debris." << std::endl;
		Sdelay(3);
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
			clear();
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
			clear();
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
			clear();
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

#endif
