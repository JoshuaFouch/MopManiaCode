#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"
#include "npc.h"


using namespace std;

cellarEvent::cellarEvent() {};

void cellarEvent::trigger(character& c)
{
    if (this->isDone != true) {
        endMusic();
        playMusic("putrid.wav");

        if (c.get_deadRat() < 4) {
            playSFX("vine-boom.wav");
            cout << "get outta here ya broke boy!!!";   //will fix this and the many other errors Iv've enevitibly made
            MSdelay(5000);
            return;
        }
        else {
            while (true) {
                color(5);
                clear();
                cout << "You have " << c.get_deadRat() << " rats"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << " remaining:" << endl;
                cout << "\n\tWhat type of items"; MSdelay(400); cout << "s"; MSdelay(300); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << " would you like?\n";
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Potionsss" << std::endl;
                color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Specialty Itemsss" << std::endl;
                color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Play Game" << std::endl;// neat? not my code tho
                color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

                int choice;
                cin >> choice;

                switch (choice) {
                case 1:
                    while (true) {
                        color(5);
                        clear();
                        cout << "\t\tWhat potions"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                        color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                        color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Sponge armor (increases your HP) - 4 ratsss" << '\n';
                        color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Bleach lining (increases your ATK) - 4 ratsss" << '\n';
                        color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Wax-coat (increases your DEF) - 4 ratsss" << '\n';
                        color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
                        color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

                        int choiceA;
                        cin >> choiceA;

                        switch (choiceA)

                case 2:
                case 3:
                case 4:
                    color(5);
                    cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon" << endl; MSdelay(4000);
                    endMusic();
                    break;
                default:
                    color(5);
                    cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200);
                    cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                    MSdelay(3200);
                    }

                }
        }


        
       
 
    }
     else {
         Sdelay(2);
         std::cout << "You entered The Cellar... ";
         MSdelay(3000);
         std::cout << "The room is dark, and the air thick as mud, with a wretched stench of rotting flesh"; ellipsis(); std::cout << endl;
         MSdelay(4000);
         std::cout << "What is this?? You see a rat on the ground!!" << std::endl;
         playSFX("BAH.wav");
         MSdelay(4500);
         std::cout << "Oh its dead... you decided to pick it up..." << std::endl;
         MSdelay(2400);
         c.acq_deadRat();
         Sdelay(4);
         clear();
         color(5);
         std::cout << "hss"; cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s" << endl; MSdelay(200);
         Sdelay(3);
         color(7);
         cout << "WHAT WAS THAT???" << endl;
         Sdelay(2);
         std::cout << "You walk towards the back of the room and can faintly see a lengthy crack in the wall..." << std::endl;
         MSdelay(5000);
         std::cout << "Suddenly you see a pair slitted eyes blink open, their yellow glow slightly lighting up the room " << std::endl;
         MSdelay(7000);
         clear();
         ellipsis();
         std::cout << "*a voice then calls out to you in a raspy tone*" << std::endl;
         MSdelay(5000);
         clear();
         playMusic("putrid.wav");
         color(5);
         std::cout << "Putrid Python: You there"; MSdelay(500); std::cout << ", yes"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout << ", you there with the moppy fac"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e..." << endl;
         MSdelay(4000);
         std::cout << "I need your assistanc"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e. "; MSdelay(500); std::cout << "I have great rewards"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); std::cout << " to offer you..." << std::endl;
         Sdelay(4);
         std::cout << "And all you must do is"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); std::cout << " give me a few of those rats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); std::cout << " of yours"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s" << std::endl;
         MSdelay(6000);
         clear();
         std::cout << "*sniff sniff*" << endl; color(5); MSdelay(1000); std::cout << "I can already smell "; MSdelay(500); std::cout << c.get_deadRat() << " dead rat(sssss) on you" << std::endl;
         MSdelay(2000);
         std::cout << "S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "o what do ya say kiddo? " << endl; MSdelay(800); std::cout << "Do we got ourselves"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " a deal?" << std::endl;
         MSdelay(5000);
         DotdotTwo();
         std::cout << "That was rhetorical"; MSdelay(3000); std::cout << ", of cours"; cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); std::cout << "e we have a deal." << endl; MSdelay(1700); std::cout << "Just come back when whenever you wanna start trading..." << std::endl;
         MSdelay(2000);
         cout << "Now GO START LOOKING FOR SOME RAT"; cout << "S"; MSdelay(200); cout << "S"; MSdelay(200); cout << "S"; MSdelay(200); cout << "S"; MSdelay(500); ellipsis();
         clear();
         cout << "GET OUTTA HERE!!";
         ellipsis();
         ellipsis();
         clear();
         MSdelay(1300);
         cout << "s"; MSdelay(200); cout << "s"; MSdelay(200);  cout << "s"; MSdelay(200); cout << "s"; MSdelay(200);
         MSdelay(5000);
         endMusic();

         //this->isDone = true;
         return;
     }
}

//BubblyBoy
void bubbleBoy::dialogue(character& c)
{
	color(7);
	clear();
	std::cout << "You hear wailing, and decide to walk nearer to the noise" << std::endl;
	color(9); //this dialogue will be light blue, moms should be dark blue
	std::cout << "Bubble Boy: Can anybody hear me?"<<std::endl;
        	color(8);
	std::cout << "[1]: ";
    color(7);
	std::cout << " I can hear you!"<<std::endl;
    	color(8);
	std::cout << "[2]: ";
    color(7);
    std::cout <<           " Sorry kid, I've got more important things to do"<<std::endl;	//change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "1")
	{
		color(9);
		std::cout << "Bubble Boy: Finally someone came!" << std::endl;;
		MSdelay(2000);
		std::cout << "I was exploring this creepy old mansion, looking for soap potions" << std::endl;
		MSdelay(3000);
		std::cout << "when all of a sudden this broom closet door shut on me!" << std::endl;
		MSdelay(3000);
		clear();
		std::cout << "I was stuck and no one heard me yelling!!" << std::endl;
		MSdelay(2000);
		std::cout << "Guess I should've listened to mom..." << std::endl;
		MSdelay(2500);
		clear();
		std::cout << "I don't really need these potions anymore... so I guess if you can get me home," << std::endl;
		MSdelay(2000);
		std::cout << "these 5 soap potions I collected are yours!" << std::endl;
		MSdelay(3500);
		clear();
		std::cout << "And I'm sure mom would be mighty glad to see me again too!" << std::endl;
		MSdelay(2000);
		std::cout << "So, what do you say are you gonna help me get back to mom???";
		MSdelay(2000);
		//change back to white for user
            	color(8);
	std::cout << "[1]: ";
    color(7);
		std::cout << " You've got yourself a deal kiddo!"<<std::endl;
            	color(8);
	std::cout << "[2]: ";
    color(7);
    std::cout <<     " Ain't no way ya blabbering bubble, let's fight!"<<std::endl;	//change back to white for user
    
	
		std::string choice;
		std::cin >> choice;
		if (choice == "1") {
			color(9);
			std::cout << "Bubble Boy: Thank you soap much, kind adventurer!" << std::endl;
			MSdelay(2000);
			color(7);
			std::cout << "*Bubbly Boy* joined you on your quest! \nLooks like bringing him back to his mom will net you some sweet rewards\n";
			c.bubAdvance();	//set the int to the corresponding quest progression level, probably 1, to represent having bubble boy with you
			system("pause");
		}
		else if (choice == "2") {
			color(9);
		//battle BubbleBattle;
		BubblyBoy BBB(5);
        BubbleBattle.Battle_Sequence(c,BBB);
			clear();
			color(7);
		}

	}
	else if(choice=="2"){
		color(9);
		std::cout << "Bubble Boy: Wait someone actually hears me!?" << std::endl;
		MSdelay(2000);
        std::cout << "and you're not even gonna help me??" << std::endl;
        MSdelay(2000);
        std::cout << "what a mean adventurer..." << std::endl;
        MSdelay(2000);
         std::cout << "I'm never gonna see mom again am I?" << std::endl;
        MSdelay(2000);
        clear();
	    Dotdot();
		std::cout << "*continues wailings*" << std::endl;
        MSdelay(2000);
		clear();
		color(7);
	}

    	    else {
			color(9);//this is a sort of 1d10t pr00fing
			std::cout << "Bubble Boy: What was that?" << std::endl;
			MSdelay(2000);
			std::cout << "Oh! He must not speak Soapanese..." << std::endl;
			MSdelay(2000);
			std::cout << "*while over enunciating syllables* \nEYE";
			MSdelay(500); std::cout << " KNEEED";
			MSdelay(500); std::cout << " YOOURRR";
			MSdelay(500); std::cout << " HELPPPP! " << std::endl;
			clear();
			Dotdot();
			std::cout << "Yeah, that probably didn't help the situation..." << std::endl;
			MSdelay(4000);
			std::cout << "Guess I'm not getting saved am I?" << std::endl;
			MSdelay(2000);
			std::cout << "*continues wailings*" << std::endl;
			MSdelay(4000);
			color(7);
			clear();
			std::cout << "You should probably try a proper answer next time..." << std::endl;
			system("pause");//call BubbleBoy's dioulauge again maybe 
		}
}

//bubble mama
bubbleMama::bubbleMama() {};

void bubbleMama::dialogue(character& c) {
    std::cout << "not finished" << std::endl;
    system("pause");
}


dermEvent::dermEvent() {};

void dermEvent::trigger(character& c) {
    std::cout << "not finished" << std::endl;
    system("pause");
}

supplyEvent::supplyEvent() {};

void supplyEvent::trigger(character& c) {
    std::cout << "not finished" << std::endl;
    system("pause");
}
