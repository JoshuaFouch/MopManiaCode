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
	Broomba broomba("Broomba", 110, 90, 120); //beefy but less health
	gameMap map;
	event* e = new event;

	GarbageDan* one = new GarbageDan(1);
	GarbageDan* two = new GarbageDan(1);
	GarbageDan* three = new GarbageDan(1);
	battle* GD = new battle;
	waitingRoomEvent* waitingRoom = new waitingRoomEvent("void.wav", one, two, three, GD);

	map.addRoot("Home", "You are in your little cottage", "Remembering the words of Janitorius, you realize the great duty that is set before you", NULL);
	map.birth_leftChild(map.getIndex(), "Mailbox", "Out of curiosity, you walk over to your mailbox", "You check your mailbox and find nothing", NULL);
	map.birth_rightChild(map.getIndex(), "The Rusty-Bucket", "This is a great place to buy items, share a drink,", "gain some info, or just hang around.", NULL);
	map.birth_midChild(map.getIndex(), "Le' Hospitale", "The home where all citizens of Mop-Mania once lived... it is now the demise of cleanliness", "Whoever enters these halls are said to never come out these days...\nThis is the place Janitorius commissioned you to clean.", NULL);
	map.moveIndex_middle();
	//first floor
	map.birth_rightChild(map.getIndex(), "1st Floor", "You walk further into the heart of Le' Hospitale...", "You see three rooms one of which has a mysterious shroud surround it...", NULL);
	map.moveIndex_right();
	map.birth_rightChild(map.getIndex(), "Waiting Area", "You look around, there is no more garbage on the floor!", "You see a nice little magazine rack and a small aquarium!", waitingRoom);
	map.birth_midChild(map.getIndex(), "Mysterious Room", "This is Janitorius' office...", "You reminisce in all of the memories that took place in this room.", NULL);
	map.birth_leftChild(map.getIndex(), "Lung Care", "This is the place where you defeated the greate BRONCHITIS REX", "The air is now clearer than smog of New York City...", NULL);

	//second floor
	map.moveIndex_back();
	map.birth_midChild(map.getIndex(), "2nd Floor", "You walked up the stairs and see three other rooms...", "Huh, it stinks, better go clean it up as Janitorius told you to!", NULL);
	
	//basement

	system("pause");
	map.play(map.theGamer(), broomba, 0);
	if (broomba.getLife() == 0) {
		broomba.resetStats();
		clear();
		map.current_toRoot(map.theGamer());
		map.play(map.theGamer(), broomba, 0);
	}


	enemy bob(1);
	int user;
	user = Start_Menu();
	if (user == 1)
	{
		Broomba broomba("Broomba", 70, 50, 80); //beefy but less health
		battle bobBattle;
		map.play(map.theGamer(), broomba, 0);
		if (broomba.getLife() == 0) {
			broomba.resetStats();
			clear();
			map.current_toRoot(map.theGamer());
			map.play(map.theGamer(), broomba, 0);
		}
	}
	else if (user == 2)
	{
		SwifterJetWet jetwet("JetWet", 80, 90, 40);	//powerful yet defenseless
		battle bobBattle;
		map.play(map.theGamer(), jetwet, 0);
		if (jetwet.getLife() == 0) {
			jetwet.resetStats();
			clear();
			map.current_toRoot(map.theGamer());
			map.play(map.theGamer(), jetwet, 0);
		}
		
	}
	else if (user == 3)
	{
		BysonV8 byson("Byson", 100, 30, 70);	//lot of health yet weak
		battle bobBattle;
		map.play(map.theGamer(), byson, 0);
		if (byson.getLife() == 0) {
			byson.resetStats();
			clear();
			map.current_toRoot(map.theGamer());
			map.play(map.theGamer(), byson, 0);
		}
	}
	else
	{
		std::cout << "Error 404 not found idk..." << std::endl;
	}

	return 0;
}




/*map.addRoot("Root", "You are at the root...", "You are very cool...", e);
map.birth_leftChild(map.getIndex(), "Root's left", "You are at the root's left child", "Hi...", e);
map.birth_midChild(map.getIndex(), "Root's middle", "You are at the root's mid child...", "Its pretty mid in here...", waitingRoom);
map.birth_rightChild(map.getIndex(), "Root's right", "You are in the root's right child", "That's right!...", e);
map.birth_leftChild(map.getIndex()->getLeft(), "Hi room", "test", "test", e);
map.birth_midChild(map.getIndex()->getLeft(), "Hello room", "test", "test", e);
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
*/