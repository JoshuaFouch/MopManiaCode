#include "SprayMop.h"

// Constructor implementation
SprayMop::SprayMop(std::string name, int hp, int att, int def)
{
    set_name(name);
    set_hp(hp);
    set_att(att);
    set_def(def);
}

std::string SprayMop::get_name()
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

void SprayMop::set_hp(int hp)
{
    character::set_hp(hp);
}

int SprayMop::get_att()
{
    return character::get_att();
}

void SprayMop::set_att(int att)
{
    character::set_att(att);
}

int SprayMop::get_def()
{
    return character::get_def();
}

void SprayMop::set_def(int def)
{
    character::set_def(def);
}

void SprayMop::displayStats()
{
    std::cout << "*************************************" << '\n';
    std::cout << "| Name: " << get_name() << "                    |"<< '\n';
    std::cout << "| HP: " << get_hp() << "                            |" << '\n';
    std::cout << "| Attack: " << get_att() << "                        |" << '\n';
    std::cout << "| Defense: " << get_def() << "                       |" << '\n';
    std::cout << "*************************************" << '\n';
}

void SprayMop::damaged(int oppAtt)
{
    std::cout << get_name() << " is slapping you menacingly!" << '\n';
}

void SprayMop::attack()
{
    std::cout << get_name() << " Attacked you cleanly!" << '\n';
}

void SprayMop::Attack1(character& c, enemy& e)
{
    std::cout << "SprayMop performs Attack 1: Splash Attack!" << std::endl;
}

void SprayMop::Attack2(character& c, enemy& e)
{
    std::cout << "SprayMop performs Attack 2: High-Pressure Jet!" << std::endl;
}

void SprayMop::Attack3(character& c, enemy& e)
{
    std::cout << "SprayMop performs Attack 3: Cleaning Wave!" << std::endl;
}

void SprayMop::Attack4(character& c, enemy& e)
{
    std::cout << "SprayMop performs Attack 4: Ultra Clean Sweep!" << std::endl;
}
