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
	Broomba broomba("Broomba", 500, 100, 120); //beefy but less health
	//broomba.bubKill();
	gameMap map;
	event* e = new event;

	lungEvent* lung = new lungEvent;
	pharmEvent* pharm = new pharmEvent;
	waitingRoomEvent* waitingRoom = new waitingRoomEvent;
	RustyBucketEvent* rusty = new RustyBucketEvent;
	storageRoomevent* storageRoom = new storageRoomevent;
	FinalEvent* finale = new FinalEvent;
	MentalEvent* mental = new MentalEvent;
	cellarEvent* cellar = new cellarEvent;
	firstEvent* first = new firstEvent;
	mailboxEvent* mail = new mailboxEvent;
	HospitalEvent* hospital = new HospitalEvent;
	secondEvent* second = new secondEvent;
	dermEvent* derm = new dermEvent;
	operatEvent* op = new operatEvent;
	labEvent* lab = new labEvent;
	supplyEvent* sup = new supplyEvent;
	basementEvent* based = new basementEvent;

	map.addRoot("Home", "You are in your little cottage", "Remembering the words of Janitorius, you realize the great duty that is set before you", e); // e even was here
	map.birth_leftChild(map.getIndex(), "Mailbox", "Out of curiosity, you walk over to your mailbox", "You check your mailbox and find nothing", mail);
	map.setMailbox(map.getIndex()->getLeft());
	map.birth_rightChild(map.getIndex(), "The Rusty-Bucket", "This is a great place to buy items, share a drink,", "gain some info, or just hang around.", rusty);
	map.setRusty(map.getIndex()->getRight());
	map.birth_midChild(map.getIndex(), "Le' Hospitale", "The home where all citizens of Mop-Mania once lived... it is now the demise of cleanliness", "Whoever enters these halls are said to never come out these days...\nThis is the place Janitorius commissioned you to clean.", hospital);
	map.moveIndex_middle();

	//first floor
	map.birth_rightChild(map.getIndex(), "1st Floor", "You walk further into the heart of Le' Hospitale...", "You see three rooms one of which has a mysterious shroud surround it...", first);
	map.moveIndex_right();
	map.birth_rightChild(map.getIndex(), "Waiting Area", "You look around, there is no more garbage on the floor!", "You see a nice little magazine rack and a small aquarium!", waitingRoom);
	map.birth_midChild(map.getIndex(), "Mysterious Room", "This is Janitorius' office...", "You reminisce in all of the memories that took place in this room.", finale);
	map.birth_leftChild(map.getIndex(), "Lung Care", "This is the place where you defeated the greate BRONCHITIS REX", "The air is now clearer than smog of New York City...", lung);

	//second floor
	map.moveIndex_back();
	map.birth_midChild(map.getIndex(), "2nd Floor", "You walked up the stairs and see three other rooms...", "Huh, it stinks, better go clean it up as Janitorius told you to!", second);
	map.moveIndex_middle();
	map.birth_rightChild(map.getIndex(), "Dermatology", "You enter the dermatology... its clean and supreme!", "There is no dead skin anywhere!", derm);
	map.birth_midChild(map.getIndex(), "Operating Room", "Your happy to see the operating room in clean condition.", "Scalpels and needles are nicely organized on the counter...", op);
	map.birth_leftChild(map.getIndex(), "Pharmacy", "You see beautiful shelves of pill bottles organized neatly", "Your head is starting from, maybe go to take some acetaminophen...", pharm);
	map.birth_midChild(map.getIndex()->getLeft(), "Supply Closet", "You open the closet door and see many bags of.... pills....?", "You see lists of old prescription bottles nicely stacked on the walls.", sup);
	map.birth_midChild(map.getIndex()->getMid(), "Laboratory", "You enter and see experimental health technologies", "There are large empty cages... it seems they used to cage testing primates...", lab);

	//basement
	map.moveIndex_back();
	map.birth_leftChild(map.getIndex(), "Basement", "You walk down the stairs...", "You see three rooms down the hall", based);
	map.moveIndex_left();
	map.birth_rightChild(map.getIndex(), "Storage Room", "All the empty canisters have been cleaned out of the room", "The room is nicely cleaned and filled with anesthesia bottles", storageRoom);
	map.birth_midChild(map.getIndex(), "Mental Health Room", "You see lots of encouraging posters on the walls", "One says 'Do you feel like a mess? Time to decompress!", mental);
	map.birth_leftChild(map.getIndex(), "Cellar", "This is Putrid Python's hole in the wall shop", "Haha... get it... cuz its literally a hole in the wall?", cellar);


	system("pause");
	map.play(map.theGamer(), broomba, 0);
	if (broomba.getLife() == 0) {
		broomba.resetStats();
		clear();
		map.current_toRoot(map.theGamer());
		map.play(map.theGamer(), broomba, 0);
	}
	else if (broomba.getEnd() == 1) {
		std::cout << "Game complete!" << std::endl;
		return 0;
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
