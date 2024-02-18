#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

//forward declaration
class enemy;

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
	int get_level();
	int get_winNum();

	//attack getters
	std::string get_aName1();
	std::string get_aName2();
	std::string get_aName3();
	std::string get_aName4();
	virtual void set_AttackNames();

	//we will use these functions every time you defeat an enemy to level up
	void increaseHP(int exp);
	void increaseAtt(int exp);
	void increaseDef(int exp);
	void expPt();	//checks how many battles the character won, and increases stats accordingly

	virtual void displayStats();
	void damaged(int oppAtt);

	//abilities
	virtual void Attack1(character& c, enemy& e);
	virtual void Attack2(character& c, enemy& e);
	virtual void Attack3(character& c, enemy& e);
	virtual void Attack4(character& c, enemy& e);

	void Inventory(character& c);

	


private:

	std::string name;
	int hp;	//the current hp
	int maxHp; //the constant hp
	int att;
	int def;
	int winNum = 0; //checks how many battles character has won
	int level = 1;	//level
	int ExpReq = 1; //a counter that tracks how many battles are required to level up
	
	//attack names
	std::string aName1;
	std::string aName2;
	std::string aName3;
	std::string aName4;
	//class inventory (linked list?)

};

#endif 