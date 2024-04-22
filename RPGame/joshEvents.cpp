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
		MSdelay(4500);
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
		std::cout << "The Filthy Bubble";
		ellipsis();
		std::cout << " the scourge of MopMania";
		ellipsis();
		std::cout << " trapped me here and DESTROYED OUR PRECIOUS LAND" << std::endl;
		MSdelay(3000);
		std::cout << "THIS IS WHY I BANISHED EVERYONE FROM LE' HOSPITALE... TO PROTECT THEM" << std::endl;
		Sdelay(3);
		std::cout << "THIS IS WHY I DISAPPEARED... TO HOLD FILTHY BUBBLE BACK FROM KILLING EVERYONE..." << std::endl;
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

		//ending if you kill bubble boy (you kill janitorius, you join filthy bubble)
		if (c.getBub() == -1) {
			//Janitorius realizes you evil nature and has to kill you
			DotdotTwo();
			std::cout << "It seems evil has taken over you..." << std::endl;
			Sdelay(4);
			std::cout << "You killed my good friend";
			color(9);
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
			std::cout << "THE FILTHY BUBBLE..." << std::endl;
			MSdelay(3200);
			color(4);
			std::cout << "The Filthy Bubble: It is I... ";
			Sdelay(2);
			std::cout << "the scourge of all that is clean... " << std::endl;
			Sdelay(2);
			std::cout << "the plague of MopMania... " << std::endl;
			Sdelay(2);
			std::cout << "The Filthy Bubble..." << std::endl;
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
			std::cout << "You start to smile menacingly..." << std::endl;
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
			Sdelay(4);
			DotdotTwo();
			std::cout << "Fine... have it your way..." << std::endl;
			Sdelay(3);
			BadFinalBattle b;
			GrimeReaper Janitorius(10);
			b.Battle_Sequence(c, Janitorius);
			if (c.getLife() == 0) {
				return;	//if the character is dead
			}
			Dotdot();
			color(6);
			std::cout << "...i";
			ellipsis();
			std::cout << "... trusted you..." << std::endl;
			Sdelay(7);
			DotdotTwo();
			color(7);
			std::cout << "Janitorius, The Grime Reaper, the protector of MopMania and Le' Hospitale";
			ellipsis();
			color(4);
			std::cout << " dies\n" << std::endl;
			Sdelay(3);
			color(7);
			system("pause");
			color(4);
			clear();
			std::cout << "The Filthy Bubble: HAHAHAHAHAHAHAH";
			playMusic("terror.wav");
			ellipsis();
			Sdelay(5);
			std::cout << "My young apprentice, " << c.get_name() << std::endl;
			Sdelay(5);
			std::cout << "D"; MSdelay(100); std::cout << "e"; MSdelay(100); std::cout << "s"; MSdelay(100); std::cout << "t"; MSdelay(100); std::cout << "r"; MSdelay(100); std::cout << "o"; MSdelay(100); std::cout << "y "; MSdelay(100);
			std::cout << "M"; MSdelay(100); std::cout << "o"; MSdelay(100); std::cout << "p "; MSdelay(100); std::cout << "M"; MSdelay(100); std::cout << "a"; MSdelay(100); std::cout << "n"; MSdelay(100); std::cout << "i"; MSdelay(100); std::cout << "a! "; MSdelay(1000);
			ellipsis();
			Sdelay(5);
			clear();
			for (int i = 0; i < 12; i++) {
				std::cout << "HAHAHAH!!!" << std::endl;
				MSdelay(210);
			}
			Sdelay(3);
			std::cout << std::endl << std::endl;
			color(7);
			system("pause");			
			endMusic();
			clear();
			std::cout << "5 mop-days later\n" << std::endl;
			system("pause");
			clear();
			playMusic("void.wav");
			std::cout << "Le' Hospitale has been destroyed" << std::endl;
			Sdelay(5);
			std::cout << "Everyone mourns..." << std::endl;
			Sdelay(6);
			std::cout << "Everyone loses hope..." << std::endl;
			Sdelay(7);
			std::cout << "The " << c.get_name() << ", the demise of MopMania, reigns amidst the grime and filth.";
			Sdelay(4);
			std::cout << "\nThe Filthy Bubble, the scourge of all that is clean, reigns along side with you..." << std::endl;
			Sdelay(5);
			std::cout << "What have you done " << c.get_name() << "?" << std::endl;
			Sdelay(5);
			std::cout << "Is this what you wanted? "; Sdelay(3); std::cout << "Death? "; Sdelay(3); std::cout << "and filth? ";
			Sdelay(6);
			DotdotTwo();
			std::cout << "Is this what Janitorius wanted?\n" << std::endl;
			Sdelay(3);
			system("pause");

			c.gameCompleted();
			return;
		}
		//ending if you bring bubbly boy to bubble mama OR never meet him
		else if (c.getBub() == 2 || c.getBub() == 0 || c.getBub() == 1) {
			//Filthy Bubble possesses Janitorius and you have to kill the both of them
			clear();
			color(6);
			std::cout << "I have sent you..." << c.get_name() << " to save me..." << std::endl;
			Sdelay(5);
			std::cout << "I need you to kill him..." << std::endl;
			Sdelay(2);
			std::cout << "Kill the Filthy Bubble..." << std::endl;
			Sdelay(5);
			std::cout << "I put my faith in you, I gave you my powers..." << std::endl;
			Sdelay(3);
			std::cout << "The powers that failed me... ";
			Sdelay(3);
			std::cout << "the powers that brought me to my misery..." << std::endl;
			Sdelay(5);
			clear();
			std::cout << "However, there is hope. ";
			Sdelay(3);
			std::cout << "Please destroy the Filthy Bubble...";
			Sdelay(5);
			endMusic();
			clear();
			color(4);
			std::cout << "\t\tThats not happening..." << std::endl;
			MSdelay(2000);
			std::cout << "\t\tYou really are a failure..." << std::endl;
			MSdelay(4000);
			color(6);
			playMusic("terror.wav");
			std::cout << "THE FILTHY BUBBLE..." << std::endl;
			MSdelay(3200);
			color(4);
			std::cout << "The Filthy Bubble: It is I... ";
			Sdelay(2);
			std::cout << "the scourge of all that is clean... " << std::endl;
			Sdelay(2);
			std::cout << "the plague of MopMania... " << std::endl;
			Sdelay(2);
			std::cout << "The Filthy Bubble..." << std::endl;
			Sdelay(4);
			clear();
			std::cout << "It seems you have found where I locked up The Grime Reaper..." << std::endl;
			Sdelay(5);
			DotdotTwo();
			std::cout << "I will consume him..." << std::endl;
			Sdelay(2);
			std::cout << "I will take all of his power..." << std::endl;
			Sdelay(2);
			std::cout << "To destroy the land of MopMania!!" << std::endl;
			Sdelay(5);
			clear();
			std::cout << "THE WORLD MUST BE FILTHY!!!" << std::endl;
			Sdelay(5);
			DotdotTwo();
			color(7);
			std::cout << "The Filthy Bubble slowly lunges towards Janitorius... \nThe Grime Reaper's face is slowly consumed by the opaque bubble..." << std::endl;
			Sdelay(6);
			color(6);
			std::cout << "MMMBLHLBHML AGHHGUHMGNLBLGLGMM..." << std::endl;
			Sdelay(2);
			std::cout << "GAHHHHHH" << std::endl;
			Sdelay(4);
			for (int i = 0; i < 15; i++) {
				color(6);
				std::cout << "MBGMMAHBGMBGAHHH" << std::endl;
				MSdelay(150);
				clear();
				color(4);
				std::cout << "MBGMMAHBGMBGAHHH" << std::endl;
				MSdelay(150);
				clear();
			}
			DotdotTwo();
			color(7);
			std::cout << "Janitorius...";
			Sdelay(3);
			std::cout << "the one who gave you new life... " << std::endl;
			Sdelay(4);
			std::cout << "his own life is being taken away right in front of you..." << std::endl;
			Sdelay(5);
			DotdotTwo();
			std::cout << "The Filthy Bubble has now possessed Janitorius..." << std::endl;
			Sdelay(4);
			std::cout << "The Filthy Bubble is now within Janitorius..." << std::endl;
			Sdelay(5);
			std::cout << "The Filthy Bubble "; MSdelay(700); std::cout << "is now "; MSdelay(1200); std::cout << "Janitorius..." << std::endl;
			Sdelay(6);
			DotdotTwo();
			std::cout << "There is nothing you can do about it... ";
			Sdelay(4);
			std::cout << "but... ";
			MSdelay(3500);
			std::cout << "kill the both of them..." << std::endl;
			Sdelay(5);
			endMusic();
			playMusic("void.wav");
			clear();
			color(6);
			std::cout << c.get_name() << "..." << std::endl;
			color(4);
			Sdelay(3);
			MSdelay(200); std::cout << "P"; color(4); MSdelay(210); std::cout << "l"; color(6); MSdelay(345); std::cout << "e"; color(6); MSdelay(670); std::cout << "a"; color(4); MSdelay(780); std::cout << "s"; color(6); MSdelay(400); std::cout << "e "; color(4); MSdelay(2000);
			std::cout << "k"; color(6); MSdelay(429); std::cout << "i"; color(4); MSdelay(389); std::cout << "l"; color(6); MSdelay(700); std::cout << "l "; color(4); MSdelay(1200);
			std::cout << "m"; color(4); MSdelay(670); std::cout << "e"; MSdelay(3000); color(6);
			ellipsis();
			std::cout << "This is why I sent you here..." << std::endl;
			Sdelay(5);
			color(4);
			std::cout << "To save MopMania from it's misery..." << std::endl;
			Sdelay(5);
			color(6);
			std::cout << "No matter the means... ";
			Sdelay(5);
			color(4);
			std::cout << "no matter who dies..." << std::endl;
			Sdelay(7);
			clear();
			std::cout << "so..." << std::endl;
			Sdelay(6);
			MSdelay(200); std::cout << "P"; color(4); MSdelay(210); std::cout << "l"; color(6); MSdelay(345); std::cout << "e"; color(4); MSdelay(670); std::cout << "a"; color(6); MSdelay(780); std::cout << "s"; color(4); MSdelay(400); std::cout << "e "; color(6); MSdelay(2000);
			std::cout << "k"; color(6); MSdelay(429); std::cout << "i"; color(4); MSdelay(389); std::cout << "l"; color(6); MSdelay(700); std::cout << "l "; color(4); MSdelay(1200);
			std::cout << "m"; color(4); MSdelay(670); std::cout << "e"; MSdelay(3000); color(6);
			ellipsis();
			Sdelay(1);
			clear();
			MSdelay(230); std::cout << "P"; color(4); MSdelay(210); std::cout << "l"; color(6); MSdelay(200); std::cout << "e"; color(6); MSdelay(890); std::cout << "a"; color(4); MSdelay(560); std::cout << "s"; color(6); MSdelay(400); std::cout << "e "; color(4); MSdelay(2000);
			std::cout << "k"; color(6); MSdelay(429); std::cout << "i"; color(4); MSdelay(431); std::cout << "l"; color(6); MSdelay(876); std::cout << "l "; color(4); MSdelay(1600);
			std::cout << "m"; color(4); MSdelay(670); std::cout << "e"; MSdelay(2300); color(6);
			ellipsis();
			clear();
			color(4);
			std::cout << c.get_name() << "..." << std::endl;
			Sdelay(6);
			for (int i = 0; i < 50; i++) {
				std::cout << "DIEEEEEEE..." << std::endl;
				MSdelay(210);
			}
			GoodFinalBattle b;
			GrimeReaper JaniBubble(10);
			b.Battle_Sequence(c, JaniBubble);
			if (c.getLife() == 0) {
				return;	//if the character is dead
			}
			endMusic();
			DotdotTwo();
			color(4);
			std::cout << "Filthy Bubble: NO.... ";
			Sdelay(2);
			std::cout << "NO...";
			Sdelay(2);
			std::cout << "NO." << std::endl;
			Sdelay(3);
			DotdotTwo();
			std::cout << "I "; MSdelay(250); std::cout << "c"; MSdelay(250); std::cout << "a"; MSdelay(120); std::cout << "n"; MSdelay(250); std::cout << "n"; MSdelay(290); std::cout << "o"; MSdelay(340); std::cout << "t "; MSdelay(400);
			std::cout << "D"; MSdelay(250); std::cout << "I"; MSdelay(250); std::cout << "E-"; MSdelay(250); ellipsis();
			Sdelay(5);
			clear();
			color(7);
			std::cout << "The Filthy Bubble's body dissipates into thin air... ";
			Sdelay(2); std::cout << "He is finally gone...";
			Sdelay(2); std::cout << "\nYou killed him...";
			Sdelay(2); std::cout << " however...";
			Sdelay(3);
			std::cout << " death begins to take over Janitorius." << std::endl;
			playMusic("death.wav");
			Sdelay(5);
			DotdotTwo();
			color(6);
			std::cout << "Janitorius: My dear " << c.get_name() << "..." << std::endl;
			Sdelay(4);
			std::cout << "You have done well..." << std::endl;
			Sdelay(3);
			std::cout << "MopMania can now be restored to its former glory..." << std::endl;
			Sdelay(4);
			std::cout << "Not because of me... ";
			Sdelay(3);
			std::cout << "but because of you";
			ellipsis();
			std::cout << std::endl;
			Sdelay(5);
			clear();
			std::cout << "As a result of the death of the Filthy Bubble..." << std::endl;
			Sdelay(4);
			std::cout << "M"; MSdelay(320); std::cout << "y "; MSdelay(230);
			std::cout << "d"; MSdelay(120); std::cout << "e"; MSdelay(230); std::cout << "a"; MSdelay(630); std::cout << "t"; MSdelay(230); std::cout << "h "; MSdelay(560);
			std::cout << "i"; MSdelay(120); std::cout << "s "; MSdelay(340);
			std::cout << "n"; MSdelay(340); std::cout << "e"; MSdelay(333); std::cout << "a"; MSdelay(230); std::cout << "r"; MSdelay(450);
			ellipsis(); std::cout << std::endl;
			Sdelay(6);
			clear();
			std::cout << "Go my dear " << c.get_name() << std::endl;
			Sdelay(3);
			std::cout << "and restore our homeland to its former happiness and peace...\n" << std::endl;
			Sdelay(7);
			std::cout << "T"; MSdelay(220); std::cout << "h"; MSdelay(340); std::cout << "a"; MSdelay(630); std::cout << "n"; MSdelay(530); std::cout << "k "; MSdelay(560);
			std::cout << "y"; MSdelay(640); std::cout << "o"; MSdelay(543); std::cout << "u"; MSdelay(650); ellipsis(); std::cout << std::endl;
			Sdelay(5);
			DotdotTwo();
			color(7);
			std::cout << "Janitorius, The Grime Reaper, ";
			Sdelay(1);
			color(6);
			std::cout << "dies.\n" << std::endl;
			color(7);
			Sdelay(5);
			system("pause");
			endMusic();
			clear();
			std::cout << "5 mop-days later\n" << std::endl;
			system("pause");
			clear();
			playMusic("ending.wav");
			std::cout << "Le' Hospitale is restored to its formly glory" << std::endl;
			Sdelay(5);
			std::cout << "Everyone praises you for your heroic actions..." << std::endl;
			Sdelay(6);
			std::cout << "Everyone celebrates and rebuilds there new home with joy and peace..." << std::endl;
			Sdelay(7);
			std::cout << "However, ";
			Sdelay(4);
			std::cout << "no one praises The Grime Reaper for his heroic actions..." << std::endl;
			Sdelay(5);
			std::cout << "He was the one who truly loved his homeland," << std::endl;
			Sdelay(5);
			std::cout << "He was the one who protected them..." << std::endl;
			Sdelay(6);
			DotdotTwo();
			std::cout << "The Grime Reaper";
			ellipsis();
			Sdelay(2);
			color(6);
			std::cout << " will be forgotten.\n" << std::endl;
			system("pause");
			color(7);

			c.gameCompleted();
			return;
		}
	}
}

//hostpial
HospitalEvent::HospitalEvent() {};

void HospitalEvent::trigger(character& c) {
	std::cout << "not finished" << std::endl;
	system("pause");
}


firstEvent::firstEvent() {};

void firstEvent::trigger(character& c) {
	std::cout << "not finished" << std::endl;
	system("pause");
}

secondEvent::secondEvent() {};

void secondEvent::trigger(character& c) {
	std::cout << "not finished" << std::endl;
	system("pause");
}

basementEvent::basementEvent() {};

void basementEvent::trigger(character& c) {
	std::cout << "not finished" << std::endl;
	system("pause");
}


//create bubblyboy enemy

//create putridpython enemy






