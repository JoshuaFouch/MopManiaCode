#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"
#include "npc.h"
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

cellarEvent::cellarEvent() {};

void cellarEvent::trigger(character& c) {
    if (this->isDone == true) {

        while (c.get_deadRat() >= 4) {//while you still have enough rats to buy things
            color(5);
            cout << "\nYou have " << c.get_deadRat() << " rats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " remaining:" << endl;
            cout << "\n\n\tWhat type of items"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
            color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
            std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Potions" << std::endl;
            std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Specialty Items" << std::endl;
            std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Play Game" << std::endl;
            std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
            color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

            int choice;
            cin >> choice;
            if (choice == 3) {
                color(5);
                cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon";
                endMusic();
                break;
            }

            if (choice != 1 && choice != 2 && choice != 3) {
                color(5);
                cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid , that's not even an option\n";
            }
            switch (choice) {

            case 1:
                color(5);
                cout << "\n\tWhat potions would you like?\n";
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Sponge armor (increases your character's HP) - 4 rats" << '\n';
                std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Bleach lining (increases your character's ATK) - 4 rats" << '\n';
                std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Wax-coat (increases your character's DEF) - 4 rats" << '\n';
                std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                int choiceA;
                cin >> choiceA;
                if (choiceA != 1 && choiceA != 2 && choiceA != 3) {
                    cout << "You stupid, that's not even an option\n";
                }
                switch (choiceA) {
                case 1:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your sponge armor\n";
                    c.Rat_Sale(4);
                    c.get_healUp();
                    break;
                case 2:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your Bleach lining potion\n";
                    c.Rat_Sale(4);
                    c.get_attUp();
                    break;
                case 3:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your Wax-coat\n";
                    c.Rat_Sale(4);
                    c.get_defUp();
                    break;
                }
                break;

            case 2:
                color(5);
                cout << "\n\tSpecialty items would you like?\n";
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Slippery Soap (lets you escape any battle) - 8 rats" << '\n';
                std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Cleaning Tips (lets you see your enemy's stats) - 7 rats" << '\n';
                std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Whendex (increases each stat's max by 1) - 10 rats" << '\n';
                std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Mirror (lets you see how others see you) - 8 rats" << '\n';// outputs the corresponding animation depending on what characer you are (checks string for name)
                std::cout << "|"; color(8); std::cout << "[5]: "; color(7); std::cout << "Clean Path (lets you scroll up to see game history) - 12 rats" << '\n';// outputs the corresponding animation depending on what characer you are (checks string for name)
                std::cout << "|"; color(8); std::cout << "[6]: "; color(7); std::cout << "Back to main shop" << std::endl;
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                int choiceB;
                cin >> choiceB;
                if (choiceB != 1 && choiceB != 2 && choiceB != 3 && choiceB != 4) {
                    cout << "You stupid, that's not even an option\n";
                }
                switch (choiceB) {

                case 1:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your Slippery Soap\n";
                    c.Rat_Sale(4);
                    c.get_attUp();// will have to make these 
                    break;
                case 2:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your Cleaning tips\n";
                    c.Rat_Sale(4);
                    c.get_attUp();// will have to make these 
                    break;
                case 3:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your Whendex\n";
                    c.Rat_Sale(4);
                    c.get_attUp();// will have to make these 
                    break;

               case 4:
                    color(5);
                    cout << "Pleasure doing business\n";
                    cout << "Here's your Whendex\n";
                    c.Rat_Sale(4);
                    c.get_attUp();// will have to make these 
                    break;
                }
                break;

            case 3:
                std::cout << " this will be game" << std::endl;

            }
        }
        if (c.get_deadRat() < 4) {
            cout << "get outta here ya broke boi!!!";//will fix this and the many other errors Iv've enevitibly made
            return;
        }
    }
    else {
        endMusic();
        Sdelay(2);
        std::cout << "You entered The Cellar... ";
        MSdelay(2000);
        std::cout << "The room is dark, and the air thick as mud, with a wretched stench of rotting flesh..." << std::endl;
        MSdelay(4000);
        std::cout << "You walk towards the back of the room and can faintly see a lengthy crack in the wall..." << std::endl;
        MSdelay(3000);
        std::cout << "Suddenly you see a pair slitted eyes blink open, their yellow glow slightly lighting up the room " << std::endl;
        MSdelay(3000);
        clear();
        MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "." << std::endl;
        std::cout << "*a voice then calls out to you in a raspy tone*" << std::endl;
        MSdelay(3000);

        color(5);
        std::cout << "Putrid Python:"; MSdelay(500); std::cout << " You there"; MSdelay(500); std::cout << ", ye"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout << ", you there with the moppy fac"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e...";
        MSdelay(3000);
        std::cout << "I need your assistanc"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e"; MSdelay(500); std::cout << "I have great rewards"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout << " to offer you" << std::endl;
        Sdelay(2);
        std::cout << "And all you must do is"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout << "give me a few of those rats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout << "of yours"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "" << std::endl;
        MSdelay(2000);
        clear();
        color(7);
        std::cout << "*sniff sniff*"; color(5); MSdelay(1000); std::cout << "I can already smell "; MSdelay(500); std::cout << c.get_deadRat() << " dead rats on you" << std::endl;
        MSdelay(2000);
        std::cout << "S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "o what do ya say kiddo?"; MSdelay(500); std::cout << "Do we got ourselves"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " a deal?" << std::endl;
        MSdelay(5000);
        clear();
        std::cout << "That was retorical"; MSdelay(500); std::cout << ", of cours"; cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); std::cout << "e we have a deal"; MSdelay(500); std::cout << ", just come back when whenever you wanna start trading " << std::endl;
        MSdelay(2000);

        endMusic();

        this->isDone = true;
        return;
    }
}

//BubblyBoy
bubbleBoy::bubbleBoy() : NPC() {}
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
			//CALL BATTLE
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


/*
   int counter = 0;

    while (counter != 20) {
        counter++;
        MSdelay(200);
        std::cout << " _____ \n";
        std::cout << "(_____)\n";
        clear();
        MSdelay(200);
        std::cout << " _____ \n";
        std::cout << "(_***_)\n";
        clear();
        MSdelay(200);
        std::cout << "  _____ \n";
        std::cout << " (_***_)\n";
        clear();
        MSdelay(200);
        std::cout << "   _____ \n";
        std::cout << "  (_***_)\n";
        clear();
        MSdelay(200);
        std::cout << "    _____ \n";
        std::cout << "   (_***_)\n";
        clear();
        MSdelay(200);
        std::cout << "   _____ \n";
        std::cout << "  (_***_)\n";
        clear();
        MSdelay(200);
        std::cout << "  _____ \n";
        std::cout << " (_***_)\n";
        clear();
        MSdelay(200);
        std::cout << " _____ \n";
        std::cout << "(_***_)\n";
        clear();
        MSdelay(200);
        std::cout << " __ \\_ \n";
        std::cout << "(_#%#_)\n";
        clear();
        MSdelay(200);
        std::cout << " __%\\_ \n";
        std::cout << "(__%#_)\n";
        clear();
        MSdelay(200);
        std::cout << " __%\\_ \n";
        std::cout << "(__#__)\n";
        clear();
        MSdelay(200);
        std::cout << " __%\\_ \n";
        std::cout << "(_____)\n";
        clear();
        MSdelay(200);
        std::cout << " __ \\_ \n";
        std::cout << "(_____)\n";
        clear();
        MSdelay(200);
        std::cout << " _____ \n";
        std::cout << "(_____)\n";
        clear();
        MSdelay(200);
    }*/


    /*
     int counter=0;
   
    while (counter!=20){
        counter++;
        MSdelay(200);
    std::cout<<" ____|=\n";
    std::cout<<"     |=\n";
    clear();
      MSdelay(200);
    std::cout<<" ___\\=\n";
    std::cout<<"     \\=\n";
    clear();
    MSdelay(200);
    std::cout<<" ____|=\n";
    std::cout<<"     |=\n";
      MSdelay(200);
    clear();
    std::cout<<" ___/=\n";
    std::cout<<"   /=\n";
      MSdelay(200);
    clear();
    }
    */

    /*
       int counter=0;
  //  int counter2=0;


        while (counter!=20){//filling
        counter++;
            clear();
        MSdelay(200);
    std::cout<<" ,___\n";
    std::cout<<"<*___|7\n";
    clear();
      std::this_thread::sleep_for(std::chrono::milliseconds(400));
    std::cout<<" ,___\n";
    std::cout<<"<**__|7\n";
    clear();
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
    std::cout<<" ,___\n";
    std::cout<<"<***_|7\n";
      std::this_thread::sleep_for(std::chrono::milliseconds(400));
    clear();
    std::cout<<" ,___\n";
    std::cout<<"<****|7\n";
      std::this_thread::sleep_for(std::chrono::milliseconds(400));
    clear();
//    std::cout<<"  \\__\n";
//    std::cout<<"<____|7\n";
//      MSdelay(200);
//    clear();
   // }

   //         while (counter2!=20){//emptying
        counter++;
    MSdelay(200);
    std::cout<<"  \\__\n";
    std::cout<<"<****|7\n";
   clear();
        MSdelay(200);
    std::cout<<"  \\__\n";
    std::cout<<"<***_|7\n";
    clear();
      MSdelay(200);
    std::cout<<"  \\__\n";
    std::cout<<"<**__|7\n";
    clear();
    MSdelay(200);
    std::cout<<"  \\__\n";
    std::cout<<"<*___|7\n";
      MSdelay(200);
    clear();
    std::cout<<"  \\__\n";
    std::cout<<"<____|7\n";
      MSdelay(200);
    clear();
    std::cout<<" ,___\n";
    std::cout<<"<____|7\n";
      MSdelay(200);
    clear();
    }
    */