#include "character.h"
#include "enemy.h"

enemy::enemy(std::string name, int att, int def, int hp)
{
	this->name = name;
	this->att = att;
	this->def = def;
	this->hp = hp;
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
	int random = rand() % 4;//calls a random number 1,4
	return random;
}

void enemy::damaged(int oppAtt)
{
	hp -= (oppAtt - (def / 2));
	//enemy gets attack
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

void enemy::nextMove(enemy e, character c, int random)
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
	}
}
