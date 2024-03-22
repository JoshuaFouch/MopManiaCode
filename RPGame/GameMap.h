#ifndef _GAMEMAP_H
#define _GAMEMAP_H

#include <iostream>

//forward declarations
class character;
class enemy;
class event;
class NPC;
class battle;


class locationNode
{
public:
	//constructor
	locationNode();
	locationNode(std::string name, std::string desc1, std::string desc2, NPC* nodeNpc, enemy* nodeEnemy, event* nodeEvent);

	//functions
	std::string getName();
	void setName(std::string name);


protected:
	//for the node itself
	std::string name;
	std::string desc1;	//first line of description
	std::string desc2;	//second line of description

	//pointers to other nodes
	locationNode* parentPtr = NULL;	//points to this node's previous node (the parent node)
	locationNode* leftPtr = NULL;	//points to the node's left child
	locationNode* midPtr = NULL;	//points to the node's middle child
	locationNode* rightPtr = NULL;	//points to the node's right child

	//pointers to specific objects that will take place in the node
	NPC* npcPtr = NULL;	//points to an NPC
	enemy* enemyPtr = NULL;	//points to an enemy
	event* eventPtr = NULL;	//points to an event

};

#endif