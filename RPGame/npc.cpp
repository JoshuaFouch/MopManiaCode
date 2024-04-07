#include "character.h"
#include "enemy.h"
#include "utility.h"
#include "npc.h"


NPC::NPC() {}


void NPC::dialogue(character& c)
{
	color(3);
	std::cout << "NPC: What is up ? " << std::endl;
}


//Duster NPC

//Duster::Duster() : NPC() {}

void Duster::dialogue(character& c)
{
	color(3); //the color for an NPC's text will be "aqua" (check utility.cpp for more colors)
	std::cout << "Duster: Hey! Would you like a potion I found on the ground?";
	color(7); std::cout << " [y/n]:";	//change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(3);
		std::cout << "Duster: Alright! Here you go!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(3);
		std::cout << "Duster: Oh well... good luck fighting the enemies then!" << std::endl;
		color(7);
	}
	else
	{
		color(3);
		std::cout << "Duster: Oh well... TAKE IT, YOU WON'T SURVIVE OUT THERE" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your own will!" << std::endl;
	}
}

Latherus::Latherus() : NPC() {}
void Latherus::dialogue(character& c)
{
	color(6); //this dialogue will be yellow
	std::cout << "Latherus: Hey! Would you like a potion I found on the ground?";
	color(7); std::cout << " [y/n]:";	//change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(6);
		std::cout << "Latherus: Alrighto! Here you goooo good adventurer!" << std::endl;
		c.acq_attUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(6);
		std::cout << "Latherus: Oh well... if that is what you desire adventurer" << std::endl;
		color(7);
	}
	else
	{
		color(6);
		std::cout << "Latherus: Nah you are taking this boi! *chucks at yout head* " << std::endl;
		c.acq_attUp();
		color(7);
		std::cout << "You have obtained a potion against your own will!" << std::endl;
	}
}

Scruberty::Scruberty() : NPC() {}

void Scruberty::dialogue(character& c)
{
	color(9);//this dialogue will be Light Blue
	std::cout << "Scruberty: Hello fellow adventurer mop, I've come across a potion, maybe you need it?";
	color(7); std::cout << " [y/n]:";    //change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(9);
		std::cout << "Scruberty: Good choice! I lay upon you a potion good adventurer!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(6);
		std::cout << "Scruberty: Oh well... if that is what you desire adventurer. Farewell..." << std::endl;
		color(7);
	}
	else
	{
		color(6);
		std::cout << "Scruberty: *pulls a machine gun out* You will take it adventurer..." << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You slowly obtain the potion and run with fear!" << std::endl;
	}
}

Fizzletider::Fizzletider() : NPC() {}

void Fizzletider::dialogue(character& c)
{
	color(5);//this dialogue will be Light Blue
	std::cout << "Fizzletider: Heyzzzz, you are looking for an item right ? ? ";
	color(7); std::cout << " [y/n]:";    //change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(5);
		std::cout << "Fizzletider: Well here you gozzz, now show some Energy and get back on your feet!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion, with a little fizz!" << std::endl;
	}
	else if (choice == "n")
	{
		color(5);
		std::cout << "Fizzletider: Oh well... if that is what you desire adventurer. Don't ask me again for that item now..." << std::endl;
		color(7);
	}
	else
	{
		color(5);
		std::cout << "Fizzletider: You want the bomb instead? Yeah , that's what I thought... take it" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your own will... burning with fizzly soap?" << std::endl;
	}
}

Bristlebeard::Bristlebeard() : NPC() {}

void Bristlebeard::dialogue(character& c)
{
	color(8);//this dialogue will be Light Blue
	std::cout << "Bristlebeard: Ahoy mate, seems I found something that might be of good use to you! What do you say?";
	color(7); std::cout << " [y/n]:";    //change back to white for user
	std::string choice;
	std::cin >> choice;

	if (choice == "y")
	{
		color(8);
		std::cout << "Bristlebeard: hhahaa there you go matey, be safe amongst the sea!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "n")
	{
		color(8);
		std::cout << "Bristlebeard: Aw come on mate, you are seriosuly passing it? Your loss!" << std::endl;
		color(7);
	}
	else
	{
		color(8);
		std::cout << "Bristlebeard: Oh well... it's either that or you walk the plank... Oh good you want it." << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your better nature!" << std::endl;
	}
}


//BubblyBoy

//bubbleBoy::bubbleBoy() : NPC() {}

void bubbleBoy::dialogue(character& c)
{
	color(7);
	clear();
	std::cout << "You hear wailing, and decide to walk nearer to the noise" << std::endl;
	color(9); //this dialogue will be light blue, moms should be dark blue
	std::cout << "Bubble Boy: Can anybody hear me?"<<std::endl;
	color(7); std::cout << "1. I can hear you!"<<std::endl;
    std::cout <<           "2. Sorry kid, I've got more important things to do"<<std::endl;	//change back to white for user
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
		std::cout << "1. You've got yourself a deal kiddo!"<<std::endl;
    std::cout <<     "2. Ain't no way ya blabbering bubble!"<<std::endl;	//change back to white for user
    
	
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
	else if(choice==2){
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

DustySwift::DustySwift() : NPC() {}

void DustySwift::dialogue(character& c)
{
	color(8);//this dialogue will be Light Blue
	std::cout << "Dusty Swift: boi oh boi I have some options for you. Whatcha lookin for??" << '\n';
	color(7); std::cout << " Choose an option:";
	int choice;
	do {
		std::cout << "DustySwift: Hey! What do you want to do?" << '\n';
		std::cout << "1. Ask about cleaning tips." << '\n';
		std::cout << "2. Inquire about the nearest inn." << '\n';
		std::cout << "3. You have anything to help me?" << '\n';
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		switch (choice) {
		case 1:
			color(8);
			std::cout << "DustySwift: Ah cleaning tips? Wax on, Wax off..." << '\n';
			break;

		case 2:
			color(8);
			std::cout << " DustySwift:The nearest inn is just down the street, take a left and you'll see it." << '\n';
			break;
		case 3:
			color(8);
			std::cout << "DustySwift: AS a matter of fact, here you go! " << '\n';
			c.acq_defUp();
			color(7);
			std::cout << " you have obtained a defensive potion! Seems a little dusty though..." << '\n';
			break;
		default: 
			std::cout << "DustySwift: I didn't understand you choice" << '\n';
			break;
		}
	} while (choice != 3); //continues dialogue until the player chooses to leave
}

SirMopsworth::SirMopsworth() : NPC() {}

void SirMopsworth::dialogue(character& c)
{
	color(8);//this dialogue will be Light Blue
	std::cout << "SirMopsworth: boi oh boi I have some options for you. Whatcha lookin for??" << '\n';
	color(7); std::cout << " Choose an option:";
	int choice;
	do {
		std::cout << "SirMopsworth: Hello young chap. What would you like?" << '\n';
		std::cout << "1. Ask about cleaning tips." << '\n';
		std::cout << "2. Inquire about the nearest inn." << '\n';
		std::cout << "3. You have anything to help me?" << '\n';
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		switch (choice) {
		case 1:
			color(8);
			std::cout << "SirMopsworth: Ah cleaning tips? always make sure your lab is clean..." << '\n';
			break;

		case 2:
			color(8);
			std::cout << " SirMopsworth:The nearest inn is near here so you will find it." << '\n';
			break;
		case 3:
			color(8);
			std::cout << "SirMopsworth: Ah yes, here is a potion for you " << '\n';
			c.acq_defUp();
			color(7);
			std::cout << " you have obtained a defensive potion! Smells more like wine for some reason..." << '\n';
			break;
		default:
			std::cout << "SirMopsworth: I didn't understand you choice." << '\n';
			break;
		}
	} while (choice != 3); //continues dialogue until the player chooses to leave
}