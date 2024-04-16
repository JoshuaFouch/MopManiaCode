#ifndef _ITEM_H
#define _ITEM_H
#include <iostream>

//forward declarations
class character;
class enemy;

/*keys for items:
5: base item
1: potion
2: attackUp
3: defenseUp
4: deadRats
*/

class item {
public:
	item();

	int getKey();
	std::string getName();
	virtual void use(character& c);

protected:
	std::string name;
	int key = 5;
};

class potion : public item {
public:
	potion();
	void use(character& c);
};

class attackUp : public item {
public:
	attackUp();
	void use(character& c);
};

class defenseUp : public item {
public:
	defenseUp();
	void use(character& c);
};

class deadRat : public item {
public:
	deadRat();
	void use(character& c);
};

#endif