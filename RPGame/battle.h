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
	virtual void BattleStats(character& c, enemy& e);
	virtual void GameOver(character& c);
	void battleStart(character& c, enemy& e);
	virtual void Battle_Sequence(character& c, enemy& e);
};

//final boss battles
class GoodFinalBattle : public battle	//Grime Reaper becomes possessed by Dirty Bubble
{
public:
	void BattleStats(character& c, enemy& e, int& counter);
	void GameOver(character& c);
	void Battle_Sequence(character& c, enemy& e);
	void BattleDialogue(character& c, enemy& e);
};

class BubblyFinalBattle : public GoodFinalBattle	//if bubbly boy is still with you, he reveals that he is the dirty bubble
{
public:
	void BattleDialogue(character& c, enemy& e);
};

class BadFinalBattle : public GoodFinalBattle
{
public:
	void BattleStats(character& c, enemy& e, int& counter);
	void BattleDialogue(character& c, enemy& e);
};

class PythonBattle : public battle
{
public:
	void Battle_Sequence(character& c, enemy& e);
	void BattleDialogue(character& c, enemy& e);
};

#endif
