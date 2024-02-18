#include <iostream>
#include "character.h"
#include "enemy.h"
#include "GeneralGameFunctions.h"


int main()
{
	//Start_Menu();
	//GameOver();
	//Game_Tester_Menu();
	//std::cout << "git RKD" << std::endl;
	//SprayMop sprayMop("SprayMop", 75, 50, 10);//very fragile mop, but swift and hits hard
	//sprayMop.displayStats();// shows stats of the character (can be implemented in a way to the game character selection)
	//sprayMop.attack();// attack declaration
	character c("Bob", 100, 50, 60);
	enemy e(100, 60, 80);

	Test(c);
	//BattleStats(c, e);

	return 0;
}