#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"
//#include <ChatGPTsnake.h>

using namespace std;






/*
"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "
c.Rat_Sale(4);
*/


/*
    srand(time(NULL));
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        usleep(100000); // Sleep for 0.1 seconds
    }
    return 0;


*/

/*CellarEvent
cellarEvent::cellarEvent() {};

void cellarEvent::trigger(character& c)
{
	if (this->isDone == true) {

		while(c.get_deadRat()>=4) {//while you still have enough rats to buy things
            color(5);
            cout << "\nYou have "; c.get_deadRat(); cout << " rats"; MSdelay(500); cout << "s"; MSdelay(500); cout << "s"; MSdelay(500); cout << "s"; MSdelay(500);cout<< "remaining:"<<endl;
cout<<"\n\n\tWhat type of items"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " would you like?\n";
color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Potions" << std::endl;
std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Specialty Items" << std::endl;	//janitorius is the same person as grime reaper, no one knows who janitorius is except u
std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Play Game" << std::endl;// neat? not my code tho
std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

int choice;
cin>>choice;
if (choice==3){
    color(5);
    cout<<"I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon";
    endMusic();
    break;}

 if(choice !=1 && choice !=2 && choice !=3){
     color(5);
    cout<<"You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";}
switch(choice)

{
    {
case 1:
    color(5);
    cout << "\n\tWhat potions"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
    std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Sponge armor (increases your character's HP) - 4 rats" << '\n';
    std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Bleach lining (increases your character's ATK) - 4 rats" << '\n';
    std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Wax-coat (increases your character's DEF) - 4 rats" << '\n';
    std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
    int choiceA;
    cin >> choiceA;
    if (choiceA != 1 && choiceA != 2 && choiceA != 3) {
        cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
    }
    switch (choiceA) {
    case 1:
        color(5);
        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(200); cout << "ponge armor\n";
        c.Rat_Sale(4);
        c.get_healUp();
        break;
    case 2:
        color(5);
        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Bleach lining potion\n";
        c.Rat_Sale(4);
        c.get_attUp();
        break;
    case 3:
        color(5);
        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Wax"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " coat\n";
        c.Rat_Sale(4);
        c.get_defUp();
        break;
    }
    
    break;

    case 2:
        color(5);
        cout << "\n\tSpecialty items "; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
        color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
        std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Slippery Soap (lets you escape any battle) - 8 rats" << '\n';
        std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Cleaning tips (shows enemy's current stats) - 4 rats" << '\n';//new one to show you the stats of your enemy?
        std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Whendex (shows number of Dead rats left to collect) - 5 rats"<< '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is displayed
        std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
        color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
    int choiceB;
    cin>>choiceB;
     if(choiceB !=1 && choiceB !=2 && choiceB !=3 && choiceB !=4){
    cout<<"You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
     }
    switch(choiceB){
   
    case 1:
        color(5);
        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "lippery S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oap\n";
        c.Rat_Sale(4);
        c.get_attUp();// will have to make these 
      break;
    case 2:
        color(5);
        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Cleaning tips"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        c.Rat_Sale(4);
        c.get_attUp();// will have to make these 
      break;
    case 3:
        color(5);
        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Whendex"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
        c.Rat_Sale(4);
        c.get_attUp();// will have to make these 
      break;
    }
   
    break;

 case 3:
     /*  srand(time(NULL));
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        usleep(100000); // Sleep for 0.1 seconds
    }
      break;//when you lose or leave the game it just resets 
    }
    return main();
    break;
    */
/*}
}
if (c.get_deadRat()<4){
    cout<<"get outta here ya broke boi!!!";//will fix this and the many other errors Iv've enevitibly made
    return 0;}


		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
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

		color(5);
		std::cout << "Putrid Python: You there";MSdelay(500); std::cout << ", yes"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "";MSdelay(500); std::cout << ", you there with the moppy fac"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e...";
		MSdelay(3000);
		std::cout << "I need your assistanc"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e";MSdelay(500); std::cout << "I have great rewards"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "";MSdelay(500); std::cout << " to offer you" << std::endl;
		Sdelay(2);
		std::cout << "And all you must do is"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "";MSdelay(500); std::cout << "give me a few of those rats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "";MSdelay(500); std::cout << "of yours"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "" << std::endl;
		MSdelay(2000);
		clear();
		color(7);
        std::cout << "*sniff sniff*"; color(5); MSdelay(1000); std::cout << "I can already smell "; MSdelay(500); std::cout << c.get_deadRat() << " dead rats on you" << std::endl;
		MSdelay(2000);
		std::cout << "S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "o what do ya say kiddo?";MSdelay(500); std::cout << "Do we got ourselves"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " a deal?" << std::endl;
		MSdelay(5000);
		clear();
        std::cout << "That was retorical"; MSdelay(500); std::cout << ", of cours"; cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout<<"e we have a deal"; MSdelay(500); std::cout <<", just come back when whenever you wanna start trading " << std::endl;
		MSdelay(2000);

		endMusic();

		this->isDone = true;
		return;
	}

}*/