#ifndef ENEMY
#define ENEMY
#include <cstdlib>

//forward declaration
class character;

class enemy
{

public:
	enemy();
	enemy(int lvl);
	std::string get_name();
	void set_name(std::string name);
	virtual void manuallyConstruct(int lvl);
	int get_def();
	int get_hp();
	int get_lvl();
	int get_att();
	int get_maxhp();
	int get_maxAtt();
	int get_maxDef();
	void set_maxHp(int hp);
	void set_maxAtt(int att);
	void set_maxDef(int def);
	void add_hp(int val);
	void add_att(int val);
	void add_def(int val);
	void set_stats(int hp, int att, int def, int lvl);
	bool get_isDead();
	void makeDead();
	void makeAlive();

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
	virtual void Heal(character& c);
	virtual void Fortify(character& c);
	virtual void Enrage(character& c);

private:

	int att;
	int def;
	int hp;
	int maxHp;
	int maxAtt;
	int maxDef;
	std::string name;
	int lvl = 1;
	bool isDead = false;
};

class GarbageDan : public enemy
{
public:
	//constructor
	GarbageDan(int lvl);	//Base: 60 HP, 40 att, 100 defense (high defense but low attack)
	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);	//Trash Bash
	void Attack2(character& c);	//Bin Blast
	void Attack3(character& c);	//Stale Food Shooter
	void Attack4(character& c);	//Stench Smear
	void Heal(character& c);	//Trash consumption
	void Fortify(character& c);	//Smelly sturdy
	void Enrage(character& c);	//Rancid rage

};

class Stainiac : public enemy
{
public:
	//constructor
	Stainiac(int lvl);
	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);	//Ink Assault
	void Attack2(character& c);	//Blot Blurge
	void Attack3(character& c);	//Filthy Frenzy
	void Attack4(character& c);	//Slimy Splat
	void Heal(character& c);	//Gooey Rejuvenation
	void Fortify(character& c);	//Ink Shield
	void Enrage(character& c);	//Ink Overflow

};

//enemy (eljay)
class MucusMaw : public enemy
{
public:
	//constructor
	MucusMaw(int lvl);	//Base: 70HP , 60 ATT, 30 DEF (Heavy hitter, but very frail)
	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);	//Slime Spit
	void Attack2(character& c);	//Gooey Grip
	void Attack3(character& c);	//Viscous Vomit
	void Attack4(character& c);	//Flash BOOger
	void Heal(character& c);	//Slimewave Mend
	void Fortify(character& c);	//Slime Shield (raise defense)
	void Enrage(character& c);	//Mucous FURY

};

class LeopardLeper : public enemy
{
public:

	LeopardLeper(int lvl); //Base: 50HP, 65 ATT, 55 DEF 

	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};


class BronchitisRex : public enemy 
{
public:

	BronchitisRex(int lvl); //98 HP, 90 ATT, 75 DEF

	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};
//NeedleNed
class NeedleNed : public enemy
{
public:

	NeedleNed(int lvl);// HP 80, ATT 75, DEF 30

	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};
//ShingleShannon
class ShingleShannon : public enemy
{
public:

	ShingleShannon(int lvl);// HP 60, ATT 85, DEF 20

	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};
//Deadskin Dill
class DeadSkinDill : public enemy
{
public:

	DeadSkinDill(int lvl); // HP 87, ATT 67, DEF 78

	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};

//Hairball
class Hairball : public enemy
{
public:

	Hairball(int lvl); // HP 87, ATT 67, DEF 78
	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};

//the boss
class GrimeReaper : public enemy	//this is Janitorius' secret identity
{
public:
	//constructor
	GrimeReaper(int lvl);	//Base: 200 HP, 150 att, 150 def (fast and powerful but low defense boss)
	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);

};

class PutridPython : public enemy
{
public:
	//constructor
	PutridPython(int lvl);
	void manuallyConstruct(int lvl);

	//abilities
	void Attack1(character& c);
	void Attack2(character& c);
	void Attack3(character& c);
	void Attack4(character& c);
	void Heal(character& c);
	void Fortify(character& c);
	void Enrage(character& c);
};

#endif

