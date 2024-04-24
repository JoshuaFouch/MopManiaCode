#include "event.h"
#include "enemy.h"
#include "character.h"
#include "battle.h"
#include "npc.h"

//RustyBucket Shop Menu
/*
Rusty has like 50 kids, and once you die, Rusty will send his kids to get you when you die, however, 
they will steal some money from you to keep up with the rent and keep the Rusty Bucket open.

	Following items within the shop menu:
	====================================
		1. Shop
		2. Talk Mrs. Clean
		3. Talk to Bubble Mamma
		4. Get a Drink
	====================================

*/


RustyBucketEvent::RustyBucketEvent() {};

void RustyBucketEvent::trigger(character& c)
{
	endMusic();
	playMusic("Mattari.wav");
	Sdelay(2);
	std::cout << "You entered the Rusty Bucket...." << std::endl;
	MSdelay(2000);
	std::cout << "It doesn't seem very lively in here..." << std::endl;
	MSdelay(3000);
	std::cout << "There seems to be a few places you can stop by..." << std::endl;
	MSdelay(3000);

	clear();
	while (true) {
		std::string choice;

		std::cout << "What would you like to do?\n" << std::endl;

		std::cout << ""; color(8); std::cout << "[1]: "; color(7); std::cout << "Rusty's Shop" << std::endl;
		std::cout << ""; color(8); std::cout << "[2]: "; color(7); std::cout << "Talk to Mrs. Clean" << std::endl;
		std::cout << ""; color(8); std::cout << "[3]: "; color(7); std::cout << "Talk to Bubble Momma" << std::endl;
		std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Get a Drink" << std::endl;
		std::cout << ""; color(8); std::cout << "[5]: "; color(7); std::cout << "Exit" << std::endl;
	
		std::cin >> choice;

		if (choice == "1") //Rusty's Shop
		{
			//potions (att_up, def_up, heal_potion)
			//trade dead rats - > soaptokens
			clear();
			color(7);
			std::cout << "You walked over to the shop to see what kind of items they may have..." << std::endl;
			MSdelay(4000);
			color(8); std::cout << "Ah adventurer, welcome to my shop..." << std::endl;
			MSdelay(2000);
			std::cout << "It is currently under renovation..." << std::endl;
			MSdelay(3000);
			std::cout << "So I can't sell ya anything, sorry pal...\n" << std::endl;

			// game shop menu implementation
	
			system("pause");
			color(7);
			clear();
			continue;
		}
		else if (choice == "2") //Talk to Mrs. Clean
		{
			MrsClean MrsClean;
			MrsClean.dialogue(c);
			clear();
			color(7);
			continue;
		}
		else if (choice == "3") //Talk to Bubble Momma + Bubble Boy Event Encounter??
		{
			bubbleMama bub;
			bub.dialogue(c);
			color(7);
			system("pause");
			clear();
			continue;
		}
		else if (choice == "4") //Drink Stuff
		{
			std::string choice;
			
			clear();
			color(8); std::cout << "Rusty: Oh sure! I can grab ya a hearty drink! What can I get you?" << std::endl;
			MSdelay(2000);
			color(7);
			std::cout << "=================================================" << std::endl;
			std::cout << ""; color(8); std::cout << "[1]: "; color(9); std::cout << "Barnacle Berry Blast" << std::endl;
			std::cout << ""; color(8); std::cout << "[2]: "; color(2); std::cout << "Melon Grime" << std::endl;
			std::cout << ""; color(8); std::cout << "[3]: "; color(8); std::cout << "MudWeiser" << std::endl;
			std::cout << ""; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
			std::cout << "==================================================" << std::endl;

			std::cin >> choice;
			if (choice == "1") //Barnacle Berry Blast
			{
				clear();
				std::cout << "You grab the barnacle berry blast from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious berry blast!" << std::endl;
				//paid like 25 soap tokens
				color(7);
				system("pause");
				clear();
			}
			else if (choice == "2") 
			{
				clear();
				std::cout << "You grab the melon grime from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious melon grime!" << std::endl;
				//paid like 25 soap tokens
				color(7);
				system("pause");
				clear();
			}
			else if (choice == "3") 
			{
				clear();
				std::cout << "You grab the mudweiser from the shop..." << std::endl;
				MSdelay(2000);
				std::cout << "It's a delicious mudweiser!" << std::endl;
				MSdelay(3000);
				Dotdot();
				std::cout << "You start feeling whoozy..." << std::endl;
				MSdelay(4000);
				std::cout << "It's a delicious again" << std::endl;
				//paid like 30 soaptokens
				color(7);
				system("pause");
				clear();
			}
			else if (choice == "5")
			{
				std::cout << "You have exited" << std::endl;
				break;
				return;
			}
			clear();
			continue;
		}
		else if (choice == "5")
		{
			break;
			return;
		}
		else {
			clear();
			continue;
		}
	}
}

lungEvent::lungEvent() {};

void lungEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		Sdelay(2);
		std::cout << "You entered the lung care room...";
		MSdelay(3000);
		std::cout << "You can barely see with the lights flickering on and off..." << std::endl;
		MSdelay(6000);
		std::cout << "You felt a pair of eyes gazing upon you from..." << std::endl;
		MSdelay(3000);
		std::cout << "somewhere..." << std::endl;
		MSdelay(7000);
		std::cout << "You noticed a sign pointing to an electrical generator..." << std::endl;
		MSdelay(3000);
		std::cout << "As you walk towards the room to where the generator is you felt the presence of something big approaching..." << std::endl;
		MSdelay(3000);
		std::cout << "You find yourself in complete darkness...";
		MSdelay(3000);
		DotdotTwo();
		color(4);
		MSdelay(100);
		std::cout << "OH NOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Bronchitis Rex lunged at you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle rex;
		BronchitisRex bronch(3);
		rex.Battle_Sequence(c, bronch);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "You turned on the generator..." << std::endl;
		MSdelay(4000);
		std::cout << "There is now light..." << std::endl;
		MSdelay(6000);	
		std::cout << "You felt a strong presence still lingering in the room..." << std::endl;
		MSdelay(3000);
		DotdotTwo();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(5);
		color(7);
		std::cout << "A Bronchitis Rex lunged from above!" << std::endl;
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

}

pharmEvent::pharmEvent() {};

void pharmEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		//playMusic();
		Sdelay(2);
		std::cout << "You entered the pharmacy...";
		MSdelay(3000);
		std::cout << "You can barely see with the lights flickering on and off..." << std::endl;
		MSdelay(4000);
		std::cout << "The corners of the walls are lined with slime and mucus." << std::endl;
		MSdelay(5000);
		std::cout << "you notice as you kept going down..." << std::endl;
		MSdelay(3000);
		std::cout << "You noticed more mucus build-ups are thicker..." << std::endl;
		MSdelay(4000);
		std::cout << "As you started cleaning the mucus..." << std::endl;
		MSdelay(5000);
		Dotdot();
		color(4);
		MSdelay(100);
		std::cout << "Ain't no way..." << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Muscus Maw dropped in from above!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle mucus;
		MucusMaw muc(1);
		mucus.Battle_Sequence(c, muc);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "You noticed the mucus starting to disapate..." << std::endl;
		MSdelay(3000);
		std::cout << "Now you continue to suck up the mucus..." << std::endl;
		MSdelay(3000);
		std::cout << "You notice the mucus starting to come together..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Musucs Maw leaps towards you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		MucusMaw mucu(5);
		mucus.Battle_Sequence(c, mucu);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Dotdot();
		std::cout << "The room is finally cleared of mucus.." << std::endl;
		Sdelay(3);
		clear();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: Ah yes this disgusting room is finally clean... " << c.get_name() << "..." << std::endl;
		Sdelay(4);
		std::cout << "Those Mucus Maws had a mind of their own..." << std::endl;
		Sdelay(3);
		std::cout << "Anyways"; ellipsis(); std::cout << std::endl;
		Sdelay(4);
		clear();
		std::cout << "continue on your journey... ";
		Sdelay(3);
		std::cout << "one day..." << std::endl;
		Sdelay(3);
		std::cout << "you... ";
		MSdelay(2500);
		std::cout << "will... ";
		MSdelay(2500);
		std::cout << "fin-";
		MSdelay(1500);
		system("pause");
		clear();
		c.acq_deadRat();
		c.acq_deadRat();
		c.acq_defUp();
		c.acq_healUp();
		system("pause");
		endMusic();

		this->isDone = true;
		return;
	}

}

/*labortory event*/
labEvent::labEvent() {};

void labEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		//playMusic();
		Sdelay(2);
		std::cout << "You busted down the doors to the labortory ";
		MSdelay(2000);
		std::cout << "A tray of scalps and knivies are neatly sorted" << std::endl;
		MSdelay(3000);
		std::cout << "You feel pins and needles all over your body..." << std::endl;
		MSdelay(4000);
		std::cout << "You look down and notice a needle stuck in onto you...";
		MSdelay(5000);
		Dotdot();
		color(4);
		std::cout << "OH SHOOT!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A NeedleNed is attached to you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle needle;
		NeedleNed ne(5);
		needle.Battle_Sequence(c, ne);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "You felt more pins needles..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "SHOOT!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "Another Needle Ned appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		NeedleNed nee(7);
		needle.Battle_Sequence(c, nee);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The needles seem to be gone..." << std::endl;
		MSdelay(3000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Powerful NeedleNed appeared to face you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		NeedleNed need(8);
		needle.Battle_Sequence(c, need);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Dotdot();
		std::cout << "The presence of needles are gonna!" << std::endl;
		Sdelay(3);
		clear();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: Oh I never like those needles very much..." << c.get_name() << "..." << std::endl;
		Sdelay(4);
		std::cout << "You have rid the room of violent needles..." << std::endl;
		Sdelay(2);
		std::cout << "It smells... not like needles..." << std::endl;
		Sdelay(4);
		clear();
		std::cout << "What... ";
		Sdelay(3);
		std::cout << "What are needles suppose to smell like?"; ellipsis(); std::cout << std::endl;
		MSdelay(2500);
		std::cout << "\nwell good job regardless!";
		MSdelay(2000);
		system("pause");
		clear();
		c.acq_deadRat();
		c.acq_deadRat();
		c.acq_healUp();
		c.acq_attUp();
		system("pause");
		endMusic();

		this->isDone = true;
		return;
	}

}

operatEvent::operatEvent() {};

void operatEvent::trigger(character& c)
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else {
		endMusic();
		//playMusic();
		Sdelay(2);
		std::cout << "You rolled into the operating room... ";
		MSdelay(2000);
		std::cout << "There are surgical tables flipped over and destroyed..." << std::endl;
		MSdelay(4000);
		std::cout << "You find kinves with fresh... ketchup..." << std::endl;
		MSdelay(5000);
		std::cout << "You decide to clean the room as soon as possible...";
		MSdelay(6000);
		Dotdot();
		color(4);
		std::cout << "OH SHOOT!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Stainiac lunges at you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		battle stain;
		Stainiac st(2);
		stain.Battle_Sequence(c, st);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "Seems like there is a presence lingering around still..." << std::endl;
		MSdelay(5000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "GREAT HEAVENS!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "Another Stainiac appeared from nowhere!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		Stainiac sta(4);
		stain.Battle_Sequence(c, sta);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Sdelay(2);
		std::cout << "The room is almost cleaned of debris..." << std::endl;
		MSdelay(6000);
		Dotdot();
		color(4);
		std::cout << "OHH...";
		MSdelay(200);
		std::cout << "NOOO!!!" << std::endl;
		Sdelay(2);
		color(7);
		std::cout << "A Powerful Stainiac appeared to face you!" << std::endl;
		playSFX("battle!.wav");
		Sdelay(2);
		Stainiac stai(7);
		stain.Battle_Sequence(c, stai);
		if (c.getLife() == 0) {
			return;	//if the character is dead
		}
		Dotdot();
		std::cout << "The presence enemies are gonna!" << std::endl;
		Sdelay(3);
		clear();
		playMusic("void.wav");
		color(6);
		std::cout << "Janitorius: Oh this place looks much better now " << c.get_name() << "..." << std::endl;
		Sdelay(4);
		std::cout << "You are doing very well..." << std::endl;
		Sdelay(2);
		std::cout << "Did you try the ketchup?..." << std::endl;
		Sdelay(4);
		clear();
		std::cout << "What... ";
		Sdelay(3);
		std::cout << "Oh I mean't clean up the ketchup?"; ellipsis(); std::cout << std::endl;
		MSdelay(2500);
		std::cout << "well get to cleaning more!\n";
		MSdelay(1000);
		system("pause");
		clear();
		c.acq_deadRat();
		c.acq_deadRat();
		c.acq_healUp();
		c.acq_attUp();
		system("pause");
		endMusic();

		this->isDone = true;
		return;
	}
}


mailboxEvent::mailboxEvent() {};

void mailboxEvent::trigger(character& c) 
{
	if (this->isDone == true) {
		return;	//if character has already triggered the event in this node
	}
	else if (this->checked == 0)
	{
		std::cout << "You checked your mailbox..." << std::endl;
		MSdelay(4000);
		std::cout << "You got a letter in your mailbox!" << std::endl;
		MSdelay(2000);
		std::cout << "It says..." << std::endl;
		MSdelay(2000);
		std::cout << "\tDear " << c.get_name() << std::endl;
		MSdelay(4000);
		std::cout << "\t\tI hope your journey is going well." << std::endl;
		MSdelay(5000);
		std::cout << "\t\tYou are doing a great job and you deserve a little break." << std::endl;
		MSdelay(4000);
		std::cout << "\tSincerely," << std::endl;
		MSdelay(3000);
		color(6);
		std::cout << "\t\tJanitorius" << std::endl;
		MSdelay(4000);
		c.acq_healUp();
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 1)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		std::cout << "You got a letter in your mailbox!" << std::endl;
		MSdelay(4000);
		std::cout << "\tDear " << c.get_name() << std::endl;
		MSdelay(4000);
		std::cout << "\t\tThis is Latherus, your neighbor.." << std::endl;
		MSdelay(4000);
		std::cout << "\t\tI've heard that you have been venturing into Le' Hospitale.." << std::endl;
		MSdelay(4000);
		std::cout << "\t\tWhatever you do always be aware of your surroundings.." << std::endl;
		MSdelay(4000);
		std::cout << "\t\tI have a gift for you that might help you, I hope it helps!" << std::endl;
		MSdelay(4000);
		std::cout << "\tSincerely," << std::endl;
		MSdelay(3000);
		std::cout << "\tLatherus" << std::endl;
		c.acq_cleaningTips();
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 2)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		std::cout << "You got a letter in your mailbox! :O" << std::endl;
		MSdelay(4000);
		std::cout << "\tDear " << c.get_name() << std::endl;
		MSdelay(4000);
		std::cout << "\t\tThis is Sir Mopsworth, your other neighbor.." << std::endl;
		MSdelay(4000);
		std::cout << "\t\tLatherus has brought up news of you venturing into le hospitale.." << std::endl;
		MSdelay(4000);
		std::cout << "\t\tI hope you are careful around those parts, fellow.." << std::endl;
		MSdelay(4000);
		std::cout << "\t\tI wish you strength in your endeavors!" << std::endl;
		MSdelay(4000);
		std::cout << "\tSincerely," << std::endl;
		MSdelay(3000);
		std::cout << "\tSir Mopsworth" << std::endl;
		c.acq_attUp();
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 3)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		MSdelay(4000);
		std::cout << "Oh what's this doing here?" << std::endl;
		MSdelay(4000);
		c.acq_deadRat();
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 4)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		MSdelay(4000);
		std::cout << "Oh what's this?" << std::endl;
		MSdelay(4000);
		std::cout << "Your reflection..." << std::endl;
		MSdelay(4000);
		std::cout << "Maybe it'll be useful" << std::endl;
		MSdelay(4000);
		c.acq_Mirror();
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 5)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		std::cout << "You saw it covered in mucus...." << std::endl;
		MSdelay(3000);
		std::cout << "A Mucus Maw attacks!" << std::endl;
		MSdelay(3000);
		battle mucuss;
		MucusMaw mucus(5);
		mucuss.Battle_Sequence(c, mucus);
		if (c.getLife() == 0) {
			return;    //if the character is dead
		}
		Dotdot();
		std::cout << "You don't see anything else in your mail box..." << std::endl;
		MSdelay(2000);
		Dotdot();
		std::cout << "Oh?" << std::endl;
		MSdelay(3000);
		std::cout << "You got a box covered in mucus and decide to open it..." << std::endl;
		MSdelay(3000);
		std::cout << "Oh WOW! " << std::endl;
		c.acq_Whendex();
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 6)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		MSdelay(3000);
		std::cout << "Nothing is here buddy..." << std::endl;
		MSdelay(3000);
		std::cout << "Go do other stuff." << std::endl;
		MSdelay(2000);
		checked++;
	}
	else if (this->checked == 7)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		MSdelay(4000);
		std::cout << "I will literally raise your taxes because you keep checking your mailbox..." << std::endl;
		MSdelay(4500);
		checked++;
	}
	else if (this->checked == 8)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox"; ellipsis(); std::cout << std::endl;
		MSdelay(2000);
		std::cout << "Dude stop checking it, there seriously isn't anything here..." << std::endl;
		MSdelay(3000);
		checked++;
	}
	else if (this->checked == 9)
	{
		Sdelay(2);
		std::cout << "You checked your mailbox..." << std::endl;
		ellipsis();
		MSdelay(3000);
		std::cout << "You want something to be there?..." << std::endl;
		MSdelay(2500);
		std::cout << "Fine..." << std::endl;
		MSdelay(3000);
		std::cout << "Check it again and you'll have a surprise!" << std::endl;
		MSdelay(4500);
		checked++;
	}
	else if (this->checked == 10)
	{
		playMusic("Mattari.wav");
		Sdelay(2);
		std::cout << "You checked your mailbox...";
		ellipsis();
		MSdelay(3000);
		std::cout << "\nHello my friend it is I";
		MSdelay(3000);
		playMusic("vine-boom.wav");
		color(5);
		std::cout << "\nTHE GRIME CLEANER!" << std::endl;
		MSdelay(3500);
		std::cout << "You really kept checking the dang mail box..." << std::endl;
		MSdelay(4000);
		playMusic("MattariCore.wav");
		std::cout << "So I"; ellipsis(); std::cout << " will now"; ellipsis(); std::cout << " BATTLE YOU!\n";
		Sdelay(1);
		for (int i = 0; i < 12; i++) {
			std::cout << "GABABABAHAHAH!!!";
			MSdelay(200);
		}
		clear();
		std::cout << "you will die. teehee ;)"; ellipsis();
		MSdelay(2000);
		endMusic();
		musicBattle bat;
		BronchitisRex reap(15);
		reap.set_name("Grime Cleaner");
		bat.Battle_Sequence("MattariCore.wav", c, reap);
		if (c.getLife() == 0) {
			return;    //if the character is dead
		}
		endMusic();
		playMusic("background.wav");
		DotdotTwo();
		std::cout << "You don't see anything else in your mail box"; ellipsis();
		MSdelay(500);
		std::cout << "\nOh?" << std::endl;
		MSdelay(3000);
		std::cout << "You got a box covered in mucus and decide to open it..." << std::endl;
		MSdelay(4000);
		std::cout << "Oh WOW! " << std::endl;
		c.acq_Whendex();
		c.acq_Whendex();
		MSdelay(2000);
		checked++;
	}
	else
	{
		ellipsis();
		std::cout << "You checked your mailbox..." << std::endl;
		MSdelay(4000);
		std::cout << "There's nothing in there... stop checking actually" << std::endl;
		MSdelay(4000);
		this->isDone = true;
	}
	system("pause");
	return;
}