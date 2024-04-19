#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"


/*CellarEvent*/
cellarEvent::cellarEvent(enemy* one, battle* b)//more of a boss type music?
{
	this->one = one;
	this->Putridbattle = b;
}
void cellarEvent::trigger(character& c)
{
	if (this->isDone == true) {

		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		//playMusic();
		Sdelay(2);
		std::cout << "You entered The Cellar... ";
		MSdelay(1000);
		std::cout << "The room is dark, and the air thick as mud, with a wretched stench of rotting flesh..." << std::endl;
		MSdelay(2000);
		std::cout << "You walk towards the back of the room and can faintly see a lengthy crack in the wall..." << std::endl;
		MSdelay(3000);
		std::cout << "Suddenly you see a pair slitted eyes blink open, their yellow glow slightly lighting up the room " << std::endl;
		MSdelay(3000);
		clear();
		MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "." << std::endl;
		std::cout << "*a voice then calls out to you in a raspy tone*" << std::endl;
		MSdelay(3000);

		color(2);
		std::cout << "Putrid Python: You thereee";MSdelay(500); std::cout << ", yesssss";MSdelay(500); std::cout << ", you there with the moppy facccccce...";
		MSdelay(3000);
		std::cout << "I need your assistanccccce";MSdelay(500); std::cout << "I have great rewardsssss";MSdelay(500); std::cout << " to offer you" << std::endl;
		Sdelay(2);
		std::cout << "And all you must do isssssss";MSdelay(500); std::cout << "give me a few of those ratssssss";MSdelay(500); std::cout << "of yoursssss" << std::endl;
		MSdelay(2000);
		clear();
		color(7);
		std::cout << "*sniff sniff*";color(2); std::cout << "I can already smell "<<c.get_deadRat()<<" dead rats on you"<< std::endl;
		MSdelay(2000);
		std::cout << "So what do ya say kiddo?";MSdelay(500); std::cout << "Do we got ourselves a deal?" << std::endl;
		MSdelay(5000);
		clear();
		std::cout << "That was retorical"; MSdelay(500); std::cout << ", of course we have a deal"; MSdelay(500); std::cout <<", just come back when whenever you wanna start trading " << std::endl;
		MSdelay(2000);

		endMusic();

		this->isDone = true;
		return;
	}

}