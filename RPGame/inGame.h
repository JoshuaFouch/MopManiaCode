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
	//play music (ambient music)
	PlaySound(TEXT("void.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

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
		std::cout << "\nAs you should..." << std::endl;
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
		std::cout << "Choose a host... I am sorry, I only have these cleaning supplies you can use..." << std::endl;
		int x;
		color(7);
		std::cout << "\n1. Broomba, the Explosive Custodian" << std::endl;
		std::cout << "\tA high-energy soldier with a passion for cleaning up messes in a blast." << std::endl;
		std::cout << "\tThis broombastic soldier can turn any cleaning session into a dazzling display of pyrotechnic prowess" << std::endl;
		std::cout << "\tBroomba roams Mop-topia, leaving sparkling trails of cleanliness and a touch of controlled chaos" << std::endl;

		std::cout << "\n2. Swifter JetWet, the Splashy Sentinel" << std::endl;
		std::cout << "\tSwifter JetWet takes cleanliness to new depths! JetWet gained its aquatic powers by the ancient water sage, " << std::endl;
		std::cout << "\tMrs. Clean. Now, armed with the ability to control water, JetWet jets across Mop-topia," << std::endl;
		std::cout << "\tleaving a trail of cleanliness and refreshing splashes. JetWet seeks to mop away the dirt and" << std::endl;
		std::cout << "\tgrime that threaten the land." << std::endl;

		std::cout << "\n3. Byson V8, the cyclonic custodian" << std::endl;
		std::cout << "\tCrafted, in the legendary Byson Forge, the BysonV8 harnessed the power of air origins, becoming a vacuum marvel." << std::endl;
		std::cout << "\tByson V8 roams Mop-topia, a swirling force that sucks up dirt and leaves behind a breath of pristine air" << std::endl;
		std::cout << "\tprotecting the realm from the chaos of dust and debris." << std::endl;
		color(6);
		std::cin >> x;

		switch (x)
		{
		case 1:
			//play uplifting music
			PlaySound(TEXT("GoDown.wav"), NULL, SND_FILENAME | SND_ASYNC);
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
			//play uplifting music
			PlaySound(TEXT("GoDown.wav"), NULL, SND_FILENAME | SND_ASYNC);
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
			charChoice = 1;
			kill = true;
			break;
		case 3:
			//stop ambient music
			PlaySound(0, 0, 0);
			//play uplifting music
			PlaySound(TEXT("GoDown.wav"), NULL, SND_FILENAME | SND_ASYNC);
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
			charChoice = 1;
			kill = true;
			break;
		default:
			clear();
			std::cout << "Try again" << std::endl;
			continue;
		}
	}

	//end music
	PlaySound(0, 0, 0);
	//end text color
	color(7);
	return charChoice;
}
void Game_Tester_Menu()
{
	int choice;
	while (true)
	{
		std::cout << "\nMop Mania\n";
		std::cout << "---------------------------------\n";
		std::cout << "1. Return to Game" << '\n';
		std::cout << "2. Enter Battle" << '\n';
		std::cout << "3. Manage Inventory" << '\n';
		std::cout << "4. Enter Shoppie" << '\n';
		std::cout << "5. Talk to Someone" << '\n';
		std::cout << "6. Quit Game" << '\n';
		std::cout << "---------------------------------\n";

		std::cin >> choice;

		if (choice == 6) {
			std::cout << "\nFarewell Mopdian! Come back again next time!" << '\n';
			break;
		}

		if (choice == 1) {
			//function returnToOverworld()
			std::cout << "returnToOverworld()";
			break;
		}
		else if (choice == 2) {
			//function enterBattle()
			std::cout << "enterBattle()";
			break;
		}
		else if (choice == 3) {
			//function manageInventory()
			std::cout << "Inventory()";
			break;
		}
		else if (choice == 4) {
			//function chatter()
			std::cout << "chatter()";
			break;
		}
		else if (choice == 5) {
			//function quitGame()
			std::cout << "quitGame()";
			break;
		}
		else
		{
			std::cout << "try again" << std::endl;
		}
	}
}
void GameOver()
{
	PlaySound(TEXT("gameover.wav"), NULL, SND_FILENAME | SND_ASYNC);
	clear();
	std::cout << "\n\n\t\tGAME OVER, YOU DIED.\n" << std::endl;
	Sdelay(5);

	PlaySound(0, 0, 0);
}














#endif
