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
	this->maxHp = hp;
	this->maxAtt = att;
	this->maxDef = def;
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

void enemy::manuallyConstruct(int lvl) 
{
	this->name = "Enemy";
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
int enemy::get_maxhp()
{
    return maxHp;
}
int enemy::get_maxAtt()
{
    return maxAtt;
}
int enemy::get_maxDef()
{
    return maxDef;
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

	maxHp = hp;
	maxAtt = att;
	maxDef = def;
}
void enemy::set_maxHp(int hp)
{
    this->maxHp = hp;//can you help? will this go off continuously or will it go just once to set it intially?
}
void enemy::set_maxAtt(int att)
{
    this->maxAtt = att;//same
}
void enemy::set_maxDef(int def)
{
    this->maxDef = def;//same
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

	// Adjust the probabilities for 5, 6, and 7 to be lower
	distribution.probabilities()[4] = 1; // Probability for 5
	distribution.probabilities()[5] = 1; // Probability for 6
	distribution.probabilities()[6] = 1; // Probability for 7

	// Generate a random number
	int random = distribution(gen) + 1;

	return random;
}
void enemy::damaged(int oppAtt)
{
	if ((oppAtt - (def / 2)) < 0) {
		hp--;
		MSdelay(500);
		color(2);
		std::cout << "You dealt 1 damage to the Opponent!" << std::endl;
		color(7);
		MSdelay(500);
		return;
	}
	hp -= (oppAtt - (def / 2));
	MSdelay(500);
	color(2);
	std::cout << "You dealt " << (oppAtt - (def / 2)) << " damage to the Opponent!" << std::endl;
	color(7);
	MSdelay(500);
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
void enemy::Heal(character& c)//if all this works then we also shouldn't have to pass in character for these 3 functions
{
	color(4);
	//heals the enemy's hp depending on how much the hp the character lost
	std::cout << "\tHEALED" << std::endl;
	this->hp += (this->get_maxhp()/10);//new function to scale healing depending on the enemy's level and their max of that stat
	color(7);
}
void enemy::Fortify(character& c)
{
	color(4);
	//raises the defense stat depending on how much the hp the character lost
	std::cout << "\tFORTIFY" << std::endl;
	this->def += (this->get_maxDef()/20);//since hp will standardly be about 2 times greater than the other stats,
	color(7);// I have these ones double the stat before calculating how much to add
}
void enemy::Enrage(character& c)
{
	color(4);
	//raises the attack stat depening on how much the hp the character lost
	std::cout << "\tENRAGE" << std::endl;
	this->att += (this->get_maxAtt()/20);
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
	set_stats(50, 45, 100, lvl);
}
void GarbageDan::manuallyConstruct(int lvl)
{
	set_name("GarbageDan");
	set_stats(50, 45, 100, lvl);
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
	//should compare the enemy and character's level first. and then compare their hp, att, def stats accordingly
	color(4);
	std::cout << "\tTRASH CONSUMPTION!" << std::endl;
	MSdelay(1000);
	this->add_hp((c.get_hp() / 20));
	color(7);
	std::cout << "Enemy's health went up by: " << ((c.get_hp() / 20)) << std::endl;
	MSdelay(1000);
}

void GarbageDan::Fortify(character& c)
{
	color(4);
	std::cout << "\tSMELLY STURDY" << std::endl;
	MSdelay(1000);
	this->add_def((2 * this->get_maxDef()) / this->get_lvl());
	color(7);
	std::cout << "Enemy's defense went up by: " << ((c.get_def() / 20)) << std::endl;
	MSdelay(1000);
}

void GarbageDan::Enrage(character& c)
{
	color(4);
	std::cout << "\tRANCID RAGE" << std::endl;
	MSdelay(1000);
	this->add_att((2 * this->get_maxAtt()) / this->get_lvl());
	color(7);
	std::cout << "Enemy's attack went up by: " << ((c.get_att() / 20)) << std::endl;
	MSdelay(1000);
	color(7);
}

//this is an enemy called 'MucusMaw' Implementation
MucusMaw::MucusMaw(int lvl) : enemy(lvl)
{
	set_name("MucusMaw");
	set_stats(70, 60, 30, lvl); //HP 70, Att 60, DEF 30
}
void MucusMaw::manuallyConstruct(int lvl)
{
	set_name("MucusMaw");
	set_stats(70, 60, 30, lvl);
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
	std::cout << "\tSLIMEWAVE MEND!" << std::endl;
	MSdelay(1000);
	color(7);
	this->add_hp((c.get_hp() / 20));
	std::cout << "Enemy's health went up by: " << (c.get_hp() / 20) << std::endl;
	MSdelay(1500);
}

void MucusMaw::Fortify(character& c)
{
	color(4);
	std::cout << "\tSLIME SHIELD!" << std::endl;
	MSdelay(1000);
	color(7);
	this->add_def((c.get_def() / 20));
	std::cout << "Enemy's defense went up by: " << (c.get_def() / 20) << std::endl;
	MSdelay(1500);
}

void MucusMaw::Enrage(character& c)
{
	color(4);
	std::cout << "\tMUCOUS FURY!" << std::endl;
	MSdelay(1000);
	color(7);
	this->add_att((c.get_att() / 20));
	std::cout << "Enemy's attack went up by: " << (c.get_att() / 20) << std::endl;
	MSdelay(1500);
}

//stainiac implementations

Stainiac::Stainiac(int lvl)
{
	set_name("Stainiac");
	set_stats(70, 70, 20, lvl);	//defenseless but powerful
}
void Stainiac::manuallyConstruct(int lvl)
{
	set_name("Stainiac");
	set_stats(70, 70, 20, lvl);
}

void Stainiac::Attack1(character& c)
{
	color(4);
	std::cout << "\tInk Assault!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void Stainiac::Attack2(character& c)
{
	color(4);
	std::cout << "\tBlot Blurge!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void Stainiac::Attack3(character& c)
{
	color(4);
	std::cout << "\tFilthy Frenzy!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void Stainiac::Attack4(character& c)
{
	color(4);
	std::cout << "\tSlimy Splat!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}

void Stainiac::Heal(character& c)
{
	color(4);
	std::cout << "\tGooey Rejuvenation!" << std::endl;
	MSdelay(1000);
	color(7);
}

void Stainiac::Fortify(character& c)
{
	color(4);
	std::cout << "\tInk Shield!" << std::endl;
	MSdelay(1000);
	color(7);
}

void Stainiac::Enrage(character& c)
{
	color(4);
	std::cout << "\tInk Overflow!" << std::endl;
	MSdelay(1000);
	color(7);
}



