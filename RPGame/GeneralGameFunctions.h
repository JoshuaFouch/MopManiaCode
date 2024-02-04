#pragma once
#include "character.h"
#include "enemy.h"
#ifndef GeneralGameFunctions_h
#define GeneralGameFunctions_h

void Start_Menu();	//beginning of the game

void Game_Tester_Menu();	//general form of our menus, probably going to be our pause menu

character Mop_Selection();	//user gets to choose a type of mop, then the function will return an instance of class character

void Pause_Menu();

void Battle_Sequence();

void GameShop_Menu();

void GameOver();	//josh
 







#endif
