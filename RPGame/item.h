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

/*TO ADD MORE ITEMS:
1. make a new derived class of item
2. set its ability
3. make an "add<item name>" function to the inventory class*/

class item {
public:
	item();

	int getKey();
	void setKey(int key);
	std::string getName();
	virtual void use(character& c);
	item* getPrev();
	void setPrev(item* n);
	item* getNext();
	void setNext(item* n);


protected:
	std::string name;
	int key;
	item* prev = NULL;
	item* next = NULL;
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