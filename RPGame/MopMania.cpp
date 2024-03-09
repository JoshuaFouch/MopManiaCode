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



//global function definitions
int Start_Menu();	//beginning of the game
void Game_Tester_Menu();	//general form of our menus, probably going to be our pause menu
void Pause_Menu();	//pauses game to show menu
void Battle_Sequence(character& c, enemy& e);	//in-game battle
void GameShop_Menu();	//shopping menu
void GameOver();	//completely clears the terminal and prints game over, completely ending the code
void BattleStats(character& c, enemy& e);	//displays stats of a character and enemy

/*the game*/
int main()
{
	/*will contain a while loop with the bool "EndGame" (if true, kills while loop, if false, keep going). 
	Also, another bool "QuitGame" which checks if user wants to quitgame, if quitgame is true, the whole code will end
	and no end credits will be displayed*/

	Broomba b("Broomba", 100, 15, 30);
	SwifterJetWet a("Jet", 100, 15, 20);
	BysonV8 v("Dude", 200, 10, 15);
	character c("character", 100, 20, 6);
	enemy bob("bob", 1);
	Duster d("Duster");

	//Start_Menu();
	//Battle_Sequence(v,bob);
	d.dialogue(b);


	return 0;
}

//global function definitions
int Start_Menu()
{
	#pragma comment(lib, "winmm.lib")
	//play music (ambient music)
	PlaySound(TEXT("void.wav"), NULL, SND_FILENAME | SND_ASYNC);

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
			//stop ambient music
			PlaySound(0, 0, 0);
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
			std::cout << " \t\t\n\nThe World of MOP MANIA" << std::endl;
			color(7);
			charChoice = 1;
			kill = true;
			break;
		case 2:
			std::cout << "You have chosen well, the Swifter JetWet will serve you well on your journey" << std::endl;
			charChoice = 2;
			Sdelay(3);
			std::cout << "My dear JetWet, go and defeat all the trash and grime off our precious land. " << std::endl;
			std::cout << "Defeat all our enemies, and purge the world from the sludge and filth \n to restore it as it once was, " << std::endl;
			clear();
			color(5);
			std::cout << " The World of MOP MANIA" << std::endl;
			color(7);
			kill = true;
			break;
		case 3:
			clear();
			std::cout << "You have chosen well, the Byson V8 will serve you well on your journey" << std::endl;
			charChoice = 3;
			Sdelay(3);
			std::cout << "My dear Byson, go and defeat all the trash and grime off our precious land. " << std::endl;
			std::cout << "Defeat all our enemies, and purge the world from the sludge and filth \n to restore it as it once was, " << std::endl;
			clear();
			color(5);
			std::cout << " The World of MOP MANIA" << std::endl;
			color(7);
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
void GameOver()
{
	PlaySound(TEXT("dies-irae-chant.wav"), NULL, SND_FILENAME | SND_ASYNC);
	clear();
	std::cout << "\n\n\t\tGAME OVER, YOU DIED.\n" << std::endl;
	Sdelay(5);

	PlaySound(0, 0, 0);
}
void BattleStats(character& c, enemy& e)
{
	clear();

	//character stats
	color(2);
	std::cout << "|-----[ " << c.get_name() << " ]-----| " << '\n';
	std::cout << "|Level: " << c.get_lvl() << "\n";
	std::cout << "|HP:" << c.get_hp() << "\n";
	std::cout << "|-----------------|" << '\n';

	//enemy stats
	color(4);
	std::cout << "\t\t\t\t\t|-----[ " << e.get_name() << " ]-----| " << '\n';
	std::cout << "\t\t\t\t\t|Level:" << e.get_lvl() << "\n";
	std::cout << "\t\t\t\t\t|HP:" << e.get_hp() << "\n";
	std::cout << "\t\t\t\t\t|----------------|" << '\n';
	color(7);
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
void Battle_Sequence(character& c, enemy& e)
{
	//plays battlemusic on loop
	#pragma comment(lib, "winmm.lib")
	PlaySound(TEXT("battlemusic.wav"), NULL, SND_FILENAME | SND_ASYNC);

	int run = 0;	//if character wants to run away from battle
	while (e.get_hp() > 0 && c.get_hp() > 0 && run == 0)
	{

		BattleStats(c, e);	//begins by display the stats
		std::cout << "What would you like to do? " << std::endl;
		std::cout << "\n1. " << c.get_aName1() << std::endl;
		std::cout << "2. " << c.get_aName2() << std::endl;
		std::cout << "3. " << c.get_aName3() << std::endl;
		std::cout << "4. " << c.get_aName4() << std::endl;
		std::cout << "5. Use Item" << std::endl;
		std::cout << "6. Check Stats" << std::endl;
		std::cout << "7. Attack Descriptions" << std::endl;
		std::cout << "8. Run (coward lol)" << std::endl;
		int choice;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			c.Attack1(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 2:
			c.Attack2(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 3:
			c.Attack3(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 4:
			c.Attack4(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 5:
			clear();
			c.Inventory();
			MSdelay(1500);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			break;
		case 6:
			clear();
			c.displayStats();
			break;
		case 7:
			clear();
			c.describeAttacks();
			break;
		case 8:
			clear();
			run = 1;
			break;
		default:
			std::cout << "Invalid choice, please choose again" << std::endl << std::endl;
			clear();
			MSdelay(1500);
			continue;
		}
	}

	if (e.get_hp() <= 0)
	{
		e.death();
		std::cout << "You WON " << std::endl;
		c.expPt();
		MSdelay(3000);
	}
	else if (c.get_hp() <= 0)
	{
		c.death();
		GameOver();
		std::cout << "YOU LOST LOSER, GOLD MINUS 3000" << std::endl;
		MSdelay(3000);
	}
	else if (run == 1)
	{
		std::cout << "You ran... Imagine being a coward..." << std::endl;
		MSdelay(3000);
	}
}
void Boss_Battle(character& c, enemy& e)
{
	//plays battlemusic on loop
	#pragma comment(lib, "winmm.lib")
	PlaySound(TEXT("battlemusic.wav"), NULL, SND_FILENAME | SND_ASYNC);

	int run = 0;	//if character wants to run away from battle
	while (e.get_hp() > 0 && c.get_hp() > 0 && run == 0)
	{

		BattleStats(c, e);	//begins by display the stats
		std::cout << "What would you like to do? " << std::endl;
		std::cout << "\n1. " << c.get_aName1() << std::endl;
		std::cout << "2. " << c.get_aName2() << std::endl;
		std::cout << "3. " << c.get_aName3() << std::endl;
		std::cout << "4. " << c.get_aName4() << std::endl;
		std::cout << "5. Use Item" << std::endl;
		std::cout << "6. Check Stats" << std::endl;
		std::cout << "7. Attack Descriptions" << std::endl;
		std::cout << "8. Run (coward lol)" << std::endl;
		int choice;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			c.Attack1(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 2:
			c.Attack2(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 3:
			c.Attack3(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 4:
			c.Attack4(e);	//character attacks
			MSdelay(1500);
			clear();
			BattleStats(c, e);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(1500);
			clear();
			break;
		case 5:
			std::cout << "Will display inventory" << std::endl;
			MSdelay(1500);
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			break;
		case 6:
			clear();
			c.displayStats();
			break;
		case 7:
			clear();
			c.describeAttacks();
			break;
		case 8:
			clear();
			run = 1;
			break;
		default:
			std::cout << "Invalid choice, please choose again" << std::endl << std::endl;
			clear();
			MSdelay(1500);
			continue;
		}
	}

	if (e.get_hp() <= 0)
	{
		e.death();
		std::cout << "You WON " << std::endl;
		c.expPt();
		MSdelay(3000);
	}
	else if (c.get_hp() <= 0)
	{
		c.death();
		GameOver();
		std::cout << "YOU LOST LOSER, GOLD MINUS 3000" << std::endl;
		MSdelay(3000);
	}
	else if (run == 1)
	{
		std::cout << "You ran... Imagine being a coward..." << std::endl;
		MSdelay(3000);
	}
}
