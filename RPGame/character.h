#ifndef character_h
#define character_h

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class character
{

public:
	//name variable
	string get_name();
	void set_name(string name);

	//hp variable
	int get_hp();
	void set_hp(int hp);

	//attack variable
	int get_att();
	void set_att(int att);

	//defense variable
	int get_def();
	void set_def(int def);

	//displays stats
	void displayStats();

	//takes in opponents attack to subtract health of character
	void damaged(int oppAtt);

	//function 



private:
	string name;
	int hp;
	int att;
	int def;
	//class inventory (linked list?)

};




















#endif 