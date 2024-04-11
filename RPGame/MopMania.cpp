#include "character.h"
#include "enemy.h"
#include "npc.h"
#include "inGame.h"
#include "battle.h"
#include "event.h"
#include "GameMap.h"

#pragma comment(lib, "winmm.lib") //for music and sound effects!

/*the game*/
int main()
{
	/*map creation*/
	Broomba broomba("Broomba", 70, 50, 80); //beefy but less health
	gameMap map;
	event* e = new event;
	map.addRoot("Root Node", "Root Description 1", "Root Description 2", e);
	map.toRoot();
	map.birth_leftChild(map.getIndex(), "Left Node", "Left Description 1", "Left Description 2", e);
	map.birth_rightChild(map.getIndex(), "Right Node", "Right Description 1", "Right Description 2", e);
	std::cout << map.getIndex()->getTitle();
	system("pause");
	locationNode* i = nullptr;
	map.play(i, broomba);


	enemy bob(1);
	int user;
	user = Start_Menu();
	if (user == 1)
	{
		Broomba broomba("Broomba", 70, 50, 80); //beefy but less health
		battle bobBattle;
		bobBattle.Battle_Sequence(broomba, bob);
	}
	else if (user == 2)
	{
		SwifterJetWet jetwet("JetWet", 80, 90, 40);	//powerful yet defenseless
		battle bobBattle;
		bobBattle.Battle_Sequence(jetwet, bob);
	}
	else if (user == 3)
	{
		BysonV8 byson("Byson", 100, 30, 70);	//lot of health yet weak
		battle bobBattle;
		bobBattle.Battle_Sequence(byson, bob);
	}
	else
	{
		std::cout << "Error 404 not found idk..." << std::endl;
	}

	return 0;
}
