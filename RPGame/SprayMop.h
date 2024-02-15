/*// SprayMop.h
#pragma once

#include "character.h"
#ifndef SprayMop_h
#define SprayMop_h

class SprayMop : public character
{
public:
    SprayMop(std::string name, int hp, int att, int def);
    void attack();
    
    std::string get_name();
    void set_name(std::string name);
    int get_hp();
    void set_hp(int hp);
    int get_att();  
    void set_att(int att);
    int get_def();  
    void set_def(int def);
    void displayStats();
    void damaged(int oppAtt);

    void Attack1(character& c, enemy& e) override;
    void Attack2(character& c, enemy& e) override;
    void Attack3(character& c, enemy& e) override;
    void Attack4(character& c, enemy& e) override;
};
#endif
*/