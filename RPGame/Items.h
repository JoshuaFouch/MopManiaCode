#pragma once
#ifndef items_h
#define items_h

#include <iostream>
#include <string>

class items{
public:
	items(std::string name);	//constructor
	std::string get_name();
	void set_name(std::string name);

	//item ability
	virtual void itemAbility();


private:
	std::string name;
};

#endif items_h
