#include "SprayMop.h"
#include "character.h"

//coonstructor implementation
SprayMop::SprayMop(string name, int hp, int att, int def)//now carries a name, hp, att and def
{
	set_name(name);//now you can use just 'name' (same thing with the rest in the arguements for the others)
	set_hp(hp);
	set_att(att);
	set_def(def);

	
}
//trying to return the variables, but having trouble atm
string SprayMop::get_name()
{
    return character::get_name();
}

void SprayMop::set_name(std::string name)
{
    character::set_name(name);
}

int SprayMop::get_hp()
{
    return character::get_hp();
}
/*
void SprayMop::set_hp(int hp)
{
    return character::set_hp(hp);
}
*/
int SprayMop::get_att()
{
    return 0;
}

void SprayMop::set_att(int att)
{
    character::set_att(att);
}

int SprayMop::get_def()
{
    return 0;
}
/*
void SprayMop::set_def(int def)
{
    character::set_def(def);
}
*/

void SprayMop::displayStats()
{//just outputs the name, hp, att, and def of the character SprayMop
    cout << "Name: " << get_name() << '\n';
    cout << "HP: " << get_hp() << '\n';
    cout << "Attack: " << get_att() << '\n';
    cout << "Defense: " << get_def() << '\n';

}

void SprayMop::damaged(int oppAtt)
{
    cout << get_name() << " is slapping you menancingly!" << '\n';
}



void SprayMop::runSprayMopDemo()
{
    //below is the test code for SprayMop character (no character selection thing yet, but just to know if it can output something
	SprayMop sprayMop("SprayMop", 75, 50, 10);//very fragile mop, but swift and hits hard

		//intial stats display
		cout << "Initial Stats for " << sprayMop.get_name() << ":" << '\n';
		sprayMop.displayStats();

		//simulate attack from oppent with attack val 15
		int oppAttack = 15;
		cout << "\nSimulating an attack from an opponent with attack value " << oppAttack << ":" << '\n';
		sprayMop.damaged(oppAttack);

		cout << "\nUpdated Stats for " << sprayMop.get_name() << ":" << '\n';

		//test attack function
		sprayMop.attack();
}
