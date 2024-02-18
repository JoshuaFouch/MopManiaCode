#include "character.h"
#include "enemy.h"
#include <Windows.h>

character::character(std::string name, int hp, int att, int def)
{
    this->name = name;
    this->hp = hp;
    this->maxHp = hp;
    this->att = att;
    this->def = def;
    set_AttackNames();
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

int character::get_level()
{
    return level;
}

//attack getters
std::string character::get_aName1()
{
    return aName1;
}

std::string character::get_aName2()
{
    return aName2;
}

std::string character::get_aName3()
{
    return aName3;
}

std::string character::get_aName4()
{
    return aName4;
}

void character::set_AttackNames()
{
    this->aName1 = "Hit with Broom";
    this->aName2 = "Bleach Spray";
    this->aName3 = "Water Board";
    this->aName4 = "Strangle";
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

void character::expPt()
{
    //reset the hp
    hp = maxHp;
    winNum++;
    if (winNum == ExpReq) {
        level++;
        std::cout << "You Leveled Up! " << std::endl;
        hp += 20;
        att += 10;
        def += 10;
        winNum = 0; //resets the victory counter
        ExpReq += 1;
    }
    else
    {
        std::cout << "You have to win " << (ExpReq - winNum) << " battle(s) until you level up again!" << std::endl;
    }
}

void character::displayStats()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 8);
    std::cout << "\033[2J\033[1;1H";
    //std::cout << "*************************************" << '\n';
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_level() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "This character is etc...." << '\n';   //description
    std::cout << std::endl;
    SetConsoleTextAttribute(h, 7);
    //std::cout << "*************************************" << '\n';
    //display the character's statistics using the previously defined getter functions.
}

void character::damaged(int oppAtt)
{
    if ((oppAtt - (def / 2)) < 0) {
        hp--;
        return;
    }
    hp -= (oppAtt - (def / 2));
    //simulate character being damaged with a console output message.
}


void character::Attack1(character& c, enemy& e)
{
    std::cout << "BONK!!" << std::endl;
    e.damaged(c.att);
}
void character::Attack2(character& c, enemy& e)
{
    std::cout << "SQUIRT!!" << std::endl;
    e.damaged(c.att);
}
void character::Attack3(character& c, enemy& e)
{
    std::cout << "SPLOOSH!!" << std::endl;
    e.damaged(c.att);
}
void character::Attack4(character& c, enemy& e)
{
    std::cout << "EGHAEGOISEVLAEVN!!" << std::endl;
    e.damaged(c.att);
}
void character::Inventory(character& c)
{
    std::cout << "this is for checking the inventory, and we will use a linked list" << std::endl;
    
}


