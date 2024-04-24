#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"
#include "npc.h"

using namespace std;

/*
"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "
c.Rat_Sale(4);
*/

cellarEvent::cellarEvent() {};
void cellarEvent::trigger(character& c)
{
    bool killy = false;
    bool killswitch = false;
    bool kill = false;
    if (this->isDone == true) {
        endMusic();
        playMusic("putrid.wav");

        if (c.get_deadRat() < 4) {
            playSFX("vine-boom.wav");
            cout << "get outta here ya broke boy!!!";   //will fix this and the many other errors Iv've enevitibly made
            MSdelay(5000);
            return;
        }
        else {
            while (killswitch == false) {
                color(5);
                clear();
                cout << "You have " << c.get_deadRat() << " rats"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << " remaining:" << endl;
                cout << "\n\tWhat type of items"; MSdelay(400); cout << "s"; MSdelay(300); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << " would you like?\n";
                color(5); cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                color(5); cout << "|"; color(8); cout << "[1]: "; color(7); cout << "Potionsss" << std::endl;
                color(5); cout << "|"; color(8); cout << "[2]: "; color(7); cout << "Specialty Itemsss" << std::endl;
                color(5); cout << "|"; color(8); cout << "[3]: "; color(7); cout << "Play Game" << std::endl;// neat? not my code tho
                color(5); cout << "|"; color(8); cout << "[4]: "; color(7); cout << "Exit" << std::endl;
                color(5); cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

            int choice;
            cin >> choice;
            if (choice == 3) {
                color(5);
                cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon";
                endMusic();
                break;
            }

                switch (choice) {
                case 1:
                    while (kill == false) {
                        color(5);
                        clear();
                        cout << "\t\tWhat potions"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                        cout << "You have " << c.get_deadRat() << " rats"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << " remaining:" << endl;
                        color(5); cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                        color(5); cout << "|"; color(8); cout << "[1]: "; color(7); cout << "Sponge armor (increases your HP) - 4 ratsss" << '\n';
                        color(5); cout << "|"; color(8); cout << "[2]: "; color(7); cout << "Bleach lining (increases your ATK) - 4 ratsss" << '\n';
                        color(5); cout << "|"; color(8); cout << "[3]: "; color(7); cout << "Wax-coat (increases your DEF) - 4 ratsss" << '\n';
                        color(5); cout << "|"; color(8); cout << "[4]: "; color(7); cout << "Back to main shop" << std::endl;
                        color(5); cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

                        int choiceA;
                        cin >> choiceA;

                        switch (choiceA) {
                        case 1:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(200); cout << "ponge armor\n";
                            c.Rat_Sale(4);
                            c.get_healUp();
                            MSdelay(2000);
                            continue;
                        case 2:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Bleach lining potion\n";
                            c.Rat_Sale(4);
                            c.get_attUp();
                            MSdelay(2000);
                            continue;
                        case 3:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Wax"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " coat\n";
                            c.Rat_Sale(4);
                            c.get_defUp();
                            continue;
                        case 4:
                            kill = true;
                            break;
                        default:
                            color(5);
                            cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200);
                            cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                            MSdelay(3200);
                            continue;
                        }

                    }
                    break;
                case 2:
                    while (killy == false) {
                        color(5);
                        clear();
                        cout << "\t\tSpecialty items"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                        cout << "You have " << c.get_deadRat() << " rats"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << " remaining:" << endl;
                        color(5); cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                        color(5); cout << "|"; color(8); cout << "[1]: "; color(7); cout << "Slippery Soap (letsss you escape any battle) - 8 ratsss" << '\n';
                        color(5); cout << "|"; color(8); cout << "[2]: "; color(7); cout << "Cleaning tips (shows enemy'sss current statsss) - 4 ratsss" << '\n';//new one to show you the stats of your enemy?
                        color(5); cout << "|"; color(8); cout << "[3]: "; color(7); cout << "Whendex (increasesss each max stat by 5) - 10 ratsss" << '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is displayed
                        color(5); cout << "|"; color(8); cout << "[4]: "; color(7); cout << "Mirror (lets you see yourself as others see you) - 4 ratsss" << '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is 
                        color(5); cout << "|"; color(8); cout << "[5]: "; color(7); cout << "Back to main shop" << std::endl;
                        color(5); cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

                        int choiceB;
                        cin >> choiceB;

                        switch (choiceB) {
                        case 1:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "lippery S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oap\n";
                            c.Rat_Sale(4);
                            c.acq_slipperySoap();// will have to make these
                            MSdelay(2000);
                            continue;
                        case 2:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Cleaning tips"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            c.Rat_Sale(4);
                            c.acq_cleaningTips();
                            MSdelay(2000);
                            continue;
                        case 3:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Whendex"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            c.Rat_Sale(4);
                            c.acq_Whendex();
                            MSdelay(2000);
                            continue;
                        case 4:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Mirror"; MSdelay(200); cout << "\n";
                            c.Rat_Sale(4);
                            c.acq_Mirror();
                            MSdelay(2000);
                            continue;
                        case 5:
                            killy = true;
                            break;
                        default:
                            color(5);
                            cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200);
                            cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                            MSdelay(3200);
                            continue;
                        }
                    }
                    break;
                case 3:
                    color(5);
                    std::cout << "Sorry... no game yet... (DLC)." << std::endl;
                    MSdelay(2000);
                    continue;
                case 4:
                    color(5);
                    cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon" << endl; MSdelay(4000);
                    endMusic();
                    killswitch = true;
                    break;
                default:
                    color(5);
                    cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200);
                    cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                    MSdelay(3200);
                    continue;
                }
            }
        }
    }
    else {
        clear();
        Sdelay(2);
        cout << "You entered The Cellar... ";
        MSdelay(3000);
        cout << "The room is dark, and the air thick as mud, with a wretched stench of rotting flesh"; ellipsis(); cout << endl;
        MSdelay(4000);
        cout << "What is this?? You see a rat on the ground!!" << std::endl;
        playSFX("BAH.wav");
        MSdelay(4500);
        std::cout << "Oh its dead... you decided to pick it up..." << std::endl;
        MSdelay(2400);
        c.acq_deadRat();
        Sdelay(4);
        clear();
        color(5);
        cout << "hss"; cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s" << endl; MSdelay(200);
        Sdelay(3);
        color(7);
        clear();
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
        cout << "Putrid Python: You there"; MSdelay(500); cout << ", yes"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << ""; MSdelay(500); cout << ", you there with the moppy fac"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e..." << endl;
        MSdelay(4000);
        cout << "I need your assistanc"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "c"; MSdelay(200); cout << "e. "; MSdelay(500); cout << "I have great rewards"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << " to offer you..." << std::endl;
        Sdelay(4);
        std::cout << "And all you must do is"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << " give me a few of those rats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << " of yours"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s" << std::endl;
        MSdelay(6000);
        clear();
        cout << "*sniff sniff*" << endl; color(5); MSdelay(1000); cout << "I can already smell "; MSdelay(500); cout << c.get_deadRat() << " dead rat(sssss) on you" << std::endl;
        MSdelay(2000);
        cout << "S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "o what do ya say kiddo? " << endl; MSdelay(800); cout << "Do we got ourselves"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " a deal?" << std::endl;
        MSdelay(5000);
        DotdotTwo();
        cout << "That was rhetorical"; MSdelay(3000); cout << ", of cours"; cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(500); cout << "e we have a deal." << endl; MSdelay(1700); cout << "Just come back when whenever you wanna start trading..." << std::endl;
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

        this->isDone = true;
        return;
    }
}

//BubblyBoy
//bubbleBoy::bubbleBoy() : NPC() {}
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
            	color(8);
	std::cout << "[1]: ";
    color(7);
		std::cout << " You've got yourself a deal kiddo!"<<std::endl;
            	color(8);
	std::cout << "[2]: ";
    color(7);
        std::cout << " Ain't no way ya blabbering bubble, let's fight!"<<std::endl;	//change back to white for user
    
	
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
            clear();
            std::cout << "Bubble Boy: You're kidding right?"; ellipsis(); std::cout << "R"; MSdelay(200); cout << "i"; MSdelay(200); cout << "G"; MSdelay(200); cout << "h"; MSdelay(200); cout << "t"; MSdelay(200); cout << "?"; MSdelay(200); cout << "?"; MSdelay(200); cout << "?"; MSdelay(200); cout << std::endl;
            BubbleBattle BB;
            BubblyBoy BUBS(5);
            BB.Battle_Sequence(c, BUBS);//during battle, we should have him like call for his mom and stuff like "MOM... JANITORIOUS... SOMEONE PLEASE HELP! SAVE ME FROM THIS MAD MAN!!!
            if (c.getLife() == 0) {
                return;	//if the character is dead
            }
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
        return;
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
    
    std::cout <<"You see a large bubble in distress, and choose to investigate" << std::endl;
    color(1);//this makes it dark blue
	std::cout <<  "BubbleMomma: My poor bubble boy is lost! I told him not to go to that dangerous old Hospitale"<< std::endl;
    MSdelay(5000);
    std::cout <<"why wouldn't he just listen to me!!" << std::endl;
    MSdelay(3000);
    clear();
    	color(8);
	std::cout << "[1]: ";
	color(7); 
    std::cout << " I have your Bubbleboy!"<< std::endl;    //change back to white for user
         color(8);
    std::cout << "[2]: ";
    color(7);
    std::cout << " Stop your wailing, ya big bubble!"<< std::endl; 
	std::string choice;
	std::cin >> choice;

	if (choice == "1"&&c.bubbleQuest==1)
	{
		color(1);
		std::cout <<"BubbleMomma: ITS MY BEAUTIFUL BUBBLY BUBBLE BOY!!!" << std::endl;
        MSdelay(2000);
        std::cout <<"I've missed you so much!!" << std::endl;
        MSdelay(2000);
        color(7);
         std::cout <<"*she hugs her bubble boy lovingly*" << std::endl;
        MSdelay(3000);
        Dotdot();
        color(1);
         std::cout <<"AHH YOU BAD BAD BUBBLE BOY! " << std::endl;
         MSdelay(2000);
         std::cout <<"OH I COULD ALMOST POP YOU " << std::endl;
         MSdelay(2000);
         std::cout <<"I TOLD YOU NOT TO GO TO THAT MANSION!" << std::endl;
         MSdelay(2000);
         std::cout <<"and WHAT do you do??? of COURSE you go to the mansion!" << std::endl;
         MSdelay(3000);
        std::cout <<"You know that ever since " << std::endl;
		color(4);
		std::cout <<"your father ";
		color(1);
		std::cout <<"left, we've been " << std::endl;
         MSdelay(3000);
         std::cout <<"struggling just to put soap on the table" << std::endl;
         MSdelay(2000);
        color(9);
          std::cout <<"Bubbleboy: But Mom, that's actually why I went to the Mansion" << std::endl;
         MSdelay(2000);
          std::cout <<"I saw how hard you were working just to feed the two of us and..." << std::endl;
         MSdelay(4000);
          std::cout <<" well, I just really wanted to help you out." << std::endl;
         MSdelay(4000);
         std::cout <<"Plus some weird stranger told me that there were lots and lots " << std::endl;//janitorious?
         MSdelay(3000);
         std::cout <<"of soap potions in that old storage closet." << std::endl;
         MSdelay(3000);
         color(1);
          std::cout <<"BubbleMomma: oh Bubble boy... *begins sobbing again*" << std::endl;
         MSdelay(2000);
         std::cout <<"well... I'm just glad to have you home again" << std::endl;
         MSdelay(4000);
          std::cout <<"Thank you soap much kind adventurer!" << std::endl;
         MSdelay(1000);
         color(7);
         std::cout <<"*you obtained 5 soap potions*" << std::endl;// might need to change the name of this item
         Dotdot();
          std::cout <<"*and a dead rat...*" << std::endl;
          MSdelay(2000);
           std::cout <<"*and for some reason this one stinks more than the others...*" << std::endl;
           MSdelay(5000);
         acq_healUp();
         acq_healUp();
         acq_healUp();
         acq_healUp();
         acq_healUp();
         acq_deadRat();
         MSdelay(1000);
		color(7);
		std::cout << "You have successfully completed";color(1); std::cout<<" THE BUBBLE QUEST!" << std::endl;
		color(7);
		//maybe give some exp to the player as well
        c.bubAdvance();//this means the int is 2 and you finished the quest
         MSdelay(3000);
	}
    else if (choice == "1"&&c.bubbleQuest<=0){//so if you dont have the child but say you do (or you killed him)
    color(1);
		std::cout <<"BubbleMomma: OH HOW IVE MISSED YOU, MY BEAUTIFUL BUBBLY BUBBLE BOY!!!" << std::endl;
        MSdelay(2000);
         Dotdot();
         std::cout <<"Wait..." << std::endl;
        MSdelay(2000);
          Dotdot();
          std::cout <<"where is he?" << std::endl;
           MSdelay(2000);
          std::cout <<"you don't have him do you?" << std::endl;
        MSdelay(2000);
         std::cout <<"you're a cruel person" << std::endl;
        MSdelay(2000);
         std::cout <<"you know that?" << std::endl;
        MSdelay(2000);
         //probably call the function again if this happens and you didnt see him yet 
        if (c.bubbleQuest==-1){
        clear();
            	color(8);
	std::cout << "[1]: ";
    color(7);
     std::cout << " You have no idea how cruel I really am, I POPPED your stupid little Bubble Boy"<< std::endl;    //change back to white for user
                color(8);
	std::cout << "[2]: ";
    color(7);
    std::cout << " I am SO sorry... "<< std::endl; 
	std::string choiceC;
	std::cin >> choiceC;}


		if (choiceC=="1"){
	color(1);
          std::cout <<"BubbleMomma: There's no way" << std::endl; MSdelay(2000);
		  std::cout <<"No, it just couldn't be" << std::endl; MSdelay(2000);
		  std::cout <<"You're just kidding, this is just some sick joke, "; MSdelay(2000);
		  std::cout <<"that's all it is " << std::endl; MSdelay(2000);
		  clear();
		  elipses();
		  std::cout <<"YOU!"; MSdelay(2000);
		  std::cout <<" This is all YOUR fault!"; MSdelay(2000);
		  std::cout <<", IM GOING TO KILL YOU!!! " << std::endl; MSdelay(2000);
		  std::cout <<"wait"; MSdelay(500); elipses();
		  std::cout <<"ha"; MSdelay(500);std::cout <<"ha"; MSdelay(400);std::cout <<"ha"; MSdelay(350);std::cout <<"ha"; MSdelay(300);std::cout <<"Ha"; MSdelay(250);
		  std::cout <<"Ha"; MSdelay(250);std::cout <<"Ha"; MSdelay(200);std::cout <<"Ha"; MSdelay(200);std::cout <<"HA"; MSdelay(150);std::cout <<"HA"; MSdelay(150);
		  std::cout <<"HA"; MSdelay(100);std::cout <<"HA"; MSdelay(100);std::cout <<"HA"; MSdelay(100);std::cout <<"HA"; MSdelay(50);std::cout <<"HA"; MSdelay(50);
		  clear();
		   std::cout <<"NO NEED!"<<endl; MSdelay(2000);
		   std::cout <<"Ha"; MSdelay(250);std::cout <<"Ha"; MSdelay(200);std::cout <<"Ha"; MSdelay(200);std::cout <<"HA"; MSdelay(150);std::cout <<"HA"; MSdelay(150);
		   std::cout <<"Because no one would ever fo anything so CRUEL"<<endl; MSdelay(2000);
		   std::cout <<"Because why would anyone ever KILL"<<endl; MSdelay(2000);
		   std::cout <<", such an innocent"; MSdelay(2000);
		   std::cout <<", beautiful"; MSdelay(2000);
		   std::cout <<", little"; MSdelay(2000);
		   std::cout <<", h"; MSdelay(200); std::cout << "e"; MSdelay(200); std::cout << "l"; MSdelay(200); std::cout << "p"; MSdelay(200); std::cout << "l"; MSdelay(200);std::cout << "e"; MSdelay(200);std::cout << "s"; MSdelay(200);std::cout << "s"; MSdelay(200);
		    elipses();
		   std::cout <<", B"; MSdelay(200); std::cout << "u"; MSdelay(200); std::cout << "b"; MSdelay(200); std::cout << "b"; MSdelay(200); std::cout << "l"; MSdelay(200);std::cout << "e"; MSdelay(200);std::cout << " B"; MSdelay(200);std::cout << "o"; MSdelay(200);
		   std::cout << "y"; MSdelay(200);
		    elipses();
			clear();
			std::cout <<"you're lying, you HAVE to be lying"<<endl; MSdelay(2000);
			elipses(); 
			 std::cout <<""<<endl; MSdelay(2000);
			 std::cout <<"PLEASE"; MSdelay(1000);
			std::cout <<"PLEASE just tell me that you're lying"<<endl; MSdelay(3000);//bargin depression, acceptance
			std::cout <<"PLEASE just tell me that my boy is okay"<<endl; MSdelay(3000);
			std::cout <<"I couldn't even imagine a life without him"<<endl; MSdelay(3000);
			std::cout <<"I'll give you ANYTHING"<<endl; MSdelay(2000);
			elipses(); 
			 std::cout <<"just"; MSdelay(1000);
			 elipses(); 
			 std::cout <<"just"; MSdelay(1000);
			 elipses(); 
			std::cout <<"TELL ME WHERE HE IS"<<endl; MSdelay(2000);
			std::cout <<"I KNOW YOU HAVE HIM SOMEWHERE!"<<endl; MSdelay(5000);
			elipses(); 
			std::cout <<"Oh"<<endl; MSdelay(2000);
			std::cout <<"Oh who am I kidding"; MSdelay(2000);
			std::cout <<", he's gone isn't he?"<<endl; MSdelay(3000);
			std::cout <<"he'll never come back"<<endl; MSdelay(5000);
			std::cout <<"whats the point anymore?"<<endl; MSdelay(5000);
			elipses(); 
			//then call here battle here with her at level 5 or something low, maybe just specifically low attack but high hp

         MSdelay(2000);
		}

		if (choiceC=="2"){//repeats a lot of other cuz you will only see that one once, since afterward she'll be dead
color(1);
          std::cout <<"BubbleMomma: There's no way" << std::endl; MSdelay(2000);
		  std::cout <<"No, it just couldn't be" << std::endl; MSdelay(2000);
		  std::cout <<"You're just kidding, this is just some sick joke, "; MSdelay(2000);
		  std::cout <<"that's all it is " << std::endl; MSdelay(2000);
		  clear();
		  elipses();
		  std::cout <<"YOU!"; MSdelay(2000);
		  std::cout <<" This is all YOUR fault!"; MSdelay(2000);
		  std::cout <<", IM GOING TO KILL YOU!!! " << std::endl; MSdelay(2000);
		  std::cout <<"wait"; MSdelay(500); elipses();
		  std::cout <<"ha"; MSdelay(500);std::cout <<"ha"; MSdelay(400);std::cout <<"ha"; MSdelay(350);std::cout <<"ha"; MSdelay(300);std::cout <<"Ha"; MSdelay(250);
		  std::cout <<"Ha"; MSdelay(250);std::cout <<"Ha"; MSdelay(200);std::cout <<"Ha"; MSdelay(200);std::cout <<"HA"; MSdelay(150);std::cout <<"HA"; MSdelay(150);
		  std::cout <<"HA"; MSdelay(100);std::cout <<"HA"; MSdelay(100);std::cout <<"HA"; MSdelay(100);std::cout <<"HA"; MSdelay(50);std::cout <<"HA"; MSdelay(50);
		  clear();
		   std::cout <<"NO NEED!"<<endl; MSdelay(2000);
		   std::cout <<"Ha"; MSdelay(250);std::cout <<"Ha"; MSdelay(200);std::cout <<"Ha"; MSdelay(200);std::cout <<"HA"; MSdelay(150);std::cout <<"HA"; MSdelay(150);
		   std::cout <<"Because no one would ever fo anything so CRUEL"<<endl; MSdelay(2000);
		   std::cout <<"Because why would anyone ever KILL"<<endl; MSdelay(2000);
		   std::cout <<", such an innocent"; MSdelay(2000);
		   std::cout <<", beautiful"; MSdelay(2000);
		   std::cout <<", little"; MSdelay(2000);
		   std::cout <<", h"; MSdelay(200); std::cout << "e"; MSdelay(200); std::cout << "l"; MSdelay(200); std::cout << "p"; MSdelay(200); std::cout << "l"; MSdelay(200);std::cout << "e"; MSdelay(200);std::cout << "s"; MSdelay(200);std::cout << "s"; MSdelay(200);
		    elipses();
		   std::cout <<", B"; MSdelay(200); std::cout << "u"; MSdelay(200); std::cout << "b"; MSdelay(200); std::cout << "b"; MSdelay(200); std::cout << "l"; MSdelay(200);std::cout << "e"; MSdelay(200);std::cout << " B"; MSdelay(200);std::cout << "o"; MSdelay(200);
		   std::cout << "y"; MSdelay(200);
		    elipses();
			clear();
			std::cout <<"you're lying, you HAVE to be lying"<<endl; MSdelay(2000);
			elipses(); 
			 std::cout <<""<<endl; MSdelay(2000);
			 std::cout <<"PLEASE"; MSdelay(1000);
			std::cout <<"PLEASE just tell me that you're lying"<<endl; MSdelay(3000);//bargin depression, acceptance
			std::cout <<"PLEASE just tell me that my boy is okay"<<endl; MSdelay(3000);
			std::cout <<"I couldn't even imagine a life without him"<<endl; MSdelay(3000);
			std::cout <<"I'll give you ANYTHING"<<endl; MSdelay(2000);
			elipses(); 
			 std::cout <<"just"; MSdelay(1000);
			 elipses(); 
			 std::cout <<"just"; MSdelay(1000);
			 elipses(); 
			std::cout <<"TELL ME WHERE HE IS"<<endl; MSdelay(2000);
			std::cout <<"I KNOW YOU HAVE HIM SOMEWHERE!"<<endl; MSdelay(5000);
			elipses(); 
			std::cout <<"Oh"<<endl; MSdelay(2000);
			std::cout <<"Oh who am I kidding"; MSdelay(2000);
			std::cout <<", he's gone isn't he?"<<endl; MSdelay(3000);
			std::cout <<"he'll never come back"<<endl; MSdelay(5000);
			std::cout <<"I forgive you though"<<endl; MSdelay(5000);
			elipses(); 
			std::cout <<"you really are sorry"; MSdelay(5000);
			std::cout <<", right?"<<endl; MSdelay(5000);
			            	color(8);
	std::cout << "[1]: ";
    color(7);
     std::cout << " Yes"<< std::endl;    //change back to white for user
                color(8);
	std::cout << "[2]: ";
    color(7);
    std::cout << " No... "<< std::endl; 
	std::string choiceD;
	std::cin >> choiceD;

	if (choiceD=="1"){
color(1);
          	 std::cout <<"BubbleMomma: You filthy creature..." << std::endl; MSdelay(2000);
		     std::cout <<"you were meant to clean"; MSdelay(4000);
			 std::cout <<", not just make more messes. " << std::endl; MSdelay(4000);
			 std::cout <<"you could've been a force for the good" << std::endl; MSdelay(4000);
			 std::cout <<", the clean"; MSdelay(4000);
			 std::cout <<", the"; MSdelay(4000);
			 color(9);
			std::cout <<" h"; MSdelay(200); std::cout << "e"; MSdelay(200); std::cout << "l"; MSdelay(200); std::cout << "p"; MSdelay(200); std::cout << "l"; MSdelay(200);std::cout << "e"; MSdelay(200);std::cout << "s"; MSdelay(200);std::cout << "s"<<endl; MSdelay(200);
			color(1);
			std::cout <<"there's nothing that can redeem you now" << std::endl; MSdelay(4000);
			std::cout <<"and since I have nothing to live for anymore" << std::endl; MSdelay(5000);
			std::cout <<"it's my duty to" << std::endl; MSdelay(5000);
			elipses();
			std::cout <<"TAKE YOU OUT!!!" << std::endl; MSdelay(5000);
				//then call here battle here but make her like level 8, or at least with balanced hp and atk also will have to set it to -2
	}

	if (choiceD=="2"){
			
color(1);
          	 std::cout <<"BubbleMomma: Then..." << std::endl; MSdelay(3000);
			 std::cout <<"I suppose" << std::endl; MSdelay(3000);
			 std::cout <<"I forgive you" << std::endl; MSdelay(3000);
			 std::cout <<"*BubbleMomma gives you a long, heavily needed embrace*" << std::endl; MSdelay(8000);
			 color(7);
			 std::cout <<"You talk to"; MSdelay(3000); color(1);std::cout <<"BubbleMomma"; color(7);std::cout <<"for a few hours and after a long night you leave her."<<endl;
			  std::cout <<"You've sworn to help use your powers for good, making sure BubbleMomma is provided for, and that you will clean up all of Mop Mania" << std::endl; MSdelay(3000);

		}



        }
		if (choice == "1"&&c.bubbleQuest==1){
			color(7);
			std::cout<<"*she continues wailing*"<< std::endl; MSdelay(5000);
			std::cout<<"*even louder now*"<< std::endl; MSdelay(3000);
			std::cout<<"You should probably be a little nicer next time"<< std::endl; MSdelay(3000);

		}
	}
    system("pause");
}


dermEvent::dermEvent() {};

void dermEvent::trigger(character& c) {
    if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		Sdelay(2);
		std::cout << "You entered the Dermatology room...";
		MSdelay(3000);
		std::cout << "On the ground you see tan flakes scattered about..." << std::endl;
		MSdelay(6000);
		std::cout << "you continue looking around, seeeing larger and larger clumps of tan..." << std::endl;
		MSdelay(3000);
		std::cout << "in one of the clumps you find a rat with horrible dandruff and decide to yank it out..." << std::endl;
        MSdelay(7000);
        c.acq_deadRat();
		std::cout << "Suddenly you notice something racing past in your peripheral..." << std::endl;
		MSdelay(3000);
		std::cout << "By the time you turn to look, it's already gone..." << std::endl;
		MSdelay(3000);
		std::cout << "Then you notice that the clumps of tan have disappeared...";
		MSdelay(4000);
        clear();
        std::cout << "You turn you head all about and see that now all the clumps have dissapeared..." << std::endl;
		MSdelay(4000);
		std::cout << "You then slowly tilt your head up twoards the ceiling..." << std::endl;
		MSdelay(6000);
        //scary sound effect???
		std::cout << "You see all the tan gobs slowly inching twoards the center of the ceiling...";
        MSdelay(5000);
        std::cout << "All of them, accumulating into one giant mass..." << std::endl;
		MSdelay(5000);
		DotdotTwo();
		color(4);
		MSdelay(100);
		std::cout << "OH NOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A " << std::endl;
        system("Color 0E"); //hope this works for a tan like color??
        std::cout << "Shingle Shannon" << std::endl;
        color(4);
        std::cout << " plops down from the giant tan mass!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle SB;
		ShingleShannon shan(3);
		SB.Battle_Sequence(c, shan);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The Shingle Shannon splatters into pieces about the room..." << std::endl;
		MSdelay(4000);
		std::cout << "The pieces start evaporating away..." << std::endl;
		MSdelay(6000);	
		std::cout << "Before they are even half dissipated..." << std::endl;
		MSdelay(3000);
        std::cout << "Another tan mass plops onto the ground before you..." << std::endl;
		MSdelay(3000);
         std::cout << "This time taking the form of a..." << std::endl;
		MSdelay(3000);
		std::cout << "DEAD-SKIN DILL!!!" << std::endl;
		Sdelay(5);
		color(7);
		std::cout << "Dead-Skin Dill lunged forward!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		BronchitisRex cronk(3);
		rex.Battle_Sequence(c, cronk);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		DotdotTwo();
		std::cout << "The room is finally ready to be cleaned..." << std::endl;
		Sdelay(6);
		clear();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: " << c.get_name() << "..." << std::endl;
		Sdelay(4);
		std::cout << "You have done well..." << std::endl;
		Sdelay(4);
		std::cout << "Continue to search these halls..." << std::endl;
		Sdelay(6);
		clear();
		std::cout << "These halls are controlled by a man named \"The Filthy Bubble\"... ";
		Sdelay(7);
		std::cout << "If you happen to run into this creature..." << std::endl;
		Sdelay(3);
		std::cout << "DO NOT TRUST HIM... ";
		MSdelay(2500);
		std::cout << "He... will destroy you... ";
		MSdelay(2500);
		std::cout << "zzt-";
		MSdelay(1500);
		clear();
		c.acq_deadRat();
		c.acq_deadRat();
		c.acq_healUp();
		c.acq_attUp();
		endMusic();
		system("pause");
		color(7);

		this->isDone = true;
		return;
	}
    system("pause");
}

supplyEvent::supplyEvent() {};

void supplyEvent::trigger(character& c) {
    std::cout << "not finished" << std::endl;
    system("pause");
}


