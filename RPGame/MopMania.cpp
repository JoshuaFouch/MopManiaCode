#include "character.h"
#include "enemy.h"
#include "npc.h"
#include "inGame.h"
#include "battle.h"

/*the game*/
int main()
{
	#pragma comment(lib, "winmm.lib") //for music and sound effects!
	/*will contain a while loop with the bool "EndGame" (if true, kills while loop, if false, keep going). 
	Also, another bool "QuitGame" which checks if user wants to quitgame, if quitgame is true, the whole code will end
	and no end credits will be displayed*/

	Broomba b("Broomba", 100, 15, 30);
	SwifterJetWet a("Jet", 100, 15, 20);
	BysonV8 v("Dude", 200, 50, 15);
	character c("character", 100, 20, 6);
	enemy bob("bob", 1);
	enemy bill("bill", 2);
	Duster d("Duster");
	Latherus l("Latherus");
	Scruberty s("Scruberty");
	Fizzletider f("Fizzletider");
	Bristlebeard b("Bristlebeard");


	//Start_Menu();
	Battle_Sequence(v,bob);
	b.dialogue(v);
	Sdelay(5);
	Battle_Sequence(v, bill);


	return 0;
}
