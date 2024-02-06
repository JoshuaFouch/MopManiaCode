#pragma once
#include "character.h"
#include <string>
#ifndef SprayMop_h
#define SprayMop_h
//mr. eljay worked on character class hehe
class SprayMop : public character
{
public:
	SprayMop(string name, int hp, int att, int def);
	void runSprayMopDemo();//this runs the SprayMop character's attributes
private:

	string get_name();
	void set_name(string name);
	int get_hp();
	int get_att();
	void set_att(int att);
	int get_def();
	void displayStats();
	void damaged(int oppAtt);
	void attack();
	
	

};


#endif SprayMop_h