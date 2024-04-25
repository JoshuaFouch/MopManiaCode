#include "character.h"
#include "enemy.h"
#include "utility.h"
#include <random>

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
int character::getRun() {
    return run;
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
int character::get_slipperySoap() {
    return slipperySoap;
}
int character::get_cleaningTips() {
    return cleaningTips;
}
int character::get_Whendex() {
    return Whendex;
}
int character::get_Mirror() {
    return Mirror;
}
int character::getTokens() {
    return SoapTokens;
}
int character::getPath() {
    return cleanPath;
}
void character::acq_healUp()
{
    color(7);
    std::cout << "*you acquired a "; color(2); std::cout << "Heal-up!*" << std::endl;
    color(7);
    healUp++;
}
void character::acq_attUp()
{
    color(7);
    std::cout << "*you acquired an "; color(2); std::cout << "Attack-up!*" << std::endl;
    color(7);
    attUp++;
}
void character::acq_defUp()
{
    color(7);
    std::cout << "*you acquired a "; color(2); std::cout << "Defense-up!*" << std::endl;
    color(7);
    defUp++;
}
void character::acq_deadRat()
{
    color(7);
    std::cout << "*you acquired a "; color(2); std::cout << "Dead rat!*" << std::endl;
    color(7);
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
void character::use_slipperySoap() {
    this->run = 1;
    slipperySoap--;
}
void character::resetRun() {
    this->run = 0;
}
void character::use_cleaningTips(enemy& e) {
    clear();
    color(4);
    std::cout << "Enemy hp: " << e.get_hp() << std::endl;
    std::cout << "Enemy attack: " << e.get_att() << std::endl;
    std::cout << "Enemy defense: " << e.get_def() << std::endl;
    color(7);
    system("pause");
    cleaningTips--;
}
void character::use_Whendex() {
    clear();
    color(2);
    std::cout << "All max stats went up by 5 points!!!" << std::endl;
    increaseHP(5);
    increaseAtt(5);
    increaseDef(5);
    color(7);
    system("pause");
    Whendex--;

}
void character::use_Mirror() {
    clear();
    std::cout << "This is what you look like: (hideous right?) " << std::endl;
    if (name == "Broomba") {
        int counter = 0;
        while (counter != 10) {
            counter++;
            MSdelay(200);
            std::cout << " _____ \n";
            std::cout << "(_____)\n";
            clear();
            MSdelay(200);
            std::cout << " _____ \n";
            std::cout << "(_***_)\n";
            clear();
            MSdelay(200);
            std::cout << "  _____ \n";
            std::cout << " (_***_)\n";
            clear();
            MSdelay(200);
            std::cout << "   _____ \n";
            std::cout << "  (_***_)\n";
            clear();
            MSdelay(200);
            std::cout << "    _____ \n";
            std::cout << "   (_***_)\n";
            clear();
            MSdelay(200);
            std::cout << "   _____ \n";
            std::cout << "  (_***_)\n";
            clear();
            MSdelay(200);
            std::cout << "  _____ \n";
            std::cout << " (_***_)\n";
            clear();
            MSdelay(200);
            std::cout << " _____ \n";
            std::cout << "(_***_)\n";
            clear();
            MSdelay(200);
            std::cout << " __ \\_ \n";
            std::cout << "(_#%#_)\n";
            clear();
            MSdelay(200);
            std::cout << " __%\\_ \n";
            std::cout << "(__%#_)\n";
            clear();
            MSdelay(200);
            std::cout << " __%\\_ \n";
            std::cout << "(__#__)\n";
            clear();
            MSdelay(200);
            std::cout << " __%\\_ \n";
            std::cout << "(_____)\n";
            clear();
            MSdelay(200);
            std::cout << " __ \\_ \n";
            std::cout << "(_____)\n";
            clear();
            MSdelay(200);
            std::cout << " _____ \n";
            std::cout << "(_____)\n";
            clear();
            MSdelay(200);
        }
    }
    else if (name == "JetWet") {
        int counter = 0;
        while (counter != 10) {
            counter++;
            MSdelay(200);
            std::cout << " ____|=\n";
            std::cout << "     |=\n";
            clear();
            MSdelay(200);
            std::cout << " ___\\=\n";
            std::cout << "     \\=\n";
            clear();
            MSdelay(200);
            std::cout << " ____|=\n";
            std::cout << "     |=\n";
            MSdelay(200);
            clear();
            std::cout << " ___/=\n";
            std::cout << "   /=\n";
            MSdelay(200);
            clear();
        }
    }
    else if (name == "BysonV8") {
        int counter = 0;
        while (counter != 10) {
            counter++;
            clear();
            MSdelay(200);
            std::cout << " ,___\n";
            std::cout << "<*___|7\n";
            clear();
            MSdelay(400);
            std::cout << " ,___\n";
            std::cout << "<**__|7\n";
            clear();
            MSdelay(400);
            std::cout << " ,___\n";
            std::cout << "<***_|7\n";
            MSdelay(400);
            clear();
            std::cout << " ,___\n";
            std::cout << "<****|7\n";
            MSdelay(400);
            clear();
            counter++;
            MSdelay(200);
            std::cout << "  \\__\n";
            std::cout << "<****|7\n";
            clear();
            MSdelay(200);
            std::cout << "  \\__\n";
            std::cout << "<***_|7\n";
            clear();
            MSdelay(200);
            std::cout << "  \\__\n";
            std::cout << "<**__|7\n";
            clear();
            MSdelay(200);
            std::cout << "  \\__\n";
            std::cout << "<*___|7\n";
            MSdelay(200);
            clear();
            std::cout << "  \\__\n";
            std::cout << "<____|7\n";
            MSdelay(200);
            clear();
            std::cout << " ,___\n";
            std::cout << "<____|7\n";
            MSdelay(200);
            clear();
        }
    }
    else {
        
    }
    system("pause");
}
void character::acq_slipperySoap() {
    color(7);
    std::cout << "*you acquired a "; color(2); std::cout << "Slippery Soap!*" << std::endl;
    color(7);
    slipperySoap++;
}
void character::acq_cleaningTips() {
    color(7);
    std::cout << "*you acquired a "; color(2); std::cout << "Cleaning Tip!*" << std::endl;
    color(7);
    cleaningTips++;
}
void character::acq_Whendex() {
    color(7);
    std::cout << "*you acquired a "; color(2); std::cout << "Whendex!*" << std::endl;
    color(7);
    Whendex++;
}
void character::acq_Mirror() {
    color(7);
    std::cout << "*you acquired the "; color(2); std::cout << "Mirror!*" << std::endl;
    color(7);
    Mirror++;
}
void character::acq_cleanPath() {
    color(7);
    std::cout << "*you acquired the "; color(2); std::cout << "Clean path!*" << std::endl;
    color(7);
    cleanPath = 1;
}
void character::Rat_Sale(int num) {

    deadRat -= num;
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

//healing
void character::increaseHP(int exp)
{
    maxHp += exp;
}
void character::increaseAtt(int exp)
{
    maxAtt += exp;
}
void character::increaseDef(int exp)
{
    maxDef += exp;
}
void character::resetStats()
{
    hp = maxHp;
    att = maxAtt;
    def = maxDef;
    life = 1;
}
void character::expPt()
{
    //reset the stats
    winNum++;
    color(2);
    std::cout << "YOU WON!!!" << std::endl;
    color(7);
    if (winNum == ExpReq) { //if the "amount of wins" counter equals the counter for leveling up
        lvl++;
        color(6);
        std::cout << "You Leveled Up! You are now level: " << lvl << std::endl;
        color(7);
        maxHp += 10;
        maxAtt += 5;
        maxDef += 5;
        if ((lvl % 3) == 0) {
            ExpReq += 1;
        }
        winNum = 0;
        resetStats();
    }
    else
    {
        std::cout << "You have to win " << (ExpReq - winNum) << " battle(s) until you level up again!" << std::endl;
        resetStats();
    }
}

void character::winBattleMoney() {
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
    std::cout << "Opponent dealt " << (oppAtt - (def / 2)) << " damage to you!!" << std::endl;
    MSdelay(500);
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
    if (healUp == 0 && attUp == 0 && defUp == 0 && deadRat == 0 && slipperySoap == 0 && cleaningTips == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void character::useInventory(enemy& e)
{
    bool kill = false;
    while (kill == false)
    {
        color(7);
        std::cout << "What do you want to use?" << std::endl;
        std::cout << "|========================|" << std::endl;
        color(8); std::cout << "[1]: "; color(7); std::cout << "Potions: " << this->get_healUp() << std::endl;
        color(8); std::cout << "[2]: "; color(7); std::cout << "Attack Ups: " << this->get_attUp() << std::endl;
        color(8); std::cout << "[3]: "; color(7); std::cout << "Defense Ups: " << this->get_defUp() << std::endl;
        color(8); std::cout << "[4]: "; color(7); std::cout << "Dead Rats: " << this->get_deadRat() << std::endl;
        color(8); std::cout << "[5]: "; color(7); std::cout << "Slippery Soap: " << this->get_slipperySoap() << std::endl;
        color(8); std::cout << "[6]: "; color(7); std::cout << "Cleaning Tips: " << this->get_cleaningTips() << std::endl;
        std::cout << "|========================|" << std::endl;
        std::string x;
        std::cin >> x;
        if (x == "1") {
            if (this->healUp == 0)
            {
                clear();
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
        }
        else if (x == "2") {
            if (this->attUp == 0)
            {
                clear();
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
        }
        else if (x == "3") {
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
        }
        else if (x == "4") {
            if (this->deadRat == 0)
            {
                clear();
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
                clear();
                kill = true;
                break;
            }
        }
        else if (x == "5") {
            if (this->slipperySoap == 0) {
                clear();
                std::cout << "You have no slippery soaps!!" << std::endl;
                continue;
            }
            else {
                use_slipperySoap();
                kill = true;
                break;
            }
        }
        else if (x == "6") {
            if (this->cleaningTips == 0) {
                clear();
                std::cout << "You have no cleaning tips!!" << std::endl;
                continue;
            }
            else {
                use_cleaningTips(e);
                kill = true;
                break;
            }
        }
        else {
            std::cout << "Invalid input!" << std::endl;
            continue;
        }
    }
    color(7);
}
void character::checkInventory()
{
    bool kill = false;
    while (kill == false)
    {
        color(7);
        std::cout << "What do you want to use?" << std::endl;
        std::cout << "|========================|" << std::endl;
        color(8); std::cout << "[1]: "; color(7); std::cout << "Potions: " << this->get_healUp();
        color(4); std::cout << "\t\t\tHP: " << maxHp << std::endl;
        color(8); std::cout << "[2]: "; color(7); std::cout << "Attack Ups: " << this->get_attUp();
        color(4); std::cout << "\t\tAttack: " << maxAtt << std::endl;
        color(8); std::cout << "[3]: "; color(7); std::cout << "Defense Ups: " << this->get_defUp();
        color(4); std::cout << "\t\tDefense: " << maxDef << std::endl;
        color(8); std::cout << "[4]: "; color(7); std::cout << "Dead Rats: " << this->get_deadRat() << std::endl;
        color(8); std::cout << "[5]: "; color(7); std::cout << "Slippery Soap: " << this->get_slipperySoap() << std::endl;
        color(8); std::cout << "[6]: "; color(7); std::cout << "Cleaning Tips: " << this->get_cleaningTips() << std::endl;
        color(8); std::cout << "[7]: "; color(7); std::cout << "Whendex: " << this->get_Whendex() << std::endl;   //increases each stats max by one
        color(8); std::cout << "[8]: "; color(7); std::cout << "Mirror: " << this->get_Mirror() << std::endl;    //displays unused animations
        color(8); std::cout << "[9]: "; color(7); std::cout << "SoapTokens: " << this->getTokens() << std::endl;
        color(8); std::cout << "[10]: "; color(7); std::cout << "LEAVE " << std::endl;
        std::cout << "|========================|" << std::endl;
        std::string x;
        std::cin >> x;
        if (x == "1") {
            if (this->healUp == 0)
            {
                clear();
                std::cout << "You have no potions!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else
            {
                clear();
                std::cout << "You can't use this here..." << std::endl;
                system("pause");
                clear();
                continue;
            }
        }
        else if (x == "2") {
            if (this->attUp == 0)
            {
                clear();
                std::cout << "You have no attack ups!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else
            {
                clear();
                std::cout << "You can't use this here..." << std::endl;
                system("pause");
                clear();
                continue;
            }
        }
        else if (x == "3") {
            if (this->defUp == 0)
            {
                clear();
                std::cout << "You have no defense ups!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else
            {
                clear();
                std::cout << "You can't use this here..." << std::endl;
                system("pause");
                clear();
                continue;
            }
        }
        else if (x == "4") {
            if (this->deadRat == 0)
            {
                clear();
                std::cout << "You have no dead rats!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else
            {
                clear();
                std::cout << "Uhh... please don't use that, it might be valuable for some reason";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << "\nYeah I know.... its weird..." << std::endl;
                system("pause");
                continue;
            }
        }
        else if (x == "5") {
            if (this->slipperySoap == 0) {
                clear();
                std::cout << "You have no slippery soaps!!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else {
                clear();
                std::cout << "Why are you running";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << ".";
                MSdelay(700);
                std::cout << "\nWhy are you running... (get it, its from that on meme...)" << std::endl;
                system("pause");
                clear();
                continue;
            }
        }
        else if (x == "6") {
            if (this->cleaningTips == 0) {
                clear();
                std::cout << "You have no cleaning tips!!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else {
                clear();
                std::cout << "You can't use this here..." << std::endl;
                system("pause");
                clear();
                continue;
            }
        }
        else if (x == "7") {
            if (this->Whendex == 0) {
                clear();
                std::cout << "You have no Whendex!!!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else {
                clear();
                use_Whendex();
                clear();
                continue;
            }
        }
        else if (x == "8") {
            if (this->Mirror == 0) {
                clear();
                std::cout << "You have no Mirrors!!!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else {
                clear();
                use_Mirror();
                clear();
                continue;
            }
        }
        else if (x == "9") {
            if (this->SoapTokens == 0) {
                clear();
                std::cout << "YOU BROKE... HAHA!" << std::endl;
                system("pause");
                clear();
                continue;
            }
            else {
                clear();
                std::cout << "You have: " << getTokens() << " Soap Tokens!" << std::endl;
                system("pause");
                clear();
                continue;
            }
        }
        else if (x == "10") {
            kill = true;
            break;
        }
        else {
            clear();
            std::cout << "Invalid input." << std::endl;
            continue;
        }
    }
    color(7);
}

//for quests
int character::getBub() {
    return bubbleQuest;
}
void character::bubKill() {
    bubbleQuest = -1;
}
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
    color(7);
    std::cout << "You receieved " << value << " soaptokens!!!" << std::endl;
    playSFX("coins!.wav");
    this->SoapTokens += value;
    system("pause");
}
void character::takeMoney(int value) {
    color(7);
    std::cout << "You lost " << value << " soaptokens!!!" << std::endl;
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
    std::cout << get_aName1() << ": Creates a swirling vortex of suction, pulling anything into its cleaning chamber and draining their energy.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ": Charges forward at the breakneck speed, ramming into anything with incredible force, leavin them dazed and vulnerable.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ": Dashes around the battlefield, collecting debris and launching it at opponents with precise aim.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ": Unleashes a rapid barrage of expolosive energy pulses, homing in on anything across the battlefield and disintegrating any dirt, dust, or foes in its path.\n"; //some sort of fire periodic damage?
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
    std::cout << get_aName1() << ": Swings its mop, unleashing a powerful downward strike, drenching the opponent in a flood of cleaning solution.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ": Propels itself forward with incredible speed, leaving behind a turbulent stream of water that disorients and knocks back foes.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ": Releases a cloud of foamy bubbles that envelop the battle field, creating a slippery terrain and hindering opponenets' movement.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ": Channels its energy into a concentrated burst, launching a high-presure jet of water that cleanses all in its path, dealing damge and periodic bubble damage.\n"; //Do oeriodic buuble type damage in the future?
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
    std::cout << get_aName1() << ": Unleashes a rapid series of punches and kicks infused with energy, creating a whirlwind of cleaning fury that pulverizes opponets.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName2() << ": Spins rapidly, generating a powerful tornado of air and debris that engulfs enemies, tossing them around.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName3() << ": Emits a burst of energy particles that seek out and bombard opponents, disrupting their movements and sapping their strength.\n";
    std::cout << "\t" << std::endl;
    std::cout << get_aName4() << ": Summons a massive dust sotrm, engulfing the battlefield and dealing continuous damage to all caught within its swirling vortex of cleaning power.\n"; //Maybe do periodic damage in the future?
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