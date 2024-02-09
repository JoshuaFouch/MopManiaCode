#include "Items.h"

items::items(std::string name)
{
	this->name = name;
}

std::string items::get_name()
{
	return name;
}

std::string
