#include "character.h"
#include "enemy.h"
#include "utility.h"

//BASE CHARACTER DEFINITIONS

character::character()  //default (not used)
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

//exp
int character::get_lvl()
{
    return lvl;
}
int character::get_winNum() 
{
    return winNum;
}

//kills character
bool character::death() 
{
    this->isDead = true;
    return isDead;
}
bool character::alive() 
{
    this->isDead = false;
    return isDead;
}

//for items
int character::get_healUp()
{
    return healUp;
}
int character::get_attUp()
{
    return attUp;
}
int character::get_defUp()
{
    return defUp;
}
int character::get_deadRat()
{
    return deadRat;
}
void character::acq_healUp()
{
    healUp++;
}
void character::acq_attUp()
{
    attUp++;
}
void character::acq_defUp()
{
    defUp++;
}
void character::acq_deadRat()
{
    deadRat++;
}
void character::use_healUp()
{
    hp += 20;
    healUp--;
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
    aName1 = "Broom Boom";
    aName2 = "Sweep Scythe";
    aName3 = "Bristle Blast";
    aName4 = "Dust Destroy";
}

//level up
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
    clear(); //clear console
    color(8);  //gray colored text
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "This character is etc...." << '\n';   //description
    std::cout << std::endl;
    system("pause");
    color(7);
}
void character::describeAttacks()
{
    color(8);  //gray colored text
    std::cout << aName1 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << aName2 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << aName3 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << aName4 << ":\n";
    std::cout << "\tThis attack does this" << std::endl;
    std::cout << std::endl;
    system("pause");
    color(7);
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

//abilities
void character::Attack1(enemy& e)
{
    std::cout << "BONK!!" << std::endl;
    e.damaged(this->att);
}
void character::Attack2(enemy& e)
{
    std::cout << "SQUIRT!!" << std::endl;
    e.damaged(this->att);
}
void character::Attack3(enemy& e)
{
    std::cout << "SPLOOSH!!" << std::endl;
    e.damaged(this->att);
}
void character::Attack4(enemy& e)
{
    std::cout << "EGHAEGOISEVLAEVN!!" << std::endl;
    e.damaged(this->att);
}


void character::Inventory()
{
    color(8);
    std::cout << "Potions: " << this->get_healUp() << std::endl;
    std::cout << "Attack Ups: " << this->get_attUp() << std::endl;
    std::cout << "Defense Ups: " << this->get_defUp() << std::endl;
    std::cout << "Dead Rats: " << this->get_deadRat() << std::endl;
    //will contain a switch to choose which item to use and then use that item
    system("pause");
    color(7);
}


/*BROOMBA DEFINITIONS*/

//constructor
Broomba::Broomba(std::string name, int hp, int att, int def) : character(name, hp, att, def)
{
    set_AttackNames();
}
void Broomba::set_AttackNames()
{
    aName1 = "Vacuum Vortex";
    aName2 = "Turbo Takedown";
    aName3 = "Debris Dash";
    aName4 = "Dust Buster Blitz";
}

void Broomba::displayStats()
{
    clear(); //clear console
    color(8);  //gray colored text
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "A high-energy soldier with a passion for cleaning up messes in a blast." << std::endl;
    std::cout << "This broombastic soldier can turn any cleaning session into a dazzling display of pyrotechnic prowess" << std::endl;
    std::cout << "Broomba roams Mop-topia, leaving sparkling trails of cleanliness and a touch of controlled chaos" << std::endl;
    std::cout << std::endl;
    system("pause");
    color(8);
}
void Broomba::describeAttacks()
{

    color(8);  //gray colored text
    std::cout << get_aName1() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << std::endl;
    system("pause");
    color(7);
}


//abilities

//Vacuum Vortex
void Broomba::Attack1(enemy& e) 
{
    std::cout << "Vacuum Vortex!" << std::endl;
    e.damaged(this->get_att());
} 
//Turbo Takedown
void Broomba::Attack2(enemy& e)   //Turbo Takedown
{
    std::cout << "Turbo Takedown!" << std::endl;
    e.damaged(this->get_att());
}
//Debris Dash
void Broomba::Attack3(enemy& e) 
{
    std::cout << "Debris Dash!" << std::endl;
    e.damaged(this->get_att());
}
//Dust Buster Blitz
void Broomba::Attack4(enemy& e)
{
    std::cout << "Dust Buster Blitz!" << std::endl;
    e.damaged(this->get_att());
}



/*SWIFTERJETWET DEFINITIONS*/

//constructor
SwifterJetWet::SwifterJetWet(std::string name, int hp, int att, int def) : character(name, hp, att, def)
{
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
    clear(); //clear console
    color(8); //gray colored text

    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "\tSwifter JetWet takes cleanliness to new depths! JetWet gained its aquatic powers by the ancient water sage, " << std::endl;
    std::cout << "\tMrs. Clean. Now, armed with the ability to control water, JetWet jets across Mop-topia," << std::endl;
    std::cout << "\tleaving a trail of cleanliness and refreshing splashes. JetWet seeks to mop away the dirt and" << std::endl;
    std::cout << "\tgrime that threaten the land." << std::endl;
    std::cout << std::endl;
    system("pause");
    color(7);
}
void SwifterJetWet::describeAttacks()
{
    color(8);  //gray colored text
    std::cout << get_aName1() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << std::endl;
    system("pause");
    color(7);
}

//abilities

//Mop'n Drop
void SwifterJetWet::Attack1(enemy& e)
{
    std::cout << "Mop'n Drop!" << std::endl;
    e.damaged(this->get_att());
}
//Jittery Jetscream
void SwifterJetWet::Attack2(enemy& e)
{
    std::cout << "Jittery Jetscream!" << std::endl;
    e.damaged(this->get_att());
}
//Foam Frenzy
void SwifterJetWet::Attack3(enemy& e)
{
    std::cout << "Foam Frenzy!" << std::endl;
    e.damaged(this->get_att());
}
//Scrubbing Surge
void SwifterJetWet::Attack4(enemy& e)
{
    std::cout << "Scrubbing Surge!" << std::endl;
    e.damaged(this->get_att());
}


/*BYSONV8 DEFINITIONS*/

//constructor
BysonV8::BysonV8(std::string name, int hp, int att, int def) : character(name, hp, att, def)
{
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
    clear(); //clear console
    color(8);  //gray colored text
    std::cout << "\033[2J\033[1;1H";    //clear console
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Level: " << get_lvl() << '\n';
    std::cout << "HP: " << get_hp() << '\n';
    std::cout << "Attack: " << get_att() << '\n';
    std::cout << "Defense: " << get_def() << '\n';
    std::cout << "\tCrafted, in the legendary Byson Forge, the BysonV8 harnessed the power of air origins, becoming a vacuum marvel." << std::endl;
    std::cout << "\tByson V8 roams Mop-topia, a swirling force that sucks up dirt and leaves behind a breath of pristine air" << std::endl;
    std::cout << "\tprotecting the realm from the chaos of dust and debris." << std::endl;
    std::cout << std::endl;
    system("pause");
    color(7);
}
void BysonV8::describeAttacks()
{
    color(8);  //gray colored text
    std::cout << get_aName1() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ":\n";
    std::cout << "\t" << std::endl;
    std::cout << std::endl;
    system("pause");
    color(7);
}

//abilities

//Filth Flurry
void BysonV8::Attack1(enemy& e)
{
    std::cout << "Filth Flurry!" << std::endl;
    e.damaged(this->get_att());
}
//Turbo Tornado
void BysonV8::Attack2(enemy& e)
{
    std::cout << "Turbo Tornado!" << std::endl;
    e.damaged(this->get_att());
}
//Partical Pulse
void BysonV8::Attack3(enemy& e)
{
    std::cout << "Partical Pulse!" << std::endl;
    e.damaged(this->get_att());
}
//Dust Storm Surge
void BysonV8::Attack4(enemy& e)
{
    std::cout << "Dust Storm Surge!" << std::endl;
    e.damaged(this->get_att());
}