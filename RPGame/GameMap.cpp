#include "GameMap.h"
#include "character.h"
#include "enemy.h"
#include "event.h"
#include "npc.h"
#include "battle.h"


//locationNode implementations
locationNode::locationNode() {}
locationNode::locationNode(std::string name, std::string desc1, std::string desc2, NPC* nodeNpc, enemy* nodeEnemy, event* nodeEvent)
{
	this->name = name;
	this->desc1 = desc1;
	this->desc2 = desc2;
	this->npcPtr = nodeNpc;
	this->enemyPtr = nodeEnemy;
	this->eventPtr = nodeEvent;
}

std::string locationNode::getName()
{
	return name;
}

void locationNode::setName(std::string name)
{
	this->name = name;
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



//gameMap implementations
int gameMap::getSize()
{
	return size;
}

void gameMap::toRoot()
{
	index = root;
}

void gameMap::addRoot(std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev)
{
	locationNode* newNode = new locationNode(n, d1, d2, np, e, ev);
	root = newNode;
	index = root;
	size++;
}

void gameMap::birth_leftChild(locationNode* mommy, std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev)
{
	locationNode* infant = new locationNode(n, d1, d2, np, e, ev);
	mommy->setLeftChild(infant);
	infant->setParent(mommy);
	size++;
}

void gameMap::birth_midChild(locationNode* mommy, std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev)
{
	locationNode* infant = new locationNode(n, d1, d2, np, e, ev);
	mommy->setMidChild(infant);
	infant->setParent(mommy);
	size++;
}

void gameMap::birth_rightChild(locationNode* mommy, std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev)
{
	locationNode* infant = new locationNode(n, d1, d2, np, e, ev);
	mommy->setRightChild(infant);
	infant->setParent(mommy);
	size++;
}