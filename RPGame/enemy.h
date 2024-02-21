#ifndef ENEMY
#define ENEMY
#include <cstdlib>

//forward declaration
class character;

class enemy
{

public:
	enemy(std::string name, int hp, int att, int def);
	std::string get_name();
	int get_def();
	int get_hp();

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

private:

	int att;
	int def;
	int hp;
	std::string name;
	int lvl = 1;
};

#endif

