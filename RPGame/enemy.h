#ifndef ENEMY
#define ENEMY
#include <cstdlib>

//forward declaration
class character;

class enemy
{

public:
	enemy();
	enemy(std::string name, int lvl);
	std::string get_name();
	int get_def();
	int get_hp();
	int get_lvl();
	int get_att();
	void set_stats(int hp, int att, int def, int lvl);
	bool death();
	bool alive();

	//we will use these functions whenever you finish a level to make the enemies harder
	void increaseHP(int exp);
	void increaseAtt(int exp);
	void increaseDef(int exp);

	void nextMove(character& c, int random);
	int RandomNum();
	void damaged(int oppAtt);

	void displayStats();

	virtual void Attack1(character& c);
	virtual void Attack2(character& c);
	virtual void Attack3(character& c);
	virtual void Attack4(character& c);
	virtual void Heal();
	virtual void Fortify();
	virtual void Enrage();

private:

	int att;
	int def;
	int hp;
	std::string name;
	int lvl = 1;
	bool isDead = false;
};

class GarbageDan : public enemy
{
public:
	//constructor
	GarbageDan(std::string name, int lvl);	//Base: 60 HP, 40 att, 100 defense

	//abilities
	void Attack1(enemy& e, character& c);	//Trash Bash
	void Attack2(enemy& e, character& c);	//Bin Blast
	void Attack3(enemy& e, character& c);	//Stale Food Shooter
	void Attack4(enemy& e, character& c);	//Stench Smear
	void Heal();	//Mold Sandwich
	void Fortify();	//Dumpster Dive (raise defense)
	void Enrage();	//Broken Glass Shuffle

};

#endif

