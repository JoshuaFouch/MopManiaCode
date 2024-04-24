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