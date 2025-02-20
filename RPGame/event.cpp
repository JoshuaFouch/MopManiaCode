#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"

/*base event*/
event::event() {};
event::event(std::string music)
{
	this->music = music;
}
void event::trigger(character& c)
{
	/*BadFinalBattle b;
	GrimeReaper Janitorius(c.get_lvl() + 2);
	b.Battle_Sequence(c, Janitorius);
	if (c.getLife() <= 0) {
		return;	//if the character is dead
	}*/
	BubbleBattle fight;
	BubblyBoy mama(c.get_lvl() + 1);
	mama.set_name("The Bubble Mama");
	fight.Battle_Sequence(c, mama);
	if (c.getLife() <= 0) {
		return;	//if the character is dead
	}
}


/*waiting room event*/
waitingRoomEvent::waitingRoomEvent() {};

void waitingRoomEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		Sdelay(2);
		std::cout << "You entered the waiting room... ";
		MSdelay(2000);
		std::cout << "A rancid stench fills the air..." << std::endl;
		MSdelay(3000);
		std::cout << "You feel a dark presence around you..." << std::endl;
		MSdelay(4000);
		std::cout << "A garbage can fell to the ground and trash fell all over the place...";
		MSdelay(5000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(100);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A GarbageDan appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle garbage;
		GarbageDan dan(c.get_lvl());
		garbage.Battle_Sequence(c, dan);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The stench is still in the air..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "Another GarbageDan appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		GarbageDan can(c.get_lvl());
		garbage.Battle_Sequence(c, can);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The stench is starting to dissipate..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "Another GarbageDan appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		GarbageDan san(c.get_lvl());
		garbage.Battle_Sequence(c, san);
		if (c.getLife() <= 0) {
			return;	//if the character is dead
		}
		Dotdot();
		std::cout << "The stench is gone!" << std::endl;
		Sdelay(3);
		clear();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: You have done well my dear " << c.get_name() << "..." << std::endl;
		Sdelay(4);
		std::cout << "You have restored this room to how it once was..." << std::endl;
		Sdelay(2);
		std::cout << "It smells... so good now..." << std::endl;
		Sdelay(4);
		clear();
		std::cout << "I have faith in you... ";
		Sdelay(3);
		std::cout << "Continue on your journey...and..." << std::endl;
		Sdelay(3);
		std::cout << "save... ";
		MSdelay(2500);
		std::cout << "me... ";
		MSdelay(2500);
		std::cout << "from... my mis-";
		MSdelay(1000);
		endMusic();

		this->isDone = true;
		return;
	}

}


/*StorageRoomevent*/
storageRoomevent::storageRoomevent() {};

void storageRoomevent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		Sdelay(2);
		std::cout << "You entered the Storage room... ";
		MSdelay(2000);
		std::cout << "It smells like there was some sort of gas leak in here..." << std::endl;
		MSdelay(3000);
		std::cout << "You see tons of smashed-in anesthesia canisters scattered about the room..." << std::endl;
		MSdelay(4000);
		std::cout << "Finally you see a vacuum, slowly emerge from a large pile of these canisters...";
		MSdelay(3000);
		std::cout << "The vacuum is convulsing, its eyes blood-shot ...";
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(100);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "The Crazed Vacuum lunged forward at you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle vacuum;
		Stainiac vac(c.get_lvl()+1);
		vac.set_name("Crazed Vacuum");
		vacuum.Battle_Sequence(c, vac);	//lets make the crazed vacuum very strong, since its the only enemy  
		if (c.getLife() <= 0) {
			return;	//if the character is dead
		}
		Dotdot();
		std::cout << "The vacuum lets out a loud hissing noise!" << std::endl;
		Sdelay(3);
		std::cout << "The room quickly becomes filled with anesthesia!" << std::endl;
		Sdelay(3);
		std::cout << "*you pass out*" << std::endl;
		Sdelay(3);
		Dotdot();
		Dotdot();
		std::cout << "*you feel something poking you*" << std::endl;
		Sdelay(3);
		std::cout << "*you hear a muffled voice*" << std::endl;
		color(3);
		std::cout << "Hey..."; Sdelay(1); std::cout << " you..." << std::endl;
		Sdelay(1);
		Dotdot();
		playMusic("creativity.wav");
		std::cout << "WAKE UP!!!";
		MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "." << std::endl; Sdelay(2);
		color(7);
		clear();
		std::cout << "*you slowly sit up*" << std::endl;
		Sdelay(2);
		std::cout << "You see the vacuum in front of you, now looking fully healed..." << std::endl;
		Sdelay(2);
		color(3);
		std::cout << "Thank goodness you're okay!!!"; Sdelay(3); std::cout << " Thank you soap much for saving me!" << std::endl; Sdelay(3);
		clear();
		std::cout << "You're probably wondering how I ended up in here..." << std::endl;
		Sdelay(4);
		std::cout << "Well, I saw what had happened to Le' Hospitale, and wanted to help clean things up..." << std::endl;
		Sdelay(3);
		std::cout << "I had lived here for my whole life, that is, before the Grime Reaper came along..." << std::endl;
		Sdelay(3);
		std::cout << "He banished us from our homes, and made a mess of our once spotless community..." << std::endl;
		Sdelay(3);
		std::cout << "So I crafted a plan..."; Sdelay(1); std::cout << " I would sneak in here and start cleaning things up, without him noticing..." << std::endl;
		Sdelay(3);
		std::cout << "However..."; Sdelay(1); std::cout << " when I started vacuuming up this room, I felt strange..." << std::endl;
		Sdelay(3);
		std::cout << "And after I cleaned up the whole room..."; Sdelay(1); std::cout << " I felt R"; MSdelay(200); std::cout << "e"; MSdelay(200); std::cout << "A"; MSdelay(200); std::cout << "l"; MSdelay(200); std::cout << "L"; MSdelay(200); std::cout << "y"; MSdelay(200); std::cout << " S"; MSdelay(200); std::cout << "t"; MSdelay(200); std::cout << "R"; MSdelay(200); std::cout << "a"; MSdelay(200); std::cout << "N"; MSdelay(200); std::cout << "g"; MSdelay(200); std::cout << "E"; MSdelay(200); std::cout << "."; MSdelay(200); std::cout << "."; MSdelay(200); std::cout << "." << std::endl;
		Sdelay(3);
		std::cout <<"I kinda just blacked out til just now, guess that gas I sucked up, made me a little loopy." << std::endl;
		Sdelay(3);
		clear();
		std::cout <<"I'm real sorry about attacking you earlier by the way." << std::endl;
		Sdelay(3);
		std::cout <<"Here's some soap tolkens to hopefully make up for it..." << std::endl;
		Sdelay(3);
		c.addMoney(500);
		endMusic();

		this->isDone = true;
		return;
	}

}

/*Mental Event*/

MentalEvent::MentalEvent() {};

void MentalEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		Sdelay(2);
		std::cout << "You entered the mental health facility...";
		MSdelay(3000);
		std::cout << "You gaze upon the walls of posters..." << std::endl;
		MSdelay(3000);
		std::cout << "You saw one along the lines of 'You have depresso?" << std::endl;
		MSdelay(3000);
		std::cout << "Have some expresso'..." << std::endl;		
		MSdelay(3000);
		std::cout << "You could really go for some expresso..." << std::endl;
		MSdelay(3000);
		std::cout << "As you traveled further into the room you see water coming from under the door..." << std::endl;
		MSdelay(3000);
		std::cout << "You open the door spot that the drains are clogged...";
		MSdelay(3000);
		Dotdot();
		color(4); 
		MSdelay(100);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Hairball appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle garbage;
		Hairball dan(c.get_lvl());
		garbage.Battle_Sequence(c, dan);
		if (c.getLife() <= 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The drains still seemed to be clogged..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "Another Hairball appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		Hairball can(c.get_lvl());
		garbage.Battle_Sequence(c, can);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The water is starting to flow into the drains..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "Another Hairball appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		Hairball san(c.get_lvl());
		garbage.Battle_Sequence(c, san);
		if (c.getLife() <= 0) {
			return;	//if the character is dead
		}
		Dotdot();
		std::cout << "The room is finally drained of all the water!" << std::endl;
		Sdelay(3);
		clear();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: You have done well my dear " << c.get_name() << "..." << std::endl;
		Sdelay(4);
		std::cout << "You are doing very well..." << std::endl;
		Sdelay(2);
		std::cout << "It is refreshing... so refreshing..." << std::endl;
		Sdelay(4);
		clear();
		std::cout << "I still continue to put my life in your hands... ";
		Sdelay(3);
		std::cout << "Continue on your journey...and..." << std::endl;
		Sdelay(3);
		std::cout << "save... ";
		MSdelay(2500);
		std::cout << "me... ";
		MSdelay(2500);
		std::cout << "from... my mis-";
		MSdelay(1000);
		endMusic();

		this->isDone = true;
		return;
	}

}
