#include "character.h"
//implementations for character class member functions

character::character(std::string name, int hp, int att, int def)
{
    this->name = name;
    this->hp = hp;
    this->att = att;
    this->def = def;
}

std::string character::get_name()
{
    return name;
}

void character::set_name(std::string name)
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

void character::increaseHP(int exp)
{
    hp += exp;
}

void character::increaseAtt(int exp)
{
    att += exp;
}

void character::increaseDef(int exp)
{
    def += exp;
}

void character::displayStats()
{
    std::cout << "*************************************" << '\n';
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "*************************************" << '\n';
    //display the character's statistics using the previously defined getter functions.
}

void character::damaged(int oppAtt)
{
    std::cout << get_name() << " is slapping you menacingly!" << '\n';
    hp -= (oppAtt - (def / 2));
    //simulate character being damaged with a console output message.
}


void character::Attack1(character c, enemy e)
{
    std::cout << "this is attack 1" << std::endl;
    e.damaged(c.att);
}
void character::Attack2(character c, enemy e)
{
    std::cout << "this is attack 2" << std::endl;
    e.damaged(c.att);
}
void character::Attack3(character c, enemy e)
{
    std::cout << "this is attack 3" << std::endl;
    e.damaged(c.att);
}
void character::Attack4(character c, enemy e)
{
    std::cout << "this is attack 4" << std::endl;
    e.damaged(c.att);
}
void character::Inventory(character c)
{
    std::cout << "this is for checking the inventory, and we will use a linked list" << std::endl;
    
}
