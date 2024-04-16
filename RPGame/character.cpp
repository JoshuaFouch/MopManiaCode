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
    this->maxAtt = 10;
    this->def = 10;
    this->maxDef = 10;
    set_AttackNames();
}
character::character(std::string name, int hp, int att, int def)
{
    this->name = name;
    this->hp = hp;
    this->maxHp = hp;
    this->att = att;
    this->maxAtt = att;
    this->def = def;
    this->maxDef = def;
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

int character::getLife() {
    return life;
}
int character::getExit() {
    return exit;
}
int character::getEnd() {
    return end;
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
void character::use_attUp()
{
    att += 10;
    attUp--;
}
void character::use_defUp()
{
    def += 10;
    defUp--;
}
void character::use_deadRat()
{
    //actually does something maybe like gives you free money?
    deadRat--;
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
void character::resetStats()
{
    hp = maxHp;
    att = maxAtt;
    def = maxDef;
}
void character::expPt()
{
    //reset the stats
    winNum++;
    if (winNum == ExpReq) { //if the "amount of wins" counter equals the counter for leveling up
        lvl++;
        std::cout << "You Leveled Up! " << std::endl;
        maxHp += 10;
        maxAtt += 5;
        maxDef += 5;
        winNum = 0; //resets the victory counter
        ExpReq += 1;
        resetStats();
    }
    else
    {
        std::cout << "You have to win " << (ExpReq - winNum) << " battle(s) until you level up again!" << std::endl;
        resetStats();
    }
}

void character::winBattleMoney() {
   // std::cout << "You won " << (maxHp * lvl) << " soaptokens!!" << std::endl;
    //this->SoapTokens = (maxHp * lvl);
    std::random_device rd;
  std::mt19937 gen(rd());
  // Define the range of numbers
  std::uniform_int_distribution<int> distribution(60, 75);//rand num between 60 and 75

  // Generate a random number
  int random = distribution(gen);

  std::cout << "You won " << (random * this->lvl) << " soaptokens!!" << std::endl;
    this->SoapTokens = (random * this->lvl);
}

void character::displayStats()
{
    color(7);
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
    color(7);
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
        MSdelay(500);
        std::cout << "Opponent dealt 1 damage to you!!" << std::endl;
        MSdelay(500);
        return;
    }
    hp -= (oppAtt - (def / 2));
    std::cout << "Opponent dealt " << (oppAtt - (def / 2)) << " to you!!" << std::endl;
    Sdelay(2);
}

//abilities
void character::Attack1(enemy& e)
{
    color(2);
    std::cout << "\tBONK!!" << std::endl;
    e.damaged(this->att);
    color(7);
}
void character::Attack2(enemy& e)
{
    color(2);
    std::cout << "\tSQUIRT!!" << std::endl;
    e.damaged(this->att);
    color(7);
}
void character::Attack3(enemy& e)
{
    color(2);
    std::cout << "\tSPLOOSH!!" << std::endl;
    e.damaged(this->att);
    color(7);
}
void character::Attack4(enemy& e)
{
    color(2);
    std::cout << "\tEGHAEGOISEVLAEVN!!" << std::endl;
    e.damaged(this->att);
    color(7);
}

bool character::noItems()
{
    if (healUp == 0 && attUp == 0 && defUp == 0 && deadRat == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void character::useInventory()
{
    bool kill = false;
    while (kill == false)
    {
        color(7);
        std::cout << "What do you want to use?" << std::endl;
        std::cout << "1. Potions: " << this->get_healUp() << std::endl;
        std::cout << "2. Attack Ups: " << this->get_attUp() << std::endl;
        std::cout << "3. Defense Ups: " << this->get_defUp() << std::endl;
        std::cout << "4. Dead Rats: " << this->get_deadRat() << std::endl;
        int x;
        std::cin >> x;
        switch (x) {
        case 1:
            if (this->healUp == 0)
            {
                std::cout << "You have no potions!" << std::endl;
                continue;
            }
            else
            {
                use_healUp();
                color(2);
                std::cout << "You healed up by 20 points!" << std::endl;
                color(7);
                MSdelay(2000);
                kill = true;
                break;
            }
        case 2:
            if (this->attUp == 0)
            {
                std::cout << "You have no attack ups!" << std::endl;
                continue;
            }
            else
            {
                use_attUp();
                color(2);
                std::cout << "Your rose your attack by 10 points!" << std::endl;
                color(7);
                MSdelay(2000);
                kill = true;
                break;
            }
        case 3:
            if (this->defUp == 0)
            {
                std::cout << "You have no defense ups!" << std::endl;
                continue;
            }
            else
            {
                use_defUp();
                color(2);
                std::cout << "Your rose your defense by 10 points!" << std::endl;
                color(7);
                MSdelay(2000);
                kill = true;
                break;
            }
        case 4:
            if (this->deadRat == 0)
            {
                std::cout << "You have no dead rats!" << std::endl;
                continue;
            }
            else
            {
                use_deadRat();
                color(2);
                std::cout << "You threw a dead rat at the enemy!";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << "\nIt did nothing at all." << std::endl;
                color(7);
                MSdelay(2000);
                kill = true;
                break;
            }
        default:
            std::cout << "Invalid input." << std::endl;
            continue;
        } 
    }
    color(7);
}
void character::checkInventory()
{
    color(7);
    std::cout << "Potions: " << this->get_healUp() << std::endl;
    std::cout << "Attack Ups: " << this->get_attUp() << std::endl;
    std::cout << "Defense Ups: " << this->get_defUp() << std::endl;
    std::cout << "Dead Rats: " << this->get_deadRat() << std::endl;
    system("pause");
    color(7);
}

//for quests
void character::bubAdvance()
{
    bubbleQuest++;
}

void character::die() {
    this->life = 0; //dead
}

void character::exitingGame() {
    this->exit = 1;
}

void character::gameCompleted() {
    this->end = 1;
}

void character::addMoney(int value) {
    this->SoapTokens += value;
}
void character::takeMoney(int value) {
    this->SoapTokens -= value;
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
    color(2);
    std::cout << "\tVacuum Vortex!" << std::endl;
    e.damaged(this->get_att());
    color(7);
} 
//Turbo Takedown
void Broomba::Attack2(enemy& e)   //Turbo Takedown
{
    color(2);
    std::cout << "\tTurbo Takedown!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Debris Dash
void Broomba::Attack3(enemy& e) 
{
    color(2);
    std::cout << "\tDebris Dash!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Dust Buster Blitz
void Broomba::Attack4(enemy& e)
{
    color(2);
    std::cout << "\tDust Buster Blitz!" << std::endl;
    e.damaged(this->get_att());
    color(7);
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
    color(2);
    std::cout << "\tMop'n Drop!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Jittery Jetscream
void SwifterJetWet::Attack2(enemy& e)
{
    color(2);
    std::cout << "\tJittery Jetscream!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Foam Frenzy
void SwifterJetWet::Attack3(enemy& e)
{
    color(2);
    std::cout << "\tFoam Frenzy!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Scrubbing Surge
void SwifterJetWet::Attack4(enemy& e)
{
    color(2);
    std::cout << "\tScrubbing Surge!" << std::endl;
    e.damaged(this->get_att());
    color(7);
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
    color(8);  //gray colored text
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
    color(2);
    //PlaySound(TEXT("metalPipe.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
    std::cout << "\tFilth Flurry!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Turbo Tornado
void BysonV8::Attack2(enemy& e)
{
    color(2);
    std::cout << "\tTurbo Tornado!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Partical Pulse
void BysonV8::Attack3(enemy& e)
{
    color(2);
    std::cout << "\tPartical Pulse!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}
//Dust Storm Surge
void BysonV8::Attack4(enemy& e)
{
    color(2);
    std::cout << "\tDust Storm Surge!" << std::endl;
    e.damaged(this->get_att());
    color(7);
}