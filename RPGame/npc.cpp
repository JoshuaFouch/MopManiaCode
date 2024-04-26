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

bool NPC::alreadyTalkedto() {
	if (this->isDone = 1) {
		return true;	//plays a different dialogue
	}
	return false;
}

void NPC::finished() {
	this->isDone = 1;	//isDone equals true
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
	clear();
	std::string choice;
	color(6); //this dialogue will be yellow
	std::cout << "|--Latherus--|" << std::endl;
	std::cout << "Hey! Would you like a potion I found on the ground?" << std::endl;
	std::cout << "|--------------------------|" << std::endl;
	std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Accept |" << std::endl;
	std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Decline|" << std::endl;
	std::cout << "|-------------------------|" << std::endl;
	color(8); std::cout << " [1 or 2]:";	//change back to gray
	std::cin >> choice;

	if (choice == "1")
	{
		color(6);
		std::cout << "Latherus: Alrighto! Here you goooo good adventurer!" << std::endl;
		c.acq_attUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "2")
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
	clear();
	std::string choice;
	color(6); //this dialogue will be yellow
	std::cout << "|--Latherus--|" << std::endl;
	std::cout << "Adventurer! Please take this potion on you journey." << std::endl;
	std::cout << "|--------------------------|" << std::endl;
	std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Accept |" << std::endl;
	std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Decline|" << std::endl;
	std::cout << "|-------------------------|" << std::endl;
	color(8); std::cout << " [1 or 2]:";	//change back to gray
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
	clear();
	std::string choice;
	color(5);//this dialogue will be Light Blue
	std::cout << "|--Fizzletider--|" << std::endl;
	std::cout << "Fizzletider: Heyzzzz, you are looking for an item right ??? ";
	std::cout << "|--------------------------|" << std::endl;
	std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Accept? |" << std::endl;
	std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Decline |" << std::endl;
	color(5); std::cout << "|-------------------------|" << std::endl;
	color(7); std::cout << " [1 or 2]:";    //change back to white for user

	std::cin >> choice;

	if (choice == "1")
	{
		color(5);
		std::cout << "Fizzletider: Well here you gozzz, now show some Energy and get back on your feet!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion, with a little fizz!" << std::endl;
	}
	else if (choice == "2")
	{
		color(5);
		std::cout << "Fizzletider: Oh well... if that is what you desire adventurer. Don't ask me again for that item now..." << std::endl;
		color(7);
	}
	else
	{
		color(5);
		std::cout << "Fizzletider: You want the bomb instead? Yeah, that's what I thought... take it" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion against your own will... burning with fizzly soap?" << std::endl;
	}
}

Bristlebeard::Bristlebeard() : NPC() {}

void Bristlebeard::dialogue(character& c)
{
	clear();
	std::string choice;
	color(8);//this dialogue will be Light Blue
	std::cout << "|--Bristlebeard--|" << std::endl;
	std::cout << "Bristlebeard: Ahoy mate, seems I found something that might be of good use to you! What do you say?" << std::endl;
	std::cout << "|--------------------------|" << std::endl;
	std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Accept? |" << std::endl;
	std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Decline |" << std::endl;
	std::cout << "|-------------------------|" << std::endl;
	color(7); std::cout << " [1 or 2]:";    //change back to white for user

	std::cin >> choice;

	if (choice == "1")
	{
		color(8);
		std::cout << "Bristlebeard: hhahaa there you go matey, be safe amongst the sea!" << std::endl;
		c.acq_healUp();
		color(7);
		std::cout << "You have obtained a potion!" << std::endl;
	}
	else if (choice == "2")
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




// color and time delays
MrsClean::MrsClean() : NPC() {}

void MrsClean::dialogue(character& c)
{
	clear();
	std::string choice;
	color(3);
	std::cout << "Mrs. Clean: Ah a new cleaning supply around these parts..." << std::endl;
	MSdelay(2000);
	std::cout << "I have some stories for you..." << std::endl;
	MSdelay(2000);
	std::cout << "It may be of some help for you along your journey..." << std::endl;
	MSdelay(2000);
	std::cout << "Would you like to here some?" << std::endl;
	std::cout << ""; color(8); std::cout << "[1]: "; color(7); std::cout << "Putrid Python" << std::endl;
	std::cout << ""; color(8); std::cout << "[2]: "; color(7); std::cout << "Story of Le' Hospitale" << std::endl;	//janitorius is the same person as grime reaper, no one knows who janitorius is except u
	std::cout << ""; color(8); std::cout << "[3]: "; color(7); std::cout << "Grime Reaper" << std::endl;
	std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Drink Recommendation" << std::endl;
	std::cout << ""; color(8); std::cout << "[5]: "; color(7); std::cout << "How is your day?" << std::endl;
	std::cout << ""; color(8); std::cout << "[6]: "; color(7); std::cout << "Exit" << std::endl;

	std::cin >> choice;

	if (choice == "1") //putrid python dialogue
	{
		clear();
		color(3);
		std::cout << "Ah yes, rumors of this"; color(5); std::cout << " Putrid Python..." << std::endl;
		color(3);
		MSdelay(3000);
		std::cout << "this creature was supposedly exposed to some high levels of grime that affected its material make up..." << std::endl;
		MSdelay(4000);
		std::cout << "the last I heard of it was when some adventurers discover it in the basement floor..." << std::endl;
		MSdelay(2600);
		std::cout << "Apparently he loves to "; color(5); std::cout << "eat dead rats"; ellipsis(); std::cout << "\n";
		MSdelay(2000);
		color(3);
		std::cout << "If you let him eat "; color(5); std::cout << "too many rats, "; color(3); MSdelay(400); std::cout << "He will go insane...\n";
		MSdelay(1200);
		std::cout << "and he will turn into a rat/python chimera!!" << std::endl;
		MSdelay(1500);
		std::cout << "so don't get into too much trouble if you do find it...\n" << std::endl;
		MSdelay(2000);
		color(7);
		system("pause");
		clear();
	}
	else if (choice == "2") //le' hospitale dialogue
	{
		clear();
		color(3);
		std::cout << "This place used to be our home in Mop Mania..." << std::endl;
		MSdelay(3000);
		std::cout << "Until "; color(6); MSdelay(500); std::cout << "The Grime Reaper "; color(3); MSdelay(400); std::cout << "banished us from it..." << std::endl;
		MSdelay(4500);
		std::cout << "Many Mop Manians will say he is evil and wants the worst for us"; ellipsis(); std::cout << "\n";
		std::cout << "However... I raised him, "; Sdelay(2);
		std::cout << "and "; color(6); Sdelay(1); std::cout << "he would never wish something terrible for his people"; ellipsis(); color(3);
		MSdelay(2300);
		std::cout << "\nAnyways, our home is filled with smelly"; ellipsis(); std::cout << " stupid"; ellipsis(); std::cout << " swines!" << std::endl;
		MSdelay(2300);
		std::cout << "Be careful around those parts..." << std::endl;
		MSdelay(2100);
		std::cout << "If you do end up going into Le' Hospitale"; ellipsis();
		std::cout << "find my young apprentice,"; MSdelay(400); std::cout << " The Grime Reaper...\n" << std::endl;
		Sdelay(2);
		color(7);
		system("pause");
		clear();
	}
	else if (choice == "3") //grime reaper dialogue
	{
		clear();
		color(3);
		std::cout << "Ah the "; color(6); std::cout << "Grime Reaper..." << std::endl;
		MSdelay(2000);
		color(3);
		std::cout << "My old apprentice... it has been about twenty long mop-years since I last trained him" << std::endl;
		MSdelay(2000);
		std::cout << "As a young boy, he ate a large amount of moppychlorines... " << std::endl;
		MSdelay(2000);
		clear();
		std::cout << "Because of this, he has always been cunning and excelled in his grime combat training..." << std::endl;
		MSdelay(3000);
		std::cout << "His weapon of choice was always the bleached-tip scythe, being able to eliminate 99.99% of grime!" << std::endl;
		MSdelay(4000);
		clear();
		std::cout << "Well anyway, ever since the Great Banishment of '87, no one around here has taken too kindly about him..." << std::endl;
		MSdelay(3000);
		std::cout << "However, I know he is a good man with a kind heart." << std::endl;
		MSdelay(3000);
		clear();
		std::cout << "And I am sure he had good reasons for the decision he made, to banish us from our home..." << std::endl;
		MSdelay(5000);
		clear();
		std::cout << "Hmmm.... your fighting skills seem very similar to that of his..." << std::endl;
		MSdelay(3000);
		std::cout << "You don't happen....";
		MSdelay(3000);
		std::cout << " to know him??... do you?" << std::endl;
		MSdelay(6000);
		clear();
		std::cout << "Ahhh forget it..." << std::endl;
		MSdelay(3000);
		std::cout << "*to herself*"; color(6); std::cout << " He couldn't be Grimey's chosen one..." << std::endl;
		MSdelay(2000);
		std::cout << "noo...no..." << std::endl;
		MSdelay(3000);
		Dotdot();
		std::cout << "I need another drink"; ellipsis(); std::cout << " RUSTY I'LL TAKE ANOTHER MUDWEISER!!\n" << std::endl;
		color(7);
		system("pause");
		clear();
	}
	else if (choice == "4") // drink stuff
	{
		clear();
		color(3);
		std::cout << "Ah, nothing too special really, but here's what they have: " << std::endl;
		MSdelay(2000);
		color(9); std::cout << "Barnacle Berry Blast" << std::endl;
		MSdelay(2000);
		color(2); std::cout << "Melon Grime" << std::endl;
		MSdelay(2000);
		color(3); std::cout << "and my personal favorite..."; color(8); std::cout << " MudWeiser" << std::endl;
		MSdelay(2000);
		color(3); std::cout << "Say, I'll get you a drink, maybe then you'd want to hear some more stories!" << std::endl;
		color(7);
		system("pause");
		clear();
	}
	else if (choice == "5")// how is your day?
	{
		clear();
		color(3);
		std::cout << "OH my day?" << std::endl;
		MSdelay(2000);
		std::cout << "Same as the day before and the day before that"; ellipsis(); std::cout << std::endl;
		MSdelay(3000);
		std::cout << "Honestly I don't keep track anymore since everyday it feels like the same day everyday...." << std::endl;
		MSdelay(2000);
		std::cout << "You are very sweet... Thank you for asking!" << std::endl;
		color(7);
		system("pause");
		clear();
	}
	else if (choice == "6") 
	{
		clear();
		color(7);
		std::cout << "You have exited\n" << std::endl;
		// exit to other options in the Rusty Bucket
		color(7);
		system("pause");
		clear();
	}
}

/*DustySwift::DustySwift() : NPC() {}

void DustySwift::dialogue(character& c)
{
	clear();
	std::string choice;
	color(9);//this dialogue will be 
	std::cout << "|--Dusty Swift--|" << std::endl;
	std::cout << "boi oh boi I have some options for you. Whatcha lookin for??" << '\n';
	color(7); std::cout << " Choose an option:";
	
	std::cin >> choice;
	do {
		std::cout << "|--------------------------|" << std::endl;
		std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Ask about cleaning tips." << '\n';
		std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Inquire about the nearest inn." << '\n';
		std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "You have anything to help me?" << '\n';
		color(8); std::cout << "|--------------------------|" << std::endl;
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
	color(5);//this dialogue will be Light Blue
	std::cout << "|--Sir Mopsworth--|" << std::endl;
	std::cout << "Hello young chap. What would you like?" << '\n';
	color(7); std::cout << " Choose an option:";
	std::string choice;
	do {
		color(8); std::cout << "|--------------------------|" << std::endl;
		std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Ask about cleaning tips." << '\n';
		std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Inquire about the nearest inn." << '\n';
		std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "You have anything to help me?" << '\n';
		color(8); std::cout << "|--------------------------|" << std::endl;

		std::cout << "Enter your choice: ";
		std::cin >> choice;
		switch (choice) {
		case 1:
			color(5);
			std::cout << "SirMopsworth: Ah cleaning tips? always make sure your lab is clean..." << '\n';
			break;

		case 2:
			color(5);
			std::cout << " SirMopsworth:The nearest inn is near here so you will find it." << '\n';
			break;
		case 3:
			color(5);
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
}*/


