#include "enemy.h"

enemy::enemy(int att, int def, int hp)
{
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


