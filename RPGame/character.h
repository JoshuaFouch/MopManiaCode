#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

//forward declaration
class enemy;
class NPC;

//BASE CHARACTER
class character
{
public:

	character();
	character(std::string name, int hp, int att, int def);

	//I really think we don't need setters... why would we need to set the hp of your character in game?
	std::string get_name();
	void set_name(std::string name);
	int get_hp();
	int get_maxhp();
	void set_hp(int hp);
	void set_maxHp(int maxHp);
	int get_att();
	void set_att(int att);
	int get_def();
	void set_def(int def);
	int get_lvl();
	int get_winNum();
	bool death();
	bool alive();

	//for items
	int get_healUp();
	int get_attUp();
	int get_defUp();
	int get_deadRat();
	void acq_healUp();
	void acq_attUp();
	void acq_defUp();
	void acq_deadRat();
	void use_healUp();
	void use_attUp();
	void use_defUp();

	//attack getters
	std::string get_aName1();
	std::string get_aName2();
	std::string get_aName3();
	std::string get_aName4();
	virtual void set_AttackNames();

	//level up
	void increaseHP(int exp);
	void increaseAtt(int exp);
	void increaseDef(int exp);
	void expPt();	//checks how many battles the character won, and increases stats accordingly

	virtual void displayStats();
	virtual void describeAttacks();
	void damaged(int oppAtt);

	//abilities
	virtual void Attack1(enemy& e);
	virtual void Attack2(enemy& e);
	virtual void Attack3(enemy& e);
	virtual void Attack4(enemy& e);

	void Inventory();

protected:

	//private members

	std::string name;
	int hp;	//the current hp
	int maxHp; //the constant hp
	int att;
	int def;
	int winNum = 0; //checks how many battles character has won
	int lvl = 1;	//level
	int ExpReq = 1; //a counter that tracks how many battles are required to level up
	bool isDead = false; //is the character dead or alive?
	int healUp = 0;	//counter for how many potions a character has
	int attUp = 0;	//counter for how many attack up potions a character has
	int defUp = 0;	//counter for how many defense up potions a character has
	int deadRat = 0; //counter for how many dead rats the character has (its a useless item)

	//attack names
	std::string aName1;
	std::string aName2;
	std::string aName3;
	std::string aName4;
};

//DERIVED CHARACTER BROOMBA
class Broomba : public character 
{
public:
	//constuctor
	Broomba(std::string name, int hp, int att, int def);
	//set attack names
	void set_AttackNames();
	
	//display stats
	void displayStats();
	void describeAttacks();

	//abilities
	void Attack1(enemy& e);
	void Attack2(enemy& e);
	void Attack3(enemy& e);
	void Attack4(enemy& e);
};

//DERIVED CHARACTER SWIFTERJETWET
class SwifterJetWet : public character
{
public:
	//constructor
	SwifterJetWet(std::string name, int hp, int att, int def);

	//set attack names
	void set_AttackNames();

	//display stats
	void displayStats();
	void describeAttacks();

	//abilities
	void Attack1(enemy& e);
	void Attack2(enemy& e);
	void Attack3(enemy& e);
	void Attack4(enemy& e);
};

//DERIVED CHARACTER BYSONV8
class BysonV8 : public character
{
public:
	//constructor
	BysonV8(std::string name, int hp, int att, int def);

	//set attack names
	void set_AttackNames();

	//display stats
	void displayStats();
	void describeAttacks();

	//abilities
	void Attack1(enemy& e);
	void Attack2(enemy& e);
	void Attack3(enemy& e);
	void Attack4(enemy& e);
};

#endif 