#include "character.h"
#include "enemy.h"

enemy::enemy()
{
	this->name = "enemy";
	this->att = 50;
	this->def = 50;
	this->hp = 100;
}

enemy::enemy(std::string name, int hp, int att, int def)
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

int enemy::get_lvl()
{
	return lvl;
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


void enemy::exPt(character& c)
{
	//if the characters level is at a certain point, the enemy will level up a certain amount as well
}






