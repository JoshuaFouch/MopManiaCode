// character.cpp
#include "character.h"

// Implementations for character class member functions

string character::get_name() 
{
    return name;
}

void character::set_name(string name) 
{
    this->name = name;
}

int character::get_hp() 
{
    return hp;
}

void character::set_hp(int hp) 
{
    this->hp = hp;
}

int character::get_att() 
{
    return att;
}

void character::set_att(int att) 
{
    this->att = att;
}

int character::get_def() 
{
    return def;
}

void character::set_def(int def) 
{
    this->def = def;
}

void character::displayStats() {
    cout << "Name: " << get_name() << '\n';
    cout << "HP: " << get_hp() << '\n';
    cout << "Attack: " << get_att() << '\n';
    cout << "Defense: " << get_def() << '\n';
}

void character::damaged(int oppAtt) {
    cout << get_name() << " is slapping you menacingly!" << '\n';
}
