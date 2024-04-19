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

		while(gold>0){

cout<<"\nThis is your total remaining gold:\n"<<gold<<"g";
cout<<"\n\n\tType the corresponding number for the catagory of wares you'd like to browse\n";
cout<<"1. Armor\n";
cout<<"2. Weapons\n";
cout<<"3. Spells\n";
cout<<"4. Potions\n";
cout<<"5. Exit shop\n";
int choice;
cin>>choice;
if (choice==5){
    cout<<"Thank you come again";
    break;}

 if(choice !=1 && choice !=2 && choice !=3 && choice !=4){
    cout<<"you bum, thats not even an option! pick a number between 1 and 4\n";}
switch(choice)

{
    case 1:
    cout<<"\n\tType the corresponding number of the armor you would like to purchase\n";
    cout<<"1. Thunderhelm(25g)\n";
    cout<<"2. Arch Mage's Robes(50G)\n";
    cout<<"3. Hover Boots(100G)\n";
    cout<<"4. Diamond leggings(500G)\n";
    int choiceA;
    cin>>choiceA;
        if(choiceA !=1 && choiceA !=2 && choiceA !=3 && choiceA !=4){
    cout<<"you bum, thats not even an option! pick a number between 1 and 4";}
    switch(choiceA){
    case 1:
    cout<<"thanks for purchasing the Thunderhelm for 25 gold\n";
     gold=TWEN(gold, price);
      break;
    case 2:
    cout<<"thanks for purchasing the Arch Mage's Robes for 50 gold\n";
     gold=FIFT(gold, price);
      break;
    case 3:
    cout<<"thanks for purchasing the Hover Boots for 100 gold\n";
     gold=HUND(gold, price);
      break;
    case 4:
    cout<<"thanks for purchasing the Diamond Leggings for 500 gold\n";
    gold=FHUND(gold, price);
      break;

    }
    return main();
    break;

    case 2:
    cout<<"\n\tType the corresponding number of the weapon you would like to purchase\n";
    cout<<"1. Death Note(25g)\n";
    cout<<"2. Raygun(50G)\n";
    cout<<"3. Monado(100G)\n";
    cout<<"4. Stanley's Bucket(500G)\n";
    int choiceB;
    cin>>choiceB;
     if(choiceB !=1 && choiceB !=2 && choiceB !=3 && choiceB !=4){
    cout<<"you bum, thats not even an option! pick a number between 1 and 4";}
    switch(choiceB){
   
    case 1:
    cout<<"thanks for purchasing the Death Note for 25 gold\n";
        gold=TWEN(gold, price);
      break;
    case 2:
    cout<<"thanks for purchasing the Raygun for 50 gold\n";
        gold=FIFT(gold, price);
      break;
    case 3:
    cout<<"thanks for purchasing the Monado for 100 gold\n";
        gold=HUND(gold, price);
      break;
    case 4:
    cout<<"thanks for purchasing Stanley's Bucket for 500 gold\n";
        gold=FHUND(gold, price);
      break;
    }
     return main();
    break;

 case 3:
    cout<<"\n\tType the corresponding number of the Spell Book you would like to purchase\n";
    cout<<"1. Spell Book of Electro-telekinis(25g)\n";
    cout<<"2. Spell Book of Extreme Flatuation(50g)\n";
    cout<<"3. Spell Book of Instant Time Stop(100G)\n";
    cout<<"4. Spell Book of Object oriented programming(500g)\n";
    int choiceC;
    cin>>choiceC;
     if(choiceC !=1 && choiceC !=2 && choiceC !=3 && choiceC !=4){
    cout<<"you bum, thats not even an option! pick a number between 1 and 4";}
    switch(choiceC){
   
    case 1:
    cout<<"thanks for purchasing the Spell Book of Electro-telekinis for 25 gold\n";
        gold=TWEN(gold, price);
      break;
    case 2:
    cout<<"thanks for purchasing the Spell Book of Extreme Flatuation for 50 gold\n";
        gold=FIFT(gold, price);
      break;
    case 3:
    cout<<"thanks for purchasing the Spell Book of Instant Time Stop for 100 gold\n";
        gold=HUND(gold, price);
      break;
    case 4:
    cout<<"thanks for purchasing the Spell Book of Ojbcect oriented programming for 500 gold\n";
        gold=FHUND(gold, price);
      break;
    }
    return main();
    break;

     case 4:
    cout<<"\n\tType the corresponding number of the Potion you would you like to purchase\n";
    cout<<"1. Potion of Instant Death(25g)\n";
    cout<<"2. Juggernog (50g)\n";
    cout<<"3. Felix Felicis (100g)\n";
    cout<<"4. Ohio Water Potion (500g)\n";
    int choiceD;
    cin>>choiceD;
     if(choiceD !=1 && choiceD !=2 && choiceD !=3 && choiceD !=4){
    cout<<"you bum, thats not even an option! pick a number between 1 and 4";}
    switch(choiceD){
   
    case 1:
    cout<<"thanks for purchasing a Potion of Instant Death for 25 gold(kills anyone who touches the vial)\n";
        gold=TWEN(gold, price);
      break;
    case 2:
    cout<<"thanks for purchasing a bottle of Juggernog for 50 gold\n";
        gold=FIFT(gold, price);
      break;
    case 3:
    cout<<"thanks for purchasing a vial of Felix Felicis for 100 gold\n";
        gold=HUND(gold, price);
      break;
    case 4:
    cout<<"thanks for purchasing a botte of Ohio Water for 500 gold\n";
        gold=FHUND(gold, price);
      break;
    }
    return main();
    break;

}
}
if (gold==0){
    cout<<"get outta here ya broke boi!!!";
    return 0;}
return 0;}

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