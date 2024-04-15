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
	playMusic("metalPipe.wav");
	std::cout << "Things will happen" << std::endl;
	system("pause");
}

bool event::alreadyDone() {
	if (this->isDone = 1) {
		return false;
	}
	return true;
}

void event::finished() {
	this->isDone = 1;
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
	if (alreadyDone()) {
		return;	//if character has already triggered the event in this node
	}

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
	MSdelay(700);
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
	MSdelay(3000);
	color(8);
	std::cout << "Janitorius: You have done well my dear " << c.get_name() << "..." << std::endl;
	Sdelay(2);
	std::cout << "You have restored this room to how it once was..." << std::endl;
	MSdelay(3);
	clear();
	std::cout << "I have faith in you...";
	MSdelay(1000); 
	std::cout << "Continue on your journey...and..." << std::endl;
	MSdelay(1000);
	std::cout << "save... ";
	MSdelay(1000);
	std::cout << "me..." << std::endl;
	MSdelay(2400);
	std::cout << "from... my mis-";
	MSdelay(1000);

	finished();	//finished event
}