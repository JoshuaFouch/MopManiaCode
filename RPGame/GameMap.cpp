#include "GameMap.h"
#include "character.h"
#include "enemy.h"
#include "event.h"
#include "npc.h"
#include "battle.h"


//locationNode
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