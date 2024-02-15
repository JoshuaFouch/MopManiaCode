#pragma once
#include "character.h"
#include <cstdlib>

class enemy{

private:
	int att;
	int def;
	int hp;
	std::string name;
public:
	enemy(int att, int def, int hp);
	std::string get_name();
	int get_def();
	int get_hp();

	//we will use these functions whenever you finish a level to make the enemies harder
	void increaseHP(int exp);
	void increaseAtt(int exp);
	void increaseDef(int exp);

	int nextMove(enemy e, character c, int random);
	int RandomNum();
	void damaged(int oppAtt);

	virtual void Attack1(enemy e, character c);
	virtual void Attack2(enemy e, character c);
	virtual void Attack3(enemy e, character c);
	virtual void Attack4(enemy e, character c);
};

