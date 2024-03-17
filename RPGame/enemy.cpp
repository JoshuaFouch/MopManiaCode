#include "character.h"
#include "enemy.h"
#include <Windows.h>
#include <random>
#include "utility.h"

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
	// Initialize a random number generator
	std::random_device rd;
	std::mt19937 gen(rd());

	// Define the probabilities for each number
	std::discrete_distribution<int> distribution({ 2, 2, 2, 2, 1, 1, 1 });

	// Generate a random number
	int random = distribution(gen) + 1;

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
	clear(); //clear console
	color(8);  //gray colored text
	std::cout << "\033[2J\033[1;1H";    //clear console
	std::cout << "Name: " << get_name() << '\n';
	std::cout << "Level: " << get_lvl() << '\n';
	std::cout << "HP: " << get_hp() << '\n';
	std::cout << "Attack: " << get_att() << '\n';
	std::cout << "Defense: " << get_def() << '\n';
	std::cout << "This enemy is etc...." << '\n';   //description
	std::cout << std::endl;
	system("pause");
	color(8);
}

void enemy::Attack1(character& c)
{
	//color red
	color(4);
	std::cout << "\tenemy attacks you 1! " << std::endl;
	c.damaged(this->att);
	//back to default color
	color(7);
}
void enemy::Attack2(character& c)
{
	color(4);
	std::cout << "\tenemy attacks you 2!" << std::endl;
	c.damaged(this->att);
	color(7);
}
void enemy::Attack3(character& c)
{
	color(4);
	std::cout << "\tenemy attacks you 3!" << std::endl;
	c.damaged(this->att);
	color(7);
}
void enemy::Attack4(character& c)
{
	color(4);
	std::cout << "\tenemy attacks you 4!" << std::endl;
	c.damaged(this->att);
	color(7);
}
void enemy::Heal()
{
	color(4);
	//heals the enemy's hp depending on how much the hp the character lost
	std::cout << "\tHEALED" << std::endl;
	color(7);
}
void enemy::Fortify()
{
	color(4);
	//raises the defense stat depending on how much the hp the character lost
	std::cout << "\tFORTIFY" << std::endl;
	color(7);
}
void enemy::Enrage()
{
	color(4);
	//raises the attack stat depening on how much the hp the character lost
	std::cout << "\tENRAGE" << std::endl;
	color(7);
}

void enemy::nextMove(character& c, int random)
{
	switch (random) {
	case 1:
		Attack1(c);
		break;
	case 2:
		Attack2(c);
		break;
	case 3:
		Attack3(c);
		break;
	case 4:
		Attack4(c);
		break;
	case 5:
		Heal();
		break;
	case 6:
		Fortify();
		break;
	case 7:
		Enrage();
		break;
	}
}

//GarbageDan Implementations
GarbageDan::GarbageDan(std::string name, int lvl) : enemy(name, lvl)
{
	set_stats(60, 40, 100, lvl);
}

void GarbageDan::Attack1(character& c)
{
	color(4);
	std::cout << "\tTrash Bash!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void GarbageDan::Attack2(character& c)
{
	color(4);
	std::cout << "\tBin Blast!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void GarbageDan::Attack3(character& c)
{
	color(4);
	std::cout << "\tStale Food Shooter!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void GarbageDan::Attack4(character& c)
{
	color(4);
	std::cout << "\tStench Smear!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void GarbageDan::Heal()
{

}

void GarbageDan::Fortify()
{

}

void GarbageDan::Enrage()
{

}


//GrimeReaper Implementations
GrimeReaper::GrimeReaper(std::string name, int lvl)
{
	set_stats(100, 50, 50, lvl);
}
