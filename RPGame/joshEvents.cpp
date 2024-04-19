#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"

FinalEvent::FinalEvent() {};

void FinalEvent::trigger(character& c)
{
	endMusic();

	if (c.get_lvl() > 10) {
		clear();
		playMusic("void.wav");
		Sdelay(1);
		std::cout << "You try to open the door to this room..." << std::endl;
		MSdelay(4000);
		std::cout << "It's locked... ";
		MSdelay(1000);
		std::cout << "You can't get in..." << std::endl;
		MSdelay(5000);
		color(6);
		clear();
		std::cout << "AHHHH... AUGHHHHKJKJKNKMKJKNKJAKSFJASKF..." << std::endl;
		MSdelay(1000);
		clear();
		std::cout << "HELP ME... SOMEBODY PLEASE" << std::endl;
		MSdelay(2000);
		clear();
		color(7);
		std::cout << "You begin to hear grunting and screaming..." << std::endl;
		MSdelay(1000);
		std::cout << "It sounds like someone is in severe pain... it seems like he needs help..." << std::endl;
		MSdelay(6000);
		DotdotTwo();
		std::cout << "Who could this be..." << std::endl;
		system("pause");
		endMusic();
		return;
	}

	if (c.get_lvl() < 10) {
		clear();
		Sdelay(2);
		std::cout << "You open the door and see a cyborg... ";
		MSdelay(3000);
		std::cout << "With vacuums as hands... ";
		MSdelay(3000);
		std::cout << "And mops as feet..." << std::endl;
		MSdelay(2000);
		std::cout << "He seems to be trapped in a... bubble..." << std::endl;
		MSdelay(3000);
		std::cout << "You see a scythe on the other side of the room...";
		MSdelay(3000);
		std::cout << " It is seems to be lined with bleach..." << std::endl << std::endl;
		system("pause");
		MSdelay(2000);
		clear();
		std::cout << "Wait..." << std::endl;
		Sdelay(4);
		DotdotTwo();
		std::cout << "THIS MUST BE THE GRIME REAPER... HE IS TRAPPED!!!" << std::endl;
		playSFX("BAH.wav");
		MSdelay(3000);
		clear();
		color(6);
		endMusic();
		std::cout << "The Grime Reaper: My dear " << c.get_name() << ", thank you for coming here..." << std::endl;
		MSdelay(3000);
		std::cout << "I was the one who sent you here..." << std::endl;
		MSdelay(4000);
		std::cout << "I was the one who gave you your powers..." << std::endl;
		MSdelay(4000);
		std::cout << "You are my chosen one... to purge MopMania from all of its grime..." << std::endl;
		MSdelay(5000);
		DotdotTwo();
		std::cout << "It is I..."; 
		MSdelay(1000);
		playSFX("riser.wav");
		Sdelay(7);
		std::cout << " JANITORIUS..." << std::endl;
		MSdelay(2000);
		playMusic("void.wav");
		MSdelay(5000);
		clear();
		std::cout << "Janitorius: All the citizens of MopMania have relied on my powers to protect them..." << std::endl;
		MSdelay(5000);
		std::cout << "However";
		ellipsis();
		std::cout << std::endl;
		std::cout << "I have failed them..." << std::endl;
		Sdelay(4);
		clear();
		for (int i = 0; i < 20; i++) {
			color(4);
			std::cout << "I FAILED..." << std::endl;
			MSdelay(210);
			color(6);
		}
		Sdelay(4);
		clear();
		std::cout << "The Dirty Bubble";
		ellipsis();
		std::cout << " the scourge of MopMania";
		ellipsis();
		std::cout << " trapped me here and DESTROYED OUR PRECIOUS LAND" << std::endl;
		MSdelay(3000);
		std::cout << "THIS IS WHY I BANISHED EVERYONE FROM LE' HOSPITALE... TO PROTECT THEM" << std::endl;
		Sdelay(3);
		std::cout << "THIS IS WHY I DISAPPEARED... TO HOLD DIRTY BUBBLE BACK FROM KILLING EVERYONE..." << std::endl;
		Sdelay(3);
		std::cout << "THIS IS WHY I CHOSE YOU TO SAVE ME..." << std::endl;
		Sdelay(4);
		clear();
		std::cout << "because... i failed." << std::endl;
		Sdelay(5);
		clear();
		for (int i = 0; i < 20; i++) {
			color(4);
			std::cout << "I FAILED..." << std::endl;
			MSdelay(210);
			color(6);
		}
		Sdelay(2);
		clear();
		std::cout << "I failed my precious friends and family... my precious MopMania..." << std::endl;
		Sdelay(5);

		//ending if you kill bubble boy (you kill janitorius, you join dirty bubble)
		if (c.getBub() == -1) {
			//Janitorius realizes you evil nature and has to kill you
			DotdotTwo();
			std::cout << "It seems evil has taken over you..." << std::endl;
			Sdelay(4);
			std::cout << "You killed my good friend";
			color(1);
			std::cout << " Bubble Boy..." << std::endl;
			color(6);
			Sdelay(6);
			std::cout << "WHAT HAVE YOU DONE..." << std::endl;
			MSdelay(4000);
			std::cout << "He was so innocent... he was a kind bubble..." << std::endl;
			MSdelay(3000);
			std::cout << "He did not deserve death..." << std::endl;
			MSdelay(5000);
			endMusic();
			clear();
			color(4);
			std::cout << "\t\tThats right..." << std::endl;
			MSdelay(2000);
			std::cout << "\t\tHe was truly a kind soul..." << std::endl;
			MSdelay(4000);
			color(6);
			playMusic("terror.wav");
			std::cout << "THE DIRTY BUBBLE..." << std::endl;
			MSdelay(3200);
			color(4);
			std::cout << "The Dirty Bubble: It is I... ";
			Sdelay(1);
			std::cout << "the scourge of all that is clean... " << std::endl;
			Sdelay(1);
			std::cout << "the plague of MopMania... " << std::endl;
			Sdelay(1);
			std::cout << "The Dirty Bubble..." << std::endl;
			Sdelay(2);
			clear();
			color(6);
			std::cout << "Do not listen to him " << c.get_name() << "!!" << std::endl;
			Sdelay(2);
			std::cout << "HE WILL DESTROY MY HOMELAND!!" << std::endl;
			Sdelay(1);
			color(4);
			std::cout << "There is no turning back for " << c.get_name() << "..." << std::endl;
			Sdelay(4);
			std::cout << "He has already committed grave sin..." << std::endl;
			MSdelay(4500);
			clear();
			color(6);
			std::cout << "NO NO NO!!!" << std::endl;
			Sdelay(3);
			color(4);
			clear();
			std::cout << "My dear " << c.get_name() << "..." << std::endl;
			DotdotTwo();
			std::cout << "kill him..." << std::endl;
			Sdelay(3);
			std::cout << "kill him..." << std::endl;
			Sdelay(3);
			std::cout << "kill him..." << std::endl;
			Sdelay(3);
			std::cout << "KILL HIM... AHAHAHHHAHAAAHH" << std::endl;
			Sdelay(5);
			clear();
			std::cout << "WIPE HIM OFF THE FACE OF THE PLANET..." << std::endl;
			Sdelay(4);
			std::cout << "HE DESERVES DEATH";
			ellipsis();
			std::cout << " DEATH";
			ellipsis();
			std::cout << " DEATH!!!" << std::endl;
			Sdelay(5);
			endMusic();
			color(7);
			Dotdot();
			std::cout << "You smart to smile menacingly..." << std::endl;
			Sdelay(4);
			std::cout << "You yearn...";
			Sdelay(2);
			std::cout << " to kill..." << std::endl;
			Sdelay(3);
			std::cout << "There is no turning back from your evil doings..." << std::endl;
			Sdelay(4);
			clear();
			color(6);
			playMusic("void.wav");
			std::cout << "I should have never trusted you " << c.get_name() << std::endl;
			Sdelay(2);
			DotdotTwo();
			std::cout << "Fine... have it your way..." << std::endl;
			Sdelay(3);
			BadFinalBattle b;
			BronchitisRex Janitorius(12);
			//GrimeReaper Janitorius(10);
			b.Battle_Sequence(c, Janitorius);
			if (c.getLife() == 0) {
				return;	//if the character is dead
			}
			Dotdot();
			color(6);
			std::cout << "...i";
			ellipsis();
			std::cout << "... trusted you..." << std::endl;
			DotdotTwo();
			color(7);
			std::cout << "Janitorius, The Grime Reaper, the protector of MopMania and Le' Hospitale";
			ellipsis();
			std::cout << " dies" << std::endl;
			system("pause");
			//dirty bubble dialogue and end credit scene

			c.gameCompleted();
			return;
		}
		//ending if you bring bubbly boy to bubble mama OR never meet him
		else if (c.getBub() == 2 || c.getBub() == 0) {
			//Dirty Bubble possesses Janitorius and you have to kill the both of them
		}
		else if (c.getBub() == 1) {
			//ending if you bring bubble boy with you to the mysterious room
		}
	}

	
}