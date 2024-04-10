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
	void setLeftChild(locationNode* node);
	void setMidChild(locationNode* node);
	void setRightChild(locationNode* node);
	void setParent(locationNode* node);

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

class gameMap
{
public:
	int getSize();
	void toRoot();
	//add root only!
	void addRoot(std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev);
	void birth_leftChild(locationNode* mommy, std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev);
	void birth_midChild(locationNode* mommy, std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev);
	void birth_rightChild(locationNode* mommy, std::string n, std::string d1, std::string d2, NPC* np, enemy* e, event* ev);

	//function to move and play through the map
	void play(locationNode* i, character& c);

private:
	locationNode* root;
	locationNode* index;
	int size;
};

#endif