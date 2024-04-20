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
void battle::GameOver(character& c)
{
	playSFX("OE.wav");
	clear();
	std::cout << "\n\n\t\tGAME OVER, YOU DIED.\n" << std::endl;
	Sdelay(10);
	clear();
	playMusic("void.wav");
	color(6);
	std::cout << "Janitorius: My dear " << c.get_name() << "..." << std::endl;
	Sdelay(3);
	std::cout << "It seems you have died... " << std::endl;
	Sdelay(2);
	std::cout << "Do not worry, I will take you back home to try again..." << std::endl;
	color(7);
	endMusic();
}
void battle::battleStart(character& c, enemy& e) {
	playSFX("riser.wav");
	for (int i = 0; i < 23; i++) {
		color(2); std::cout << c.get_name() << "!" << std::endl;
		color(7); std::cout << " - VERSUS -" << std::endl;
		color(4); std::cout << e.get_name() << "!" << std::endl;
		MSdelay(100);
		clear();
		color(3); std::cout << "\t" << c.get_name() << "!" << std::endl;
		color(7); std::cout << " - VERSUS -" << std::endl;
		color(5); std::cout << " " << e.get_name() << "!" << std::endl;
		MSdelay(100);
		clear();
		color(6); std::cout << " " << c.get_name() << "!" << std::endl;
		color(7); std::cout << " - VERSUS -" << std::endl;
		color(9); std::cout << "\t" << e.get_name() << "!" << std::endl;
		MSdelay(100);
		clear();
	}

}
void battle::Battle_Sequence(character& c, enemy& e)
{
	endMusic();
	battleStart(c, e);
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
			std::cout << "Nice try bud, you can't run." << std::endl;
			MSdelay(1500);
			continue;
		default:
			std::cout << "Invalid choice, please choose again" << std::endl << std::endl;
			MSdelay(1500);
			continue;
		}
	}
	if (e.get_hp() <= 0)
	{
		playSFX("fanfare.wav");
		e.makeDead();
		clear();
		c.expPt();
		c.winBattleMoney();
	}
	else if (c.get_hp() <= 0)
	{
		c.die();
		GameOver(c);
	}
	else if (run == 1)
	{
		endMusic();
		playMusic("OE.wav");
		std::cout << "You ran... Imagine being a coward..." << std::endl;
	}
	system("pause");
	clear();
	endMusic();
}


/*Grime Reaper/Dirty Bubble battle*/
void GoodFinalBattle::BattleStats(character& c, enemy& e, int& counter) {
	if (counter == 1) {
		std::string name = "Janitorius";
		size_t enemyLen = name.length() + 14;
		//enemy stats
		color(4);
		std::cout << "\t\t\t\t\t|-----[ "; color(6); std::cout << name; color(4); std::cout << " ]-----|\n";
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
	else if (counter == 2) {
		std::string name = "The Grime Reaper";
		size_t enemyLen = name.length() + 14;
		//enemy stats
		color(4);
		std::cout << "\t\t\t\t\t|-----[ "; color(6); std::cout << name; color(4); std::cout << " ]-----|\n";
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
	else if (counter == 3) {
		std::string name = "The Filthy Bubble";
		size_t enemyLen = name.length() + 14;
		//enemy stats
		color(4);
		std::cout << "\t\t\t\t\t|-----[ " << name << " ]-----|\n";
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
		counter = 1;
	}
}
void GoodFinalBattle::GameOver(character& c) {
	playSFX("OE.wav");
	clear();
	std::cout << "\n\n\t\tGAME OVER, YOU DIED.\n" << std::endl;
	Sdelay(13);
	clear();
	std::cout << "You will be taken back home..." << std::endl;
	system("pause");
	endMusic();
}
void GoodFinalBattle::Battle_Sequence(character& c, enemy& e) {
	endMusic();
	battleStart(c, e);
	playMusic("TheGrimeReaper.wav");
	int run = 0;
	int statCounter = 1;
	while (e.get_hp() > 0 && c.get_hp() > 0)
	{
		clear();
		BattleDialogue(c, e);
		clear();
		BattleStats(c, e, statCounter);	//begins by display the stats
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
			BattleStats(c, e, statCounter);
			c.Attack1(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e, statCounter);
			if (e.get_hp() <= 0)
			{
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			statCounter++;
			MSdelay(2000);
			clear();
			break;
		case 2:
			clear();
			BattleStats(c, e, statCounter);
			c.Attack2(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e, statCounter);
			if (e.get_hp() <= 0)
			{
				clear();
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			statCounter++;
			MSdelay(2000);
			clear();
			break;
		case 3:
			clear();
			BattleStats(c, e, statCounter);
			c.Attack3(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e, statCounter);
			if (e.get_hp() <= 0)
			{
				clear();
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			statCounter++;
			MSdelay(2000);
			clear();
			break;
		case 4:
			clear();
			BattleStats(c, e, statCounter);
			c.Attack4(e);	//character attacks
			MSdelay(2000);
			clear();
			BattleStats(c, e, statCounter);
			if (e.get_hp() <= 0)
			{
				clear();
				break;
			}
			e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
			statCounter++;
			MSdelay(2000);
			clear();
			break;
		case 5:
			clear();
			BattleStats(c, e, statCounter);
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
				BattleStats(c, e, statCounter);
				if (e.get_hp() <= 0)
				{
					clear();
					break;
				}
				e.nextMove(c, e.RandomNum());	//its the enemies turn to attack
				statCounter++;
				MSdelay(2000);
				break;
			}
		case 6:
			clear();
			BattleStats(c, e, statCounter);
			c.displayStats();
			break;
		case 7:
			clear();
			BattleStats(c, e, statCounter);
			c.describeAttacks();
			break;
		case 8:
			std::cout << "Nice try bud, you can't run." << std::endl;
			MSdelay(1500);
			//run = 1;
			continue;
		default:
			std::cout << "Invalid choice, please choose again" << std::endl << std::endl;
			MSdelay(1500);
			continue;
		}
	}
	if (e.get_hp() <= 0)
	{
		endMusic();
		e.makeDead();
		clear();
		c.expPt();
		c.winBattleMoney();
	}
	else if (c.get_hp() <= 0)
	{
		c.die();
		endMusic();
		GameOver(c);
	}
	else if (run == 1)
	{
		endMusic();
		playMusic("OE.wav");
		std::cout << "You ran... Imagine being a coward..." << std::endl;
	}
	system("pause");
	clear();
	endMusic();
}
void GoodFinalBattle::BattleDialogue(character& c, enemy& e) {
	//if a grime reaper is at 3/4 health
	if ((e.get_hp() <= ((0.75) * e.get_maxhp())) && (e.get_hp() > ((0.5) * e.get_maxhp()))) {
		std::cout << "I am at 75& health" << std::endl;
		system("pause");
	}
	else if (e.get_hp() <= ((0.5) * e.get_maxhp()) && (e.get_hp() > ((0.25) * e.get_maxhp()))) {
		std::cout << "I am at 50 health or smth" << std::endl;
		system("pause");
	}
	else if (e.get_hp() <= ((0.25) * e.get_maxhp())) {
		std::cout << "I am at 25 health or smth" << std::endl;
		system("pause");
	}
	else {
		return;
	}
}

void BadFinalBattle::BattleStats(character& c, enemy& e, int& counter) {
	if (counter == 1) {
		std::string name = "Janitorius";
		size_t enemyLen = name.length() + 14;
		//enemy stats
		color(4);
		std::cout << "\t\t\t\t\t|-----[ "; color(6); std::cout << name; color(4); std::cout << " ]-----|\n";
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
	else if (counter == 2) {
		std::string name = "The Grime Reaper";
		size_t enemyLen = name.length() + 14;
		//enemy stats
		color(4);
		std::cout << "\t\t\t\t\t|-----[ "; color(6); std::cout << name; color(4); std::cout << " ]-----|\n";
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
		counter = 1;
	}
}
void BadFinalBattle::BattleDialogue(character& c, enemy& e) {	//context: no such thing as Dirty Bubble, you must kill Grime Reaper because you turn evil
	//if a grime reaper is at 3/4 health
	if ((e.get_hp() <= ((0.75) * e.get_maxhp())) && (e.get_hp() > ((0.5) * e.get_maxhp()))) {
		std::cout << "I am at 75& health" << std::endl;
		system("pause");
	}
	else if (e.get_hp() <= ((0.5) * e.get_maxhp()) && (e.get_hp() > ((0.25) * e.get_maxhp()))) {
		std::cout << "I am at 50 health or smth" << std::endl;
		system("pause");
	}
	else if (e.get_hp() <= ((0.25) * e.get_maxhp())) {
		std::cout << "I am at 25 health or smth" << std::endl;
		system("pause");
	}
	else {
		return;
	}
}