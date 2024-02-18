#ifndef character_h
#define character_h

#include "enemy.h"
#include <iostream>
#include <vector>
#include <string>


class character
{

public:

	character(std::string name, int hp, int att, int def);

	//I really think we don't need setters... why would we need to set the hp of your character in game?
	std::string get_name();
	void set_name(std::string name);
	int get_hp();
	void set_hp(int hp);
	int get_att();
	void set_att(int att);
	int get_def();
	void set_def(int def);

	//we will use these functions every time you defeat an enemy to level up
	void increaseHP(int exp);
	void increaseAtt(int exp);
	void increaseDef(int exp);

	void displayStats();
	void damaged(int oppAtt);

	//abilities
	virtual void Attack1(character c, enemy e);
	virtual void Attack2(character c, enemy e);
	virtual void Attack3(character c, enemy e);
	virtual void Attack4(character c, enemy e);



private:

	std::string name;
	int hp;
	int att;
	int def;
	//class inventory (linked list?)

};




#endif 