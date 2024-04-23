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

void cellarEvent::trigger(character& c)
{
    if (this->isDone == true) {

        endMusic();
        playMusic("putrid.wav");

        while (c.get_deadRat() >= 4) {  //while you still have enough rats to buy things
            color(5);
            cout << "\nYou have " << c.get_deadRat() << " rats"; MSdelay(500); cout << "s"; MSdelay(500); cout << "s"; MSdelay(500); cout << "s"; MSdelay(500); cout << " remaining:" << endl;
            cout << "\n\n\tWhat type of items"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " would you like?\n";
            color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
            color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Potions" << std::endl;
            color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Specialty Items" << std::endl;	//janitorius is the same person as grime reaper, no one knows who janitorius is except u
            color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Play Game" << std::endl;// neat? not my code tho
            color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
            color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

            int choice;
            cin >> choice;
            if (choice == 3) {
                color(5);
                cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon" << endl; MSdelay(4000);
                endMusic();
                break;
            }

            if (choice != 1 && choice != 2 && choice != 3) {
                color(5);
                cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
            }
            switch (choice)
            {
        
                case 1:
                    color(5);
                    clear();
                    cout << "\n\tWhat potions"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                    color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Sponge armor (increases your character's HP) - 4 rats" << '\n';
                    color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Bleach lining (increases your character's ATK) - 4 rats" << '\n';
                    color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Wax-coat (increases your character's DEF) - 4 rats" << '\n';
                    color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
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
                    clear();
                    cout << "\n\tSpecialty items"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                    color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Slippery Soap (lets you escape any battle) - 8 rats" << '\n';
                    color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Cleaning tips (showsss enemy'sss current statsss) - 4 rats" << '\n';//new one to show you the stats of your enemy?
                    color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Whendex (increasesss each max stat by 5) - 10 rats" << '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is displayed
                    color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Mirror (lets you see yourself as others see you) - 4 rats" << '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is 
                    color(5); std::cout << "|"; color(8); std::cout << "[5]: "; color(7); std::cout << "Back to main shop" << std::endl;
                    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                    int choiceB;
                    cin >> choiceB;
                    if (choiceB != 1 && choiceB != 2 && choiceB != 3 && choiceB != 4) {
                        cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                    }
                    switch (choiceB) {

                    case 1:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "lippery S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oap\n";
                        c.Rat_Sale(4);
                        c.acq_slipperySoap();// will have to make these
                        MSdelay(2222);
                        break;
                    case 2:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Cleaning tips"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        c.Rat_Sale(4);
                        c.acq_cleaningTips();
                        MSdelay(2222);
                        break;
                    case 3:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Whendex"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        c.Rat_Sale(4);
                        c.acq_Whendex();
                        MSdelay(2222);
                        break;

                    case 4:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Mirror"; MSdelay(200); cout << "\n";
                        c.Rat_Sale(4);
                        c.acq_Mirror();
                        MSdelay(2222);
                        break;
                    }
                    break;

                case 3:
                    /* srand(time(NULL));
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
                 break;*/
                    std::cout << " this will be game" << std::endl;
            }
            if (c.get_deadRat() < 4) {
                playSFX("vine-boom.wav");
                cout << "get outta here ya broke boi!!!";   //will fix this and the many other errors Iv've enevitibly made
                MSdelay(5000);
                return;
            }
        }
    }
     else {
         Sdelay(2);
         std::cout << "You entered The Cellar... ";
         MSdelay(3000);
         std::cout << "The room is dark, and the air thick as mud, with a wretched stench of rotting flesh..." << std::endl;
         MSdelay(4000);
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
         cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500);
         MSdelay(5000);
         endMusic();

         this->isDone = true;
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
    std::cout << "Bubble Boy: Can anybody hear me?" << std::endl;
    color(7); std::cout << "1. I can hear you!" << std::endl;
    std::cout << "2. Sorry kid, I've got more important things to do" << std::endl;	//change back to white for user
    int choice;
    std::cin >> choice;

    if (choice == 1)
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
        color(7);//change back to white for user
        std::cout << "1. You've got yourself a deal kiddo!" << std::endl;
        std::cout << "2. Ain't no way ya blabbering bubble!" << std::endl;	//change back to white for user


        int choice;
        std::cin >> choice;
        if (choice == 1) {
            color(9);
            std::cout << "Bubble Boy: Thank you soap much, kind adventurer!" << std::endl;
            MSdelay(2000);
            color(7);
            std::cout << "*Bubbly Boy* joined you on your quest! \nLooks like bringing him back to his mom will net you some sweet rewards\n";
            c.bubAdvance();	//set the int to the corresponding quest progression level, probably 1, to represent having bubble boy with you
            system("pause");
        }
        else if (choice == 2) {
            color(9);
            std::cout << "Bubble Boy: Oh well, guess I'll just die here" << std::endl;
            MSdelay(4000);
            std::cout << "because I'm just a helpless kid, and this mean adventurer refuses to help" << std::endl;
            MSdelay(3000);
            std::cout << "*sighs dramatically*" << std::endl;
            MSdelay(3000);
            clear();
            color(7);
        }

    }
    else if (choice == 2) {
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
        system("pause");
        bubbleBoy::dialogue(c);
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
