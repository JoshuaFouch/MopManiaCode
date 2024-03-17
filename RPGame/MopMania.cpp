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

	enemy bob("bob", 1);
	GarbageDan yOo("bruh", 5);
	enemy bill("bill", 2);
	Broomba goomba("Broomba", 70, 50, 80);
	battle hi;
	hi.Battle_Sequence(goomba, yOo);


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
