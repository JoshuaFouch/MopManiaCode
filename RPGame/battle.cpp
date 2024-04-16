#include "battle.h"
#include "character.h"
#include "enemy.h"
#include <string>
#include <iomanip>
#include <algorithm>


//regular battle
battle::battle() {};
void battle::BattleStats(character& c, enemy& e)
{
	size_t enemyLen = e.get_name().length() + 14;
	//enemy stats
	color(4);
	std::cout << "\t\t\t\t\t|-----[ " << e.get_name() << " ]-----|\n";
	std::cout << "\t\t\t\t\t| Level:" << e.get_lvl() << "\n";
	std::cout << "\t\t\t\t\t| HP:" << e.get_hp() << "\n";
	std::cout << "\t\t\t\t\t";
	std::cout << "|" << std::string(enemyLen, '-') << "|\n";

	size_t charLen = c.get_name().size() + 14;
	//character stats
	color(2);
	std::cout << "|-----[ " << c.get_name() << " ]-----|\n";
	std::cout << "| Level: " << c.get_lvl() << "\n";
	std::cout << "| HP:" << c.get_hp() << "\n";
	std::cout << "|" << std::string(charLen, '-') << "|\n";
	color(7);
	std::cout << "-----------------------------------------" << std::endl;
}
void battle::GameOver()
{
	playSFX("gameover.wav");
	clear();
	std::cout << "\n\n\t\tGAME OVER, YOU DIED.\n" << std::endl;
	Sdelay(5);
}
void battle::Battle_Sequence(character& c, enemy& e)
{
	playMusic("battlemusic.wav");

	int run = 0;	//if character wants to run away from battle
	while (e.get_hp() > 0 && c.get_hp() > 0 && run == 0)
	{
		clear();
		BattleStats(c, e);	//begins by display the stats
		whatText();
		color(8); std::cout << "\n[1]: "; color(7); std::cout << c.get_aName1() << std::endl;
		color(8); std::cout << "[2]: "; color(7); std::cout << c.get_aName2() << std::endl;
		color(8); std::cout << "[3]: "; color(7); std::cout << c.get_aName3() << std::endl;
		color(8); std::cout << "[4]: "; color(7); std::cout << c.get_aName4() << std::endl << std::endl;
		color(8); std::cout << "[5]: "; color(7); std::cout << "Use Item" << std::endl;
		color(8); std::cout << "[6]: "; color(7); std::cout << "Check stats" << std::endl;
		color(8); std::cout << "[7]: "; color(7); std::cout << "Attack Descriptions" << std::endl;
		color(8); std::cout << "[8]: "; color(7); std::cout << "Run (Be a coward)" << std::endl;
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
			//std::cout << "Nice try bud, you can't run." << std::endl;
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
		//play uplifting music
		e.makeDead();
		clear();
		std::cout << "You WON\n" << std::endl;
		c.expPt();
		c.winBattleMoney();
	}
	else if (c.get_hp() <= 0)
	{
		c.die();
		GameOver();
		std::cout << "\t\tYOU LOST..." << std::endl;
	}
	else if (run == 1)
	{
		endMusic();
		playMusic("OE.wav");
		std::cout << "You ran... Imagine being a coward..." << std::endl;
	}
	system("pause");
	endMusic();
}