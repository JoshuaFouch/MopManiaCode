#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"

FinalEvent::FinalEvent() {};

void FinalEvent::trigger(character& c)
{
	endMusic();

	if (c.get_lvl() < 5) {
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
	else {
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
		if ((c.getBub() == -1) || (c.getBub() == -2)) {
			//Janitorius realizes you evil nature and has to kill you
			DotdotTwo();
			std::cout << "It seems evil has taken over you..." << std::endl;
			Sdelay(4);
			std::cout << "You killed my good friend";
			color(9);
			std::cout << " Bubble Boy..." << std::endl;
			if (c.getBub() == -2) {
				std::cout << "and even Bubble Momma..." << std::endl;
			}
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
			GrimeReaper Janitorius(c.get_lvl()+2);
			b.Battle_Sequence(c, Janitorius);
			if (c.getLife() <= 0) {
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
			std::cout << "Maybe the next hero will truly clean up this land...\n" << std::endl;
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
			GrimeReaper JaniBubble(c.get_lvl() + 2);
			b.Battle_Sequence(c, JaniBubble);
			if (c.getLife() <= 0) {
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
			std::cout << "Le' Hospitale is restored to its former glory" << std::endl;
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
	if (this->isDone == true) {
		return;
	}
	else {
		Sdelay(2);
		std::cout << "You enter Le' Hospitale";
		ellipsis();
		playSFX("door.wav");
		Sdelay(5);
		color(4);
		std::cout << "\nWHO "; MSdelay(100); playSFX("vine-boom.wav"); std::cout << "STEPS"; MSdelay(100); std::cout << " IN MY "; MSdelay(100); std::cout << "ABHORRENT ABODE???"; ellipsis();
		MSdelay(2000);
		std::cout << "MY NAME IS"; ellipsis();
		std::cout << " THE FILTHY BUBBLE!";
		playSFX("vine-boom.wav");
		Sdelay(3);
		playMusic("terror.wav");
		ellipsis();
		std::cout << "\nFilthy Bubble: WHO SENT YOU HERE???" << std::endl;
		Sdelay(5);
		std::cout << "It does not matter who you are"; ellipsis(); MSdelay(2000);
		clear();
		std::cout << "I "; MSdelay(150); std::cout << "w"; MSdelay(150); std::cout << "i"; MSdelay(150); std::cout << "l"; MSdelay(150); std::cout << "l "; MSdelay(500);
		std::cout << "K"; MSdelay(300); std::cout << "I"; MSdelay(300); std::cout << "L"; MSdelay(300); std::cout << "L "; MSdelay(300);
		std::cout << "Y"; MSdelay(150); std::cout << "O"; MSdelay(150); std::cout << "U"; ellipsis(); std::cout << "\n"; MSdelay(2100);
		std::cout << "GO FILTHY BUBBLE MINION! "; MSdelay(3000); std::cout << "AND DEFEAT THIS"; ellipsis();
		playSFX("vine-boom.wav");
		std::cout << "\nPRISTINE " << std::endl;
		MSdelay(2000);
		playSFX("vine-boom.wav");
		std::cout << "PIGHEADED " << std::endl;
		MSdelay(2000);
		playSFX("vine-boom.wav");
		std::cout << "PATHETIC " << std::endl;
		MSdelay(2000);
		playSFX("vine-boom.wav");
		std::cout << "POT-BELLIED " << std::endl;
		MSdelay(2000);
		std::cout << "PRISTINE " << std::endl;
		MSdelay(1000);
		std::cout << "-oh wait i already said that-"; ellipsis(); std::cout << "\n";
		MSdelay(230);
		playSFX("vine-boom.wav");
		std::cout << "POT-BELLIED " << std::endl;
		MSdelay(2000);
		std::cout << "P-";
		MSdelay(350);
		std::cout << "CLEANING"; ellipsis();
		playSFX("vine-boom.wav");
		std::cout << "THING!" << std::endl;
		MSdelay(1000);
		playMusic("cricket.wav");
		MSdelay(5000);
		clear();
		std::cout << "GO KILL HIM ALREADY "; MSdelay(400);
		std::cout << "YOU BUBBLY BRAT!" << std::endl;
		MSdelay(4700);
		color(9);
		std::cout << "Bubbly bRat: ok..." << std::endl;
		MSdelay(2700);
		color(7);
		musicBattle first;
		BubblyBoy bad(c.get_lvl());
		bad.set_name("BUBBLY BRAT (FILTHY BUBBLE MINION)");
		first.Battle_Sequence("horror.wav", c, bad);
		if (c.getLife() <= 0) {
			return;	//if the character is dead
		}
		DotdotTwo();
		color(4);
		playMusic("terror.wav");
		std::cout << "DANG IT"; ellipsis(); std::cout << "\n";
		Sdelay(3);
		clear();
		std::cout << "You must be the chosen one..." << std::endl;
		Sdelay(4);
		std::cout << "The one"; ellipsis(); color(6); std::cout << "he"; ellipsis(); color(4); std::cout << "sent..." << std::endl;
		Sdelay(4);
		std::cout << "anyways..." << std::endl;
		Sdelay(2);
		std::cout << "you have proven yourself a worthy opponent..." << std::endl;
		Sdelay(3);
		std::cout << "I will let you roam freely in MY house..." << std::endl;
		Sdelay(5);
		clear();
		std::cout << "However, "; MSdelay(540);
		std::cout << "MY MINIONS WILL KILL YOU!!" << std::endl;
		MSdelay(3400);
		std::cout << "I "; MSdelay(200);
		std::cout << "WILL "; MSdelay(200);
		std::cout << "NOT "; MSdelay(200);
		std::cout << "LET "; MSdelay(200);
		std::cout << "YOU "; MSdelay(200);
		std::cout << "TAKE "; MSdelay(200); std::cout << "\n";
		std::cout << "THE "; MSdelay(200);
		color(6);
		std::cout << "GRIME "; MSdelay(200);
		std::cout << "REAPER "; MSdelay(200); std::cout << "\n";
		color(4);
		std::cout << "AWAY "; MSdelay(200);
		std::cout << "FROM "; MSdelay(200);
		std::cout << "ME"; ellipsis();
		Sdelay(5);
		endMusic();
		DotdotTwo();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: Do not worry " << c.get_name() << std::endl;
		Sdelay(3);
		std::cout << "The "; MSdelay(200);
		color(4);
		std::cout << "Filthy "; MSdelay(200);
		std::cout << "Bubble "; MSdelay(200); std::cout << "\n";
		color(6);
		std::cout << "is "; MSdelay(200);
		std::cout << "the "; MSdelay(200);
		std::cout << "Scourge "; MSdelay(200);
		std::cout << "of "; MSdelay(200);
		std::cout << "MopMania"; MSdelay(1000); ellipsis();
		std::cout << "\nFocus on your mission...." << std::endl;
		Sdelay(2);
		std::cout << "I have faith in you... ";
		Sdelay(3);
		std::cout << "continue on your journey...and..." << std::endl;
		Sdelay(3);
		std::cout << "save... ";
		MSdelay(2500);
		std::cout << "me... ";
		MSdelay(2500);
		std::cout << "from... my mis-";
		MSdelay(2000);
		endMusic();
		DotdotTwo();
		color(7);
		std::cout << "Who is this "; color(4); std::cout << "Filthy Bubble??" << std::endl;
		color(7);
		Sdelay(4);
		std::cout << "Who is this "; color(6); std::cout << "Grime Reaper??"; ellipsis();
		color(7);
		std::cout << "\nContinue on your journey, and one day you will find out...\n" << std::endl;
		Sdelay(2);
		system("pause");
		clear();
		c.acq_deadRat();
		c.acq_healUp();
		c.acq_healUp();
		system("pause");
		this->isDone = true;
		return;
	}
}


firstEvent::firstEvent() {};

void firstEvent::trigger(character& c) {
	return;
}

secondEvent::secondEvent() {};

void secondEvent::trigger(character& c) {
	return;
}

basementEvent::basementEvent() {};

void basementEvent::trigger(character& c) {
	return;
}

//hairball enemy
Hairball::Hairball(int lvl) : enemy(lvl) {
	set_name("HairBall");
	set_stats(50, 85, 60, lvl);
}
void Hairball::manuallyConstruct(int lvl) {
	set_name("HairBall");
	set_stats(50, 85, 60, lvl);
}
void Hairball::Attack1(character& c)
{
	color(4);
	std::cout << "\tClog Cannon!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void Hairball::Attack2(character& c)
{
	color(4);
	std::cout << "\tKnotty Knockout!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void Hairball::Attack3(character& c)
{
	color(4);
	std::cout << "\tTangle Toss!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void Hairball::Attack4(character& c)
{
	color(4);
	std::cout << "\tFurball Fling!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void Hairball::Heal(character& c)
{
	color(4);
	std::cout << "\tSPLIT END MEND" << std::endl;
	MSdelay(1000);
	this->add_hp((c.get_hp() / 10));
	std::cout << "Enemy's health went up by: " << ((c.get_hp() / 10)) << std::endl;
	MSdelay(1000);
}
void Hairball::Fortify(character& c)
{
	color(4);
	std::cout << "\tMAT SHIELD" << std::endl;
	MSdelay(1000);
	this->add_def(c.get_def() / 20);
	std::cout << "Enemy's defense went up by: " << ((c.get_def() / 20)) << std::endl;
	MSdelay(1000);
}
void Hairball::Enrage(character& c)
{
	color(4);
	std::cout << "\tSTATIC SURGE" << std::endl;
	MSdelay(1000);
	this->add_att(c.get_att() / 20);
	std::cout << "Enemy's attack went up by: " << ((c.get_att() / 20)) << std::endl;
	MSdelay(1000);
	color(7);
}


//create bubblyboy enemy
BubblyBoy::BubblyBoy(int lvl) : enemy(lvl) {
	set_name("Bubble Boy");
	set_stats(50, 85, 60, lvl);
}
void BubblyBoy::manuallyConstruct(int lvl) {
	set_name("Bubble Boy");
	set_stats(50, 85, 60, lvl);
}
void BubblyBoy::Attack1(character& c)
{
	color(9);
	std::cout << "\tSqueaky Slash!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void BubblyBoy::Attack2(character& c)
{
	color(9);
	std::cout << "\tSoapy Slap!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void BubblyBoy::Attack3(character& c)
{
	color(9);
	std::cout << "\tFoamy Fit!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void BubblyBoy::Attack4(character& c)
{
	color(9);
	std::cout << "\tBubble Trouble!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void BubblyBoy::Heal(character& c)
{
	color(9);
	std::cout << "\tBUBBLE BATH" << std::endl;
	MSdelay(1000);
	this->add_hp((c.get_hp() / 10));
	std::cout << "Enemy's health went up by: " << ((c.get_hp() / 10)) << std::endl;
	color(7);
	MSdelay(1000);
}
void BubblyBoy::Fortify(character& c)
{
	color(9);
	std::cout << "\tBUBBLE BARRIER" << std::endl;
	MSdelay(1000);
	this->add_def(c.get_def() / 20);
	std::cout << "Enemy's defense went up by: " << ((c.get_def() / 20)) << std::endl;
	color(7);
	MSdelay(1000);
}
void BubblyBoy::Enrage(character& c)
{
	color(9);
	std::cout << "\tBLEACH BUBBLE" << std::endl;
	MSdelay(1000);
	this->add_att(c.get_att() / 20);
	std::cout << "Enemy's attack went up by: " << ((c.get_att() / 20)) << std::endl;
	MSdelay(1000);
	color(7);
}

//create putridpython enemy
PutridPython::PutridPython(int lvl) : enemy(lvl) {
	set_name("The Putrid Python");
	set_stats(50, 85, 60, lvl);
}
void PutridPython::manuallyConstruct(int lvl) {
	set_name("The Putrid Python");
	set_stats(50, 85, 60, lvl);
}
void PutridPython::Attack1(character& c)
{
	color(5);
	std::cout << "\tDead Rat Fling!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void PutridPython::Attack2(character& c)
{
	color(5);
	std::cout << "\tRavenous Rat Bite!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void PutridPython::Attack3(character& c)
{
	color(5);
	std::cout << "\tSmelly Strangle!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void PutridPython::Attack4(character& c)
{
	color(5);
	std::cout << "\tConcupi-scent Odor!" << std::endl;
	c.damaged(this->get_att());
	color(7);
}
void PutridPython::Heal(character& c)
{
	color(5);
	std::cout << "\tRAT CHOMP!" << std::endl;
	MSdelay(1000);
	this->add_hp((c.get_hp() / 10));
	std::cout << "Enemy's health went up by: " << ((c.get_hp() / 10)) << std::endl;
	color(7);
	MSdelay(1000);
}
void PutridPython::Fortify(character& c)
{
	color(5);
	std::cout << "\tSMELLY SKIN SHED!" << std::endl;
	MSdelay(1000);
	this->add_def(c.get_def() / 20);
	std::cout << "Enemy's defense went up by: " << ((c.get_def() / 20)) << std::endl;
	color(7);
	MSdelay(1000);
}
void PutridPython::Enrage(character& c)
{
	color(5);
	std::cout << "\tRADIOACTIVE RAT CHOMP!" << std::endl;
	MSdelay(1000);
	this->add_att(c.get_att() / 20);
	std::cout << "Enemy's attack went up by: " << ((c.get_att() / 20)) << std::endl;
	MSdelay(1000);
	color(7);
}

//home event
homeEvent::homeEvent() {};

void homeEvent::trigger(character& c) {
	if (this->isDone == true) {
		return;
	}
	else {
		DotdotTwo();
		playSFX_once("door.wav");
		Sdelay(2);
		std::cout << "You entered your home..." << std::endl;
		Sdelay(4);
		std::cout << "You feel at peace with yourself." << std::endl;
		playMusic("creativity.wav");
		Sdelay(3);
		std::cout << "However"; ellipsis();
		std::cout << "You have a task to complete"; ellipsis(); std::cout << std::endl;
		Sdelay(4);
		color(2);
		std::cout << c.get_name() << " Mom: "; MSdelay(500); std::cout << "HI SON!!"; ellipsis();
		std::cout << "\nPlease be safe out there..." << std::endl;
		Sdelay(2);
		std::cout << "If you want to know more about this place, "; MSdelay(1200);
		std::cout << "You should go check out the Rusty Bucket!" << std::endl;
		MSdelay(3000);
		std::cout << "My dear friend Mrs. Clean has some good information about our home!\n" << std::endl;
		Sdelay(3);
		color(7);
		system("pause");
		endMusic();
		this->isDone = true;
	}
}





