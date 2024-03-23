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
enemy::enemy(int lvl)	//hp=110 , att = 55, def = 55
{
	this->name = "Enemy";
	set_stats(100, 50, 50, lvl);
}

void enemy::set_name(std::string name)
{
	this->name = name;
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
void enemy::add_hp(int val) {
	this->hp += val;
}
void enemy::add_att(int val) {
	this->att += val;
}
void enemy::add_def(int val) {
	this->def += val;
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
bool enemy::get_isDead()
{
	return isDead;
}
void enemy::makeDead()
{
	isDead = true;
}
void enemy::makeAlive()
{
	isDead = false;
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
	clear(); //clear console
	color(8);  //gray colored text
	clear();    //clear console
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
void enemy::Heal(character& c)
{
	color(4);
	//heals the enemy's hp depending on how much the hp the character lost
	std::cout << "\tHEALED" << std::endl;
	this->hp += (c.get_hp() / 5);
	color(7);
}
void enemy::Fortify(character& c)
{
	color(4);
	//raises the defense stat depending on how much the hp the character lost
	std::cout << "\tFORTIFY" << std::endl;
	this->def += (c.get_def() / 10);
	color(7);
}
void enemy::Enrage(character& c)
{
	color(4);
	//raises the attack stat depening on how much the hp the character lost
	std::cout << "\tENRAGE" << std::endl;
	this->att += (c.get_att() / 10);
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
		Heal(c);
		break;
	case 6:
		Fortify(c);
		break;
	case 7:
		Enrage(c);
		break;
	}
}

//GarbageDan Implementations
GarbageDan::GarbageDan(int lvl) : enemy(lvl)
{
	set_name("GarbageDan");
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

void GarbageDan::Heal(character& c)
{
	color(4);
	//heals the enemy's hp depending on how much the hp the character lost
	std::cout << "\tTRASH CONSUMPTION!" << std::endl;
	MSdelay(1000);
	this->add_hp((c.get_hp() / 20));
	color(7);
	std::cout << "Enemy's health went up by: " << (c.get_hp() / 20) << std::endl;
	MSdelay(1000);
}

void GarbageDan::Fortify(character& c)
{
	color(4);
	//raises the defense stat depending on how much the hp the character lost
	std::cout << "\tSMELLY STURDY" << std::endl;
	MSdelay(1000);
	this->add_def((c.get_def() / 20));
	color(7);
	std::cout << "Enemy's defense went up by: " << (c.get_att() / 20) << std::endl;
	MSdelay(1000);
}

void GarbageDan::Enrage(character& c)
{
	color(4);
	//raises the attack stat depening on how much the hp the character lost
	std::cout << "\tRANCID RAGE" << std::endl;
	MSdelay(1000);
	this->add_att((c.get_att() / 20));
	color(7);
	std::cout << "Enemy's attack went up by: " << (c.get_att() / 20) << std::endl;
	MSdelay(1000);
}

//this is an enemy called 'MuscusMaw' Implementation
MucusMaw::MucusMaw(int lvl) : enemy(lvl)
{
	set_name("MucusMaw");
	set_stats(70, 60, 30, lvl); //HP 70, Att 60, DEF 30
}

void MucusMaw::Attack1(character& c)
{
	color(4);
	std::cout << "\tSlime Spit!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void MucusMaw::Attack2(character& c)
{
	color(4);
	std::cout << "\tGooey Grip!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void MucusMaw::Attack3(character& c)
{
	color(4);
	std::cout << "\tViscous Vomit!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void MucusMaw::Attack4(character& c)
{
	color(4);
	std::cout << "\tFlash BOOger!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void MucusMaw::Heal(character& c)
{
	color(4);
	//heals the enemy's hp depending on how much the hp the character lost
	std::cout << "\tSLIMEWAVE MEND!" << std::endl;
	MSdelay(1000);
	this->add_hp((c.get_hp() / 20));
	color(7);
	std::cout << "Enemy's health went up by: " << (c.get_hp() / 20) << std::endl;
	MSdelay(1000);
}

void MucusMaw::Fortify(character& c)
{
	color(4);
	//raises the defense stat depending on how much the hp the character lost
	std::cout << "\tSLIME SHIELD!" << std::endl;
	MSdelay(1000);
	this->add_def((c.get_def() / 20));
	color(7);
	std::cout << "Enemy's defense went up by: " << (c.get_att() / 20) << std::endl;
	MSdelay(1000);
}

void MucusMaw::Enrage(character& c)
{
	color(4);
	//raises the attack stat depening on how much the hp the character lost
	std::cout << "\tMUCOUS FURY!" << std::endl;
	MSdelay(1000);
	this->add_att((c.get_att() / 20));
	color(7);
	std::cout << "Enemy's attack went up by: " << (c.get_att() / 20) << std::endl;
	MSdelay(1000);
}


//GrimeReaper Implementations
/*GrimeReaper::GrimeReaper(std::string name, int lvl)
{
	set_name("The Grime Reaper");
	set_stats(100, 50, 50, lvl);
}*/

