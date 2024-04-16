#include "item.h"
#include "character.h"
#include "enemy.h"

/*item implementations*/
item::item() {
	this->name = "item";
	this->key = 5;
}
int item::getKey() {
	return key;
}
std::string item::getName() {
	return name;
}
void item::use(character& c) {
	std::cout << c.get_name() << " says hi!" << std::endl;
}

/*potion implementations*/
potion::potion() {
	this->name = "Potion";
	this->key = 1;
}
void potion::use(character& c) {
	c.increaseHP(20);
}

/*attackUp implementations*/
attackUp::attackUp() {
	this->name = "Attack-Up";
	this->key = 2;
}
void attackUp::use(character& c) {
	c.increaseAtt(5);
}

/*defenseUp implementations*/
defenseUp::defenseUp() {
	this->name = "Defense-Up";
	this->key = 3;
}
void defenseUp::use(character& c) {
	c.increaseDef(5);
}

/*deadRat implementations*/
deadRat::deadRat() {
	this->name = "Dead Rat";
	this->key = 4;
}
void deadRat::use(character& c) {
	std::cout << "This did nothing... " << std::endl;
}