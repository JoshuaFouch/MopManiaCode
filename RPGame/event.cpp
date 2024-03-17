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
void event::cutScene()
{
	playMusic(this->music);
	std::cout << "Things will happen" << std::endl;
}
