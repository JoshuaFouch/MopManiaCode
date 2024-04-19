#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"

FinalEvent::FinalEvent(enemy* one, battle* final)
{
	this->one = one;
	this->final = final;
}
void FinalEvent::trigger(character& c)
{
	endMusic();

	if (this->isDone = true) {
		return;
	}

	if (c.get_lvl() < 10) {
		clear();
		playMusic("void.wav");
		std::cout << "You try to open the door to this room..." << std::endl;
		MSdelay(4000);
		std::cout << "It's locked... ";
		MSdelay(1000);
		std::cout << "You can't get in..." << std::endl;
		MSdelay(3000);
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
		Dotdot();
		std::cout << "Who could this be..." << std::endl;
		system("pause");
		endMusic();
		return;
	}

	if (c.get_lvl() >= 10) {
		//ending if you bring bubble boy with you to the mysterious room
		if (c.getBub() == 1) {
			clear();
			std::cout << "You open the door and see a cyborg... ";
			MSdelay(600);
			std::cout << "With vacuums as hands... ";
			MSdelay(600);
			std::cout << "And mops as feet..." << std::endl;
			MSdelay(2000);
			std::cout << "He seems to be trapped in a... bubble..." << std::endl;
			MSdelay(3000);
			std::cout << "You see a scythe on the other side of the room...";
			MSdelay(1000);
			std::cout << "It is seems to be lined with bleach..." << std::endl;
			MSdelay(2000);
			std::cout << "Wait..." << std::endl;
			Dotdot();
			std::cout << "THIS MUST BE THE GRIME REAPER... HE IS TRAPPED!!!" << std::endl;
			playSFX("BAH.wav");
			MSdelay(3000);
			clear();
			color(6);
			endMusic();
			std::cout << "The Grime Reaper: My dear " << c.get_name() << ", thank you for coming here..." << std::endl;
			MSdelay(2000);
			std::cout << "I was the one who sent you here..." << std::endl;
			MSdelay(1000);
			std::cout << "I was the one who gave you your powers..." << std::endl;
			MSdelay(1000);
			std::cout << "You are my chosen one... to purge MopMania from all of its grime..." << std::endl;
			DotdotTwo();
			std::cout << "It is I..."; 
			MSdelay(800);
			std::cout << " JANITORIUS..." << std::endl;
			MSdelay(5000);
			clear();
			std::cout << "Janitorius: All the citizens of MopMania have relied on my powers to protect them..." << std::endl;
			MSdelay(700);
			std::cout << "However";
			MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "." << std::endl; Sdelay(2);
			std::cout << "I have failed them..." << std::endl;
			Sdelay(1);
			for (int i = 0; i < 20; i++) {
				clear();
				std::cout << "I FAILED..." << std::endl;
				MSdelay(210);
			}
			Sdelay(2);
			clear();
			std::cout << "The Dirty Bubble, the scourge MopMania, trapped me here for 50 mop-years" << std::endl;

			std::cout << "THIS IS WHY I BANISHED EVERYONE FROM LE' HOSPITALE... TO PROTECT THEM" << std::endl;
			Sdelay(1);
			std::cout << "THIS IS WHY I BANISHED EVERYONE FROM LE' HOSPITALE" << std::endl;
			Sdelay(1);
			std::cout << "THIS IS WHY I BANISHED EVERYONE FROM LE' HOSPITALE" << std::endl;
			Sdelay(1);
			

		}
		//ending if you kill bubble boy (you kill janitorius, you join dirty bubble)
		if (c.getBub() == -1)
		{

		}
		//ending if you bring bubbly boy to bubble mama OR never meet him
		if (c.getBub() == 2)
		{

		}
	}

	
}