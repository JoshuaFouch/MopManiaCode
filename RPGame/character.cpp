#include "character.h"
#include "enemy.h"
#include <Windows.h>

//BASE CHARACTER DEFINITIONS

character::character()
{
    this->name = "character";
    this->hp = 100;
    this->maxHp = 100;
    this->att = 10;
    this->def = 10;
    set_AttackNames();
}
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
int character::get_maxhp()
{
    return maxHp;
}
void character::set_hp(int hp)
{
    this->hp = hp;

}
void character::set_maxHp(int maxHp)
{
    this->maxHp = maxHp;
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
int character::get_lvl()
{
    return lvl;
}
int character::get_winNum() 
{
    return winNum;
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
    this->aName1 = "Broom Boom";
    this->aName2 = "Sweep Scythe";
    this->aName3 = "Bristle Blast";
    this->aName4 = "Dust Destroy";
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
    if (winNum == ExpReq) { //if the "amount of wins" counter equals the counter for leveling up
        lvl++;
        std::cout << "You Leveled Up! " << std::endl;
        hp += 10;
        att += 5;
        def += 5;
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
    std::cout << "\033[2J\033[1;1H"; //clear console
    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << "\033[2J\033[1;1H";    //clear console
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "This character is etc...." << '\n';   //description
    std::cout << std::endl;
    system("pause");
    SetConsoleTextAttribute(h, 7);
}
void character::describeAttacks()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << aName1 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << aName2 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << aName3 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << aName4 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << std::endl;
    SetConsoleTextAttribute(h, 7);
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


//BROOMBA DEFINITIONS

//constructor
Broomba::Broomba(std::string name, int hp, int att, int def) 
{
    this->name = name;
    this->hp = hp;
    this->maxHp = hp;
    this->att = att;
    this->def = def;
    set_AttackNames();
}
void Broomba::set_AttackNames()
{
    this->aName1 = "Vacuum Vortex";
    this->aName2 = "Turbo Takedown";
    this->aName3 = "Debris Dash";
    this->aName4 = "Dust Buster Blitz";
}

void Broomba::displayStats()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "\033[2J\033[1;1H"; //clear console
    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << "\033[2J\033[1;1H";    //clear console
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "Broomba, the explosive custodian, is a high-energy character with a passion for cleaning up messes in a blast! This bombastic mop character has a head filled with explosive surprises that can turn any cleaning session into a dazzling display of pyrotechnic prowess.\n Broomba's lore traces back to the mystical laboratories of Mop-topia, where an eccentric inventor accidentally merged a mop with a collection of experimental cleaning bombs. Now, Broomba roams Moptopia, leaving sparkling trails of cleanliness and a touch of controlled chaos. Just remember, when Broomba say\n It's time to clean up you might want to take cover – cleanliness is about to go out with a bang!" << '\n';   //description
    std::cout << std::endl;
    system("pause");
    SetConsoleTextAttribute(h, 7);
}
void Broomba::describeAttacks()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << get_aName1() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << std::endl;
    SetConsoleTextAttribute(h, 7);
}


//abilities
void Broomba::Attack1(character& c, enemy& e)
{
    std::cout << "Vacuum Vortex!" << std::endl;
    e.damaged(c.get_att());
}
void Broomba::Attack2(character& c, enemy& e)
{
    std::cout << "Turbo Takedown!" << std::endl;
    e.damaged(c.get_att());
}
void Broomba::Attack3(character& c, enemy& e)
{
    std::cout << "Debris Dash!" << std::endl;
    e.damaged(c.get_att());
}
void Broomba::Attack4(character& c, enemy& e)
{
    std::cout << "Dust Buster Blitz!" << std::endl;
    e.damaged(c.get_att());
}



//SWIFTERJETWET DEFINITIONS

//constructor
SwifterJetWet::SwifterJetWet(std::string name, int hp, int att, int def)
{
    this->name = name;
    this->hp = hp;
    this->maxHp = hp;
    this->att = att;
    this->def = def;
    set_AttackNames();
}
void SwifterJetWet::set_AttackNames()
{
    this->aName1 = "Mop'n Drop";
    this->aName2 = "Jittery Jetstream";
    this->aName3 = "Foam Frenzy";
    this->aName4 = "Scrubbing Surge";
}

void SwifterJetWet::displayStats()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "\033[2J\033[1;1H"; //clear console
    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << "\033[2J\033[1;1H";    //clear console
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "swifterjetwet..." << '\n';   //description
    std::cout << std::endl;
    system("pause");
    SetConsoleTextAttribute(h, 7);
}
void SwifterJetWet::describeAttacks()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << get_aName1() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << std::endl;
    SetConsoleTextAttribute(h, 7);
}

//abilities
void SwifterJetWet::Attack1(character& c, enemy& e)
{
    std::cout << "Mop'n Drop!" << std::endl;
    e.damaged(c.get_att());
}
void SwifterJetWet::Attack2(character& c, enemy& e)
{
    std::cout << "Jittery Jetscream!" << std::endl;
    e.damaged(c.get_att());
}
void SwifterJetWet::Attack3(character& c, enemy& e)
{
    std::cout << "Foam Frenzy!" << std::endl;
    e.damaged(c.get_att());
}
void SwifterJetWet::Attack4(character& c, enemy& e)
{
    std::cout << "Scrubbing Surge!" << std::endl;
    e.damaged(c.get_att());
}


//BYSONV8 DEFINITIONS

//constructor
BysonV8::BysonV8(std::string name, int hp, int att, int def)
{
    this->name = name;
    this->hp = hp;
    this->maxHp = hp;
    this->att = att;
    this->def = def;
    set_AttackNames();
}

void BysonV8::set_AttackNames()
{
    this->aName1 = "Filth Flurry";
    this->aName2 = "Turbo Tornado";
    this->aName3 = "Particle Pulse";
    this->aName4 = "Dust Storm Surge";
}

void BysonV8::displayStats()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "\033[2J\033[1;1H"; //clear console
    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << "\033[2J\033[1;1H";    //clear console
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "This character is etc...." << '\n';   //description
    std::cout << std::endl;
    system("pause");
    SetConsoleTextAttribute(h, 7);
}
void BysonV8::describeAttacks()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 8);  //gray colored text
    std::cout << get_aName1() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << std::endl;
    SetConsoleTextAttribute(h, 7);
}

//abilities
void BysonV8::Attack1(character& c, enemy& e)
{
    std::cout << "Filth Flurry!" << std::endl;
    e.damaged(c.get_att());
}
void BysonV8::Attack2(character& c, enemy& e)
{
    std::cout << "Turbo Tornado!" << std::endl;
    e.damaged(c.get_att());
}
void BysonV8::Attack3(character& c, enemy& e)
{
    std::cout << "Partical Pulse!" << std::endl;
    e.damaged(c.get_att());
}
void BysonV8::Attack4(character& c, enemy& e)
{
    std::cout << "Dust Storm Surge!" << std::endl;
    e.damaged(c.get_att());
}