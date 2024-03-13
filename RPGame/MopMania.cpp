#include "character.h"
#include "enemy.h"
#include "npc.h"
#include "inGame.h"
#include "battle.h"

/*map creation*/

/*the game*/
int main()
{
	#pragma comment(lib, "winmm.lib") //for music and sound effects!
	/*will contain a while loop with the bool "EndGame" (if true, kills while loop, if false, keep going). 
	Also, another bool "QuitGame" which checks if user wants to quitgame, if quitgame is true, the whole code will end
	and no end credits will be displayed*/

	SwifterJetWet a("Jet", 100, 15, 20);
	BysonV8 v("Dude", 200, 50, 15);
	character c("character", 100, 20, 6);
	enemy bob("bob", 1);
	enemy bill("bill", 2);
	Duster d("Duster");
	Latherus l("Latherus");
	Scruberty s("Scruberty");
	Fizzletider f("Fizzletider");
	Bristlebeard B("Bristlebeard");

	int user;
	user = Start_Menu();
	if (user == 1)
	{
		Broomba broomba("Broomba", 70, 50, 80); //beefy but less health
	}
	else if (user == 2)
	{
		SwifterJetWet jetwet("JetWet", 80, 90, 40);	//powerful yet defenseless
	}
	else if (user == 3)
	{
		BysonV8 byson("Byson", 100, 30, 70);	//lot of health yet weak
	}
	else
	{
		std::cout << "Error 404 not found idk..." << std::endl;
	}
	//Battle_Sequence(v,bob);
	//B.dialogue(v);
	//Sdelay(5);
	//Battle_Sequence(v, bill);


	return 0;
}
