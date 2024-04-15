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
	Broomba broomba("Broomba", 100, 80, 90); //beefy but less health
	gameMap map;
	event* e = new event;

	GarbageDan* one = new GarbageDan(1);
	GarbageDan* two = new GarbageDan(1);
	GarbageDan* three = new GarbageDan(1);
	battle* GD = new battle;
	waitingRoomEvent* waitingRoom = new waitingRoomEvent("void.wav", one, two, three, GD);

	map.addRoot("Root", "You are at the root...", "You are very cool...", e);
	map.birth_leftChild(map.getIndex(), "Root's left", "You are at the root's left child", "Hi...", e);
	map.birth_midChild(map.getIndex(), "Root's middle", "You are at the root's mid child...", "Its pretty mid in here...", e);
	map.birth_rightChild(map.getIndex(), "Root's right", "You are in the root's right child", "That's right!...", e);
	map.birth_leftChild(map.getIndex()->getLeft(), "Hi room", "test", "test", e);
	map.birth_midChild(map.getIndex()->getLeft(), "Hello room", "test", "test", waitingRoom);
	map.birth_leftChild(map.getIndex()->getMid(), "bruh room", "test", "test", e);
	map.birth_rightChild(map.getIndex()->getMid(), "gamer room", "test", "test", e);
	map.birth_midChild(map.getIndex()->getRight(), "josh is cool", "test", "test", e);
	map.birth_rightChild(map.getIndex()->getRight(), "stupid room", "test", "test", e);
	map.toRoot();
	map.moveIndex_middle();
	map.birth_leftChild(map.getIndex()->getLeft(), "eljay is cool", "test", "test", e);
	map.birth_midChild(map.getIndex()->getRight(), "seamus is cool", "test", "test", e);
	map.toRoot();
	map.birth_rightChild(map.getIndex()->getRight()->getMid(), "josh has no gf", "test", "test", e);
	map.play(map.theGamer(), broomba);

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
