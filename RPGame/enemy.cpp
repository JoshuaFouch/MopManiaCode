#include "character.h"
#include "enemy.h"
#include <Windows.h>

enemy::enemy()
{
	this->name = "enemy";
	this->att = 50;
	this->def = 50;
	this->hp = 100;
}
enemy::enemy(std::string name, int lvl)	//hp=110 , att = 55, def = 55
{
	this->name = name;
	set_stats(100, 50, 50, lvl);
}

std::string enemy::get_name()
{
	return name;
}
int enemy::get_def()
{
	return def;
}
int enemy::get_hp()
{
	return hp;
}
int enemy::get_lvl()
{
	return lvl;
}
int enemy::get_att()
{
	return att;
}
void enemy::set_stats(int basehp, int baseatt, int basedef, int level)
{
	//automatically sets the base stats
	hp = basehp;
	att = baseatt;
	def = basedef;
	this->lvl = level;
	//changes base stats according to lvl, credit to Seamus
	hp += ((hp / 10) * lvl);
	att += ((att / 10) * lvl);
	def += ((def / 10) * lvl);
}
bool enemy::death()
{
	isDead = true;
	return isDead;
}
bool enemy::alive()
{
	isDead = false;
	return isDead;
}

void enemy::increaseHP(int exp)
{
	hp += exp;
}
void enemy::increaseAtt(int exp)
{
	att += exp;
}
void enemy::increaseDef(int exp)
{
	def += exp;
}

int enemy::RandomNum()
{
	srand((unsigned) time(NULL));//need to randomize seed with the time to make the random number actually different each time its run
	int random = rand() % 7;//calls a random number 1 to 7
	return random;
}
void enemy::damaged(int oppAtt)
{
	if ((oppAtt - (def / 2)) < 0) {
		hp--;
		return;
	}
	hp -= (oppAtt - (def / 2));
	//simulate enemy being damaged with a console output message.
}

void enemy::displayStats()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout << "\033[2J\033[1;1H"; //clear console
	SetConsoleTextAttribute(h, 8);  //gray colored text
	std::cout << "\033[2J\033[1;1H";    //clear console
	std::cout << "Name: " << get_name() << '\n';
	std::cout << "Level: " << get_lvl() << '\n';
	std::cout << "HP: " << get_hp() << '\n';
	std::cout << "Attack: " << get_att() << '\n';
	std::cout << "Defense: " << get_def() << '\n';
	std::cout << "This enemy is etc...." << '\n';   //description
	std::cout << std::endl;
	system("pause");
	SetConsoleTextAttribute(h, 7);
}

void enemy::Attack1(enemy& e, character& c)
{
	std::cout << "enemy attacks you 1! " << std::endl;
	c.damaged(e.att);
}
void enemy::Attack2(enemy& e, character& c)
{
	std::cout << "enemy attacks you 2!" << std::endl;
	c.damaged(e.att);
}
void enemy::Attack3(enemy& e, character& c)
{
	std::cout << "enemy attacks you 3!" << std::endl;
	c.damaged(e.att);
}
void enemy::Attack4(enemy& e, character& c)
{
	std::cout << "enemy attacks you 4!" << std::endl;
	c.damaged(e.att);
}
void enemy::Heal(enemy& e, character& c)
{
	//heals the enemy's hp depending on how much the hp the character lost
	std::cout << "HEALED" << std::endl;
}
void enemy::Fortify(enemy& e, character& c)
{
	//raises the defense stat depending on how much the hp the character lost
	std::cout << "FORTIFY" << std::endl;
}
void enemy::Enrage(enemy& e, character& c)
{
	//raises the attack stat depening on how much the hp the character lost
	std::cout << "ENRAGE" << std::endl;
}

void enemy::nextMove(enemy& e, character& c, int random)
{
	switch (random) {
	case 1:
		Attack1(e, c);
		break;
	case 2:
		Attack2(e, c);
		break;
	case 3:
		Attack3(e, c);
		break;
	case 4:
		Attack4(e, c);
		break;
	case 5:
		Heal(e, c);
		break;
	case 6:
		Fortify(e, c);
		break;
	case 7:
		Enrage(e, c);
		break;
	}
}


/* enemy GarbageDan(1);

	enemy GarbadeDan(6);
	
	
	
	*/



//GarbageDan Implementations




