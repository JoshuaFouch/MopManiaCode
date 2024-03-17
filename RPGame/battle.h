#ifndef BAT_TLE
#define BAT_TLE

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <stdlib.h>
#include "utility.h"

//foward declarations
class character;
class enemy;

class battle
{
public:
	battle();
	void BattleStats(character& c, enemy& e);
	void GameOver();
	virtual void Battle_Sequence(character& c, enemy& e);
};

//final boss battles
class GrimeBattle : public battle
{
public:
	//contains its own battle sequence using a Grime Reaper object (derived from enemy)

};

#endif
