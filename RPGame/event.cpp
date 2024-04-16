#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"

//base event
event::event() {};
event::event(std::string music)
{
	this->music = music;
}


void event::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		playMusic("metalPipe.wav");
		std::cout << "Things will happen" << std::endl;
		this->isDone = true;
		system("pause");
		return;
	}
}


/*waiting room event*/
waitingRoomEvent::waitingRoomEvent(std::string music, enemy* one, enemy* two, enemy* three, battle* b)
{
	this->one = one;
	this->two = two;
	this->three = three;
	this->Garbagebattle = b;
}
void waitingRoomEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		//playMusic();
		Sdelay(2);
		std::cout << "You entered the waiting room... ";
		MSdelay(1000);
		std::cout << "A rancid stench fills the air..." << std::endl;
		MSdelay(2000);
		std::cout << "You feel a dark presence around you..." << std::endl;
		MSdelay(3000);
		std::cout << "A garbage can fell to the ground and trash fell all over the place...";
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(100);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A GarbageDan appeared from nowhere!" << std::endl;
		Sdelay(2);
		Garbagebattle->Battle_Sequence(c, *one);
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
		Sdelay(2);
		Garbagebattle->Battle_Sequence(c, *two);
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
		Sdelay(2);
		Garbagebattle->Battle_Sequence(c, *three);
		if (c.getLife() == 0) {
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

