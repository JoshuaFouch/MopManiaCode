#ifndef GeneralGameFunctions_h
#define GeneralGameFunctions_h
#include "character.h"
#include "enemy.h"

void Start_Menu();	//beginning of the game

void Game_Tester_Menu();	//general form of our menus, probably going to be our pause menu

character Mop_Selection();	//user gets to choose a type of mop, then the function will return an instance of class character

void Pause_Menu();	//pauses game to show menu

void Battle_Sequence();	//in-game battle

void GameShop_Menu();	//shopping menu

void GameOver();	//completely clears the terminal and prints game over, completely ending the code
 
void BattleStats(character &c, enemy &e);	//displays stats of a character and enemy

void Test(character &c);






#endif
