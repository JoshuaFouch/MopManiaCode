#include "event.h"
#include "battle.h"

//base event
event::event(std::string music)
{
	this->music = music;
}

bool event::get_isComplete()
{
	return isComplete;
}
void event::isCompleted()
{
	isComplete = true;
}
void event::setIncomplete()
{
	isComplete = false;
}

void event::cutScene(character& c)
{
	playMusic(this->music);
	std::cout << "Things will happen" << std::endl;
}
