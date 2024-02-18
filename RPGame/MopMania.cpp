#include "character.h"
#include "enemy.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <stdlib.h>



//global function definitions
void Start_Menu();	//beginning of the game
void Game_Tester_Menu();	//general form of our menus, probably going to be our pause menu
character Mop_Selection();	//user gets to choose a type of mop, then the function will return an instance of class character
void Pause_Menu();	//pauses game to show menu
void Battle_Sequence(character& c, enemy& e);	//in-game battle
void GameShop_Menu();	//shopping menu
void GameOver();	//completely clears the terminal and prints game over, completely ending the code
void BattleStats(character& c, enemy& e);	//displays stats of a character and enemy
void clear();	//clears the screen
void delay();	//delays the next output







/*the game*/
int main()
{
	//Start_Menu();

	character c("Bob", 100, 50, 6);
	enemy e("Bill", 100, 1, 2);
	enemy f("Joel", 100, 1, 2);
	enemy j("Josh", 100, 1, 2);

	Battle_Sequence(c, e);

	//Battle_Sequence(c, f);

	//Battle_Sequence(c, j);

	c.displayStats();

	return 0;
}








//global function definitions
void Start_Menu()
{
#pragma comment(lib, "winmm.lib")
	//play music (ambient music)
	PlaySound(TEXT("void.wav"), NULL, SND_FILENAME | SND_ASYNC);

	//for different text colors
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "You wake up one day with no body... all you see is the void of darkness" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(6));
	std::cout << "You hear a voice calling in the distance:" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(4));
	SetConsoleTextAttribute(h, 6); //Janitorius (Tyler) is yellow text
	std::cout << "My dear soul,";
	std::cout << " I am Janitorius, the custodian of Le Hospitale." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << "You seem to have lost all your memory from that day." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << "You died...";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << " You unfortunately bit your tongue too hard until your legs began to fall off" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(5));
	std::cout << "\nWell anyways, you failed in your previous life so now I will offer you a new life" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "A life as a cleaning mop...";
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << " Will you accept this new life?";
	SetConsoleTextAttribute(h, 7);
	std::cout << " type: [y/n]" << std::endl;
	std::string choice;
	std::cin >> choice;
	SetConsoleTextAttribute(h, 6);

	if (choice == "y")
	{
		std::cout << "\nAs you should..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(4));
	}
	else
	{
		PlaySound(0, 0, 0);
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Okay... time to DIE AGAIN..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << "\033[2J\033[1;1H";
		SetConsoleTextAttribute(h, 7);

		return Start_Menu();
	}

	//end music
	PlaySound(0, 0, 0);
	//end text color
	SetConsoleTextAttribute(h, 7);
}

void GameOver()
{
	PlaySound(TEXT("dies-irae-chant.wav"), NULL, SND_FILENAME | SND_ASYNC);
	std::cout << "\033[2J\033[1;1H";
	std::cout << "\n\n\t\tGAME OVER, YOU DIED.\n" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(5));

	PlaySound(0, 0, 0);
}

void BattleStats(character& c, enemy& e)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//character stats
	SetConsoleTextAttribute(h, 2);
	std::cout << "|-----[ " << c.get_name() << " ]-----| " << '\n';
	std::cout << "|Level: " << c.get_level() << "\n";
	std::cout << "|HP:" << c.get_hp() << "\n";
	std::cout << "|-----------------|" << '\n';

	//enemy stats
	SetConsoleTextAttribute(h, 4);
	std::cout << "\t\t\t\t\t|-----[ " << e.get_name() << " ]-----| " << '\n';
	std::cout << "\t\t\t\t\t|HP:" << e.get_hp() << "\n";
	std::cout << "\t\t\t\t\t|----------------|" << '\n';
	SetConsoleTextAttribute(h, 7);

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
	int run = 0;	//if character wants to run away from battle
	while (e.get_hp() >= 0 && c.get_hp() >= 0 && run == 0)
	{

		BattleStats(c, e);	//begins by display the stats
		std::cout << "What would you like to do? " << std::endl;
		std::cout << "\n1. " << c.get_aName1() << std::endl;
		std::cout << "2. " << c.get_aName2() << std::endl;
		std::cout << "3. " << c.get_aName3() << std::endl;
		std::cout << "3. " << c.get_aName4() << std::endl;
		std::cout << "5. Use Item" << std::endl;
		std::cout << "6. Check stats" << std::endl;
		std::cout << "7. Run (coward lol)" << std::endl;
		int choice; 
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			c.Attack1(c, e);	//character attacks
			delay();
			clear();
			BattleStats(c, e);
			e.nextMove(e, c, 1);	//its the enemies turn to attack
			delay();
			clear();
			break;
		case 2:
			c.Attack2(c, e);	//character attacks
			e.nextMove(e, c, 1);	//its the enemies turn to attack
			delay();
			clear();
			break;
		case 3:
			c.Attack3(c, e);	//character attacks
			e.nextMove(e, c, 1);	//its the enemies turn to attack
			delay();
			clear();
			break;
		case 4:
			c.Attack4(c, e);	//character attacks
			e.nextMove(e, c, 1);	//its the enemies turn to attack
			delay();
			clear();
			break;
		case 5:
			std::cout << "Will display inventory" << std::endl;
			delay();
			e.nextMove(e, c, e.RandomNum());	//its the enemies turn to attack
			break;
		case 6:
			c.displayStats();
			break;
		case 7:
			clear();
			run = 1;
			break;
		default:
			std::cout << "Invalid choice, please choose again" << std::endl << std::endl;
			clear();
			delay();
			continue;
		}
	}
	if (e.get_hp() <= 0)
	{
		std::cout << "You WON " << std::endl;
		c.expPt();
	}
	else if (c.get_hp() <= 0)
	{
		std::cout << "YOU LOST LOSER, GOLD MINUS 3000" << std::endl;
	}
	else if (run == 1)
	{
		std::cout << "You ran..." << std::endl;
	}
}

void clear()
{
	std::cout << "\033[2J\033[1;1H";
}

void delay()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(1500));
}
