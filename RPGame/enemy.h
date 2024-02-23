#ifndef ENEMY
#define ENEMY
#include <cstdlib>

//forward declaration
class character;

class enemy
{

public:
	enemy();
	enemy(std::string name, int hp, int att, int def);
	std::string get_name();
	int get_def();
	int get_hp();
	int get_lvl();

	//we will use these functions whenever you finish a level to make the enemies harder
	void increaseHP(int exp);
	void increaseAtt(int exp);
	void increaseDef(int exp);

	void nextMove(enemy& e, character& c, int random);
	int RandomNum();
	void damaged(int oppAtt);

	virtual void Attack1(enemy& e, character& c);
	virtual void Attack2(enemy& e, character& c);
	virtual void Attack3(enemy& e, character& c);
	virtual void Attack4(enemy& e, character& c);
	virtual void Heal(enemy& e, character& c);
	virtual void Fortify(enemy& e, character& c);
	virtual void Enrage(enemy& e, character& c);

	void exPt(character& c);

private:

	int att;
	int def;
	int hp;
	std::string name;
	int lvl = 1;
};

class GarbageDan : public enemy
{
public:
	//constructor
	GarbageDan();	//Base: 60 HP, 40 att, 100 defense

	//abilities
	void Attack1(enemy& e, character& c);	//Trash Bash
	void Attack2(enemy& e, character& c);	//Bin Blast
	void Attack3(enemy& e, character& c);	//Stale Food Shooter
	void Attack4(enemy& e, character& c);	//Stench Smear
	void Heal(enemy& e, character& c);	//Mold Sandwich
	void Fortify(enemy& e, character& c);	//Dumpster Dive (raise defense)
	void Enrage(enemy& e, character& c);	//Broken Glass Shuffle

};

#endif

