#ifndef BAT_TLE
#define BAT_TLE
#include "character.h"
#include "enemy.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <stdlib.h>
#include "utility.h"

void BattleStats(character& c, enemy& e)
{
	//enemy stats
	color(4);
	std::cout << "\t\t\t\t\t|-----[ " << e.get_name() << " ]-----| " << '\n';
	std::cout << "\t\t\t\t\t|Level:" << e.get_lvl() << "\n";
	std::cout << "\t\t\t\t\t|HP:" << e.get_hp() << "\n";
	std::cout << "\t\t\t\t\t|----------------|" << '\n';

	//character stats
	color(2);
	std::cout << "|-----[ " << c.get_name() << " ]-----| " << '\n';
	std::cout << "|Level: " << c.get_lvl() << "\n";
	std::cout << "|HP:" << c.get_hp() << "\n";
	std::cout << "|-----------------|" << '\n';
	color(7);
	std::cout << "-----------------------------------------" << std::endl;
}

void Battle_Sequence(character& c, enemy& e)
{
	//plays battlemusic on loop
	PlaySound(TEXT("battlemusic.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	int run = 0;	//if character wants to run away from battle
	while (e.get_hp() > 0 && c.get_hp() > 0 && run == 0)
	{
		clear();
		BattleStats(c, e);	//begins by display the stats
		std::cout << "What would you like to do? " << std::endl;
		std::cout << "\n1. " << c.get_aName1() << std::endl;
		std::cout << "2. " << c.get_aName2() << std::endl;
		std::cout << "3. " << c.get_aName3() << std::endl;
		std::cout << "4. " << c.get_aName4() << std::endl << std::endl;
		std::cout << "5. Use Item" << std::endl;
		std::cout << "6. Check Stats" << std::endl;
		std::cout << "7. Attack Descriptions" << std::endl;
		std::cout << "8. Run (coward lol)" << std::endl;
		int choice;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			clear();
			BattleStats(c, e);
			c.Attack1(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e);
			if (e.get_hp() <= 0)
			{
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(2000);
			clear();
			break;
		case 2:
			clear();
			BattleStats(c, e);
			c.Attack2(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e);
			if (e.get_hp() <= 0)
			{
				clear();
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(2000);
			clear();
			break;
		case 3:
			clear();
			BattleStats(c, e);
			c.Attack3(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e);
			if (e.get_hp() <= 0)
			{
				clear();
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(2000);
			clear();
			break;
		case 4:
			clear();
			BattleStats(c, e);
			c.Attack4(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e);
			if (e.get_hp() <= 0)
			{
				clear();
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			MSdelay(2000);
			clear();
			break;
		case 5:
			clear();
			BattleStats(c, e);
			if (c.noItems() == true)
			{
				color(8);
				std::cout << "You have no items!" << std::endl;
				color(7);
				MSdelay(2000);
				break;
			}
			else
			{
				c.useInventory();
				clear();
				BattleStats(c, e);
				if (e.get_hp() <= 0)
				{
					clear();
					break;
				}
				e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
				MSdelay(2000);
				break;
			}
		case 6:
			clear();
			BattleStats(c, e);
			c.displayStats();
			break;
		case 7:
			clear();
			BattleStats(c, e);
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
		PlaySound(0, 0, 0);
		e.death();
		std::cout << "You WON\n" << std::endl;
		c.expPt();
		MSdelay(3000);
		clear();
	}
	else if (c.get_hp() <= 0)
	{
		c.death();
		GameOver();
		std::cout << "\t\tYOU LOST LOSER, GOLD MINUS 3000" << std::endl;
		MSdelay(3000);
		clear();
	}
	else if (run == 1)
	{
		PlaySound(0, 0, 0);
		std::cout << "You ran... Imagine being a coward..." << std::endl;
		MSdelay(3000);
		clear();
	}
}


#endif
