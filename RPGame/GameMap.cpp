#include "GameMap.h"
#include "character.h"
#include "enemy.h"
#include "event.h"


//locationNode implementations
locationNode::locationNode() {}
locationNode::locationNode(std::string title, std::string desc1, std::string desc2, event* nodeEvent)
{
	//this->name = name;
	this->title = title;
	this->desc1 = desc1;
	this->desc2 = desc2;
	this->eventPtr = nodeEvent;
}

bool locationNode::isLeaf()
{
	if (this->leftPtr == NULL && this->midPtr == NULL && this->rightPtr == NULL) {
		return true;
	}
	return false;
}

std::string locationNode::getName()
{
	return name;
}

void locationNode::setName(std::string name)
{
	this->name = name;
}

std::string locationNode::getTitle()
{
	return title;
}

std::string locationNode::getDesc1()
{
	return desc1;
}

std::string locationNode::getDesc2()
{
	return desc2;
}

void locationNode::setLeftChild(locationNode* node)
{
	this->leftPtr = node;
}

void locationNode::setMidChild(locationNode* node)
{
	this->midPtr = node;
}

void locationNode::setRightChild(locationNode* node)
{
	this->rightPtr = node;
}

void locationNode::setParent(locationNode* node)
{
	this->parentPtr = node;
}

locationNode* locationNode::getRight()
{
	return rightPtr;
}

locationNode* locationNode::getMid()
{
	return midPtr;
}

locationNode* locationNode::getLeft()
{
	return leftPtr;
}

locationNode* locationNode::getParent()
{
	return parentPtr;
}


//gameMap implementations
gameMap::gameMap() {};

int gameMap::getSize()
{
	return size;
}

locationNode* gameMap::getIndex()
{
	return index;
}

void gameMap::toRoot()
{
	index = root;
}

void gameMap::addRoot(std::string t, std::string d1, std::string d2, event* ev)
{
	locationNode* newNode = new locationNode(t, d1, d2, ev);
	root = newNode;
	index = root;
	size++;
}

void gameMap::birth_leftChild(locationNode* mommy, std::string t, std::string d1, std::string d2, event* ev)
{
	locationNode* infant = new locationNode(t, d1, d2, ev);
	mommy->setLeftChild(infant);
	infant->setParent(mommy);
	size++;
}

void gameMap::birth_midChild(locationNode* mommy, std::string t, std::string d1, std::string d2, event* ev)
{
	locationNode* infant = new locationNode(t, d1, d2, ev);
	mommy->setMidChild(infant);
	infant->setParent(mommy);
	size++;
}

void gameMap::birth_rightChild(locationNode* mommy, std::string t, std::string d1, std::string d2, event* ev)
{
	locationNode* infant = new locationNode(t, d1, d2, ev);
	mommy->setRightChild(infant);
	infant->setParent(mommy);
	size++;
}

void gameMap::moveIndex_left()
{
	index = index->getLeft();
}

void gameMap::moveIndex_middle()
{
	index = index->getMid();
}

void gameMap::moveIndex_right()
{
	index = index->getRight();
}

void gameMap::moveIndex_back()
{
	index = index->getParent();
}

void gameMap::move_left(locationNode* i)
{
	i = i->getLeft();
}
void gameMap::move_middle(locationNode* i)
{
	i = i->getMid();
}
void gameMap::move_right(locationNode* i)
{
	i = i->getRight();
}
void gameMap::move_back(locationNode* i)
{
	i = i->getParent();
}

void gameMap::displayLocation(locationNode* i)
{
	color(7);
	size_t nameLen = i->getTitle().length() + 16;
	std::cout << "|--------" << i->getTitle() << "--------|" << std::endl;
	Sdelay(1);
	std::cout << i->getDesc1() << std::endl;
	Sdelay(1);
	std::cout << i->getDesc2() << std::endl;
	Sdelay(1);
	std::cout << "|" << std::string(nameLen, '-') << "|\n";
}

void gameMap:: Pause_Menu(character& c)
{
	clear();
	int choice;
	while (true)
	{
		std::cout << "|--Pause Menu--|" << std::endl;
		std::cout << "|---------------------------------|" << std::endl;
		std::cout << "|1. Go back to beginning		    |" << std::endl;
		std::cout << "|2. Check Inventory               |" << std::endl;
		std::cout << "|3. Exit Game                     |" << std::endl;
		std::cout << "|4. Go Back                       |" << std::endl;
		std::cout << "|---------------------------------|" << std::endl;
		std::cin >> choice;

		if (choice == 3) {
			clear();
			std::string exitChoice;
			std::cout << "Are you sure you want to exit? [y/n]" << std::endl;
			std::cin >> exitChoice;
			if (exitChoice == "y") {
				std::string exitChoice1;
				clear();
				Dotdot();
				std::cout << "Are you really really sure? ALL PROGRESS WILL BE LOST! [y/n]" << std::endl;
				std::cin >> exitChoice1;
				if (exitChoice1 == "y") {
					endMusic();
					clear();
					std::cout << "Okay!... Thanks for playing!" << std::endl;
					system("pause");
					c.exitGame = true;
					break;
				}
				else
				{
					clear();
					continue;
				}
			}
			else {
				clear();
				continue;
			}
		}
		else if (choice == 1) {
			toRoot();
			break;
		}
		else if (choice == 2) {
			clear();
			c.checkInventory();
			clear();
			continue;
		}
		else if (choice == 4) {
			break;
		}
		else
		{
			clear();
			std::cout << "INVALID INPUT" << std::endl;
			continue;

		}
	}
}

void gameMap::play(locationNode* i, character& c)
{
	i = root;
	while (c.isDead == false || c.endGame == false || c.exitGame == false)
	{
		displayLocation(i);
		//if only 1 child
		if (i->getLeft() != NULL || i->getMid() != NULL || i->getRight() != NULL)
		{
			//if only left
			if (i->getLeft() != NULL)
			{
				while (true) {
					std::cout << "Where do you want to go?" << std::endl;
					std::cout << "1." << i->getLeft()->getTitle() << std::endl;
					if (i != root)
					{
						std::cout << "2. Go back:  " << i->getParent()->getTitle() << std::endl;
					}
					std::cout << "3. Pause Menu" << std::endl;
					int choice;
					std::cin >> choice;
					switch (choice) {
					case 1:
						move_left(i);
						clear();
						break;
					case 2:
						move_back(i);
						clear();
						break;
					case 3:
						Pause_Menu(c);
						clear();
						break;
					default:
						clear();
						continue;
					}
				}
			}
			//if only middle
			else if (i->getMid() != NULL)
			{
				while (true) {
					std::cout << "Where do you want to go?" << std::endl;
					std::cout << "1." << i->getMid()->getTitle() << std::endl;
					if (i != root)
					{
						std::cout << "2. Go back:  " << i->getParent()->getTitle() << std::endl;
					}
					std::cout << "3. Pause Menu" << std::endl;
					int choice;
					std::cin >> choice;
					switch (choice) {
					case 1:
						move_middle(i);
						clear();
						break;
					case 2:
						move_back(i);
						clear();
						break;
					case 3:
						Pause_Menu(c);
						clear();
						break;
					default:
						clear();
						continue;
					}
				}
			}
			//if only right
			else if (i->getRight() != NULL)
			{
				while (true) {
					std::cout << "Where do you want to go?" << std::endl;
					std::cout << "1." << i->getRight()->getTitle() << std::endl;
					if (i != root)
					{
						std::cout << "2. Go back:  " << i->getParent()->getTitle() << std::endl;
					}
					std::cout << "3. Pause Menu" << std::endl;
					int choice;
					std::cin >> choice;
					switch (choice) {
					case 1:
						move_right(i);
						clear();
						break;
					case 2:
						move_back(i);
						clear();
						break;
					case 3:
						Pause_Menu(c);
						clear();
						break;
					default:
						clear();
						continue;
					}
				}
			}
		//if only 2 children
			//if only left and middle
			else if (i->getLeft() != NULL && i->getMid() != NULL)
			{
				while (true) {
					std::cout << "Where do you want to go?" << std::endl;
					std::cout << "1." << i->getLeft()->getTitle() << std::endl;
					std::cout << "2." << i->getMid()->getTitle() << std::endl;
					if (i != root)
					{
						std::cout << "3. Go back:  " << i->getParent()->getTitle() << std::endl;
					}
					std::cout << "4. Pause Menu" << std::endl;
					int choice;
					std::cin >> choice;
					switch (choice) {
					case 1:
						move_left(i);
						clear();
						break;
					case 2:
						move_middle(i);
						clear();
						break;
					case 3:
						move_back(i);
						clear();
						break;
					case 4:
						Pause_Menu(c);
						clear();
						break;
					default:
						clear();
						continue;
					}
				}
			}
			//if only left and right
			else if (i->getLeft() != NULL && i->getRight() != NULL)
			{
				while (true) {
					std::cout << "Where do you want to go?" << std::endl;
					std::cout << "1." << i->getLeft()->getTitle() << std::endl;
					std::cout << "2." << i->getRight()->getTitle() << std::endl;
					if (i != root)
					{
						std::cout << "3. Go back:  " << i->getParent()->getTitle() << std::endl;
					}
					std::cout << "4. Pause Menu" << std::endl;
					int choice;
					std::cin >> choice;
					switch (choice) {
					case 1:
						move_left(i);
						clear();
						break;
					case 2:
						move_right(i);
						clear();
						break;
					case 3:
						move_back(i);
						clear();
						break;
					case 4:
						Pause_Menu(c);
						clear();
						break;
					default:
						clear();
						continue;
					}
				}
			}
			//if only right and middle
			else if (i->getRight() != NULL && i->getMid() != NULL)
			{
				while (true) {
					std::cout << "Where do you want to go?" << std::endl;
					std::cout << "1." << i->getRight()->getTitle() << std::endl;
					std::cout << "2." << i->getMid()->getTitle() << std::endl;
					if (i != root)
					{
						std::cout << "3. Go back:  " << i->getParent()->getTitle() << std::endl;
					}
					std::cout << "4. Pause Menu" << std::endl;
					int choice;
					std::cin >> choice;
					switch (choice) {
					case 1:
						move_right(i);
						clear();
						break;
					case 2:
						move_middle(i);
						clear();
						break;
					case 3:
						move_back(i);
						clear();
						break;
					case 4:
						Pause_Menu(c);
						clear();
						break;
					default:
						clear();
						continue;
					}
				}
			}
		}
		//if all 3 children
		else if (i->getLeft() != NULL && i->getMid() != NULL && i->getRight() != NULL)
		{
			while (true) {
				std::cout << "Where do you want to go?" << std::endl;
				std::cout << "1." << i->getLeft()->getTitle() << std::endl;
				std::cout << "2." << i->getMid()->getTitle() << std::endl;
				std::cout << "3." << i->getRight()->getTitle() << std::endl;
				if (i != root)
				{
					std::cout << "4. Go back:  " << i->getParent()->getTitle() << std::endl;
				}
				std::cout << "5. Pause Menu" << std::endl;
				int choice;
				std::cin >> choice;
				switch (choice) {
				case 1:
					move_left(i);
					clear();
					break;
				case 2:
					move_middle(i);
					clear();
					break;
				case 3:
					move_right(i);
					clear();
					break;
				case 4:
					move_back(i);
					clear();
					break;
				case 5:
					Pause_Menu(c);
					clear();
					break;
				default:
					clear();
					continue;
				}
			}
		}
		//if leaf
		else if (i->isLeaf())
		{
			while (true) {
				std::cout << "Where do you want to go?" << std::endl;
				std::cout << "1. Go back:  " << i->getParent()->getTitle() << std::endl;
				std::cout << "2. Pause Menu" << std::endl;
				int choice;
				std::cin >> choice;
				switch (choice) {
				case 1:
					move_back(i);
					clear();
					break;
				case 2:
					Pause_Menu(c);
					clear();
					break;
				default:
					clear();
					continue;
				}
			}
		}
		else {
			std::cout << "error..." << std::endl;
		}
	}
}