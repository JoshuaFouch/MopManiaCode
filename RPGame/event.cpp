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
	playMusic(this->music);
	std::cout << "Things will happen" << std::endl;
	system("pause");
}
