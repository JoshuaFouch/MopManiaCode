// character.cpp
//this file provides the implementations for the member functions of the character class.

#include "character.h"
//include the corresponding header file to ensure consistency and access to class declarations.

//implementations for character class member functions

string character::get_name()
{
    return name;
}

void character::set_name(string name)
{
    this->name = name;
    //implement the getter and setter functions for the 'name' member variable.
}

int character::get_hp()
{
    return hp;
}

void character::set_hp(int hp)
{
    this->hp = hp;
    //   implement the getter and setter functions for the 'hp' member variable.
}

int character::get_att()
{
    return att;
}

void character::set_att(int att)
{
    this->att = att;
    //  implement the getter and setter functions for the 'att' member variable.
}

int character::get_def()
{
    return def;
}

void character::set_def(int def)
{
    this->def = def;
    //implement the getter and setter functions for the 'def' member variable.
}

void character::displayStats()
{
    cout << "*************************************"<<'\n';
    cout << "Name: " << get_name() << '\n';
    cout << "HP: " << get_hp() << '\n';
    cout << "Attack: " << get_att() << '\n';
    cout << "Defense: " << get_def() << '\n';
    cout << "*************************************"<<'\n';
    //display the character's statistics using the previously defined getter functions.
}

void character::damaged(int oppAtt)
{
    cout << get_name() << " is slapping you menacingly!" << '\n';
    //simulate character being damaged with a console output message.
}
