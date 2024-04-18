#ifndef _INVENTORY_H
#define _INVENTORY_H

#include <iostream>
#include <vector>
#include "item.h"


class item_list {
public:
	void pushback(item* n) {
		if (head == NULL && tail == NULL) {
			head = n;
			tail = n;
			size++;
			return;
		}

		index = head;
		while (index->getNext() != NULL) {
			index = index->getNext();
		}
		index->setNext(n);
		n->setPrev(index);
		tail = n;
		size++;
		index = head;
	}
	item* getHead() {
		return head;
	}
	std::string getHeadName() {
		return head->getName();
	}
	int getSize() {
		return size;
	}
	item* popBack() {
		index = tail;
		item* temp = index;
		tail = tail->getPrev();
		temp->setPrev(NULL);
		temp->setNext(NULL);
		index = head;
		size--;
		return temp;
	}
	item* popFront() {
		index = head;
		item* temp = index;
		head = head->getNext();
		temp->setPrev(NULL);
		temp->setNext(NULL);
		index = head;
		size--;
		return temp;
	}
	item* popAt(std::string name) {
		if (size == 0) {
			std::cout << "Nothing in list." << std::endl;
			return NULL;
		}
		index = head;
		while (index->getName() != name) {
			if (index->getNext() == NULL && index->getName() != name) {
				std::cout << "Not found... returned last node: " << std::endl;
				return index;
			}
			index = index->getNext();
		}
		if (index->getPrev() == NULL) {
			return popFront();
		}
		if (index->getNext() == NULL) {
			return popBack();
		}
		item* temp = index;
		index->getPrev()->setNext(index->getNext());
		index->getNext()->setPrev(index->getPrev());
		temp->setPrev(NULL);
		temp->setNext(NULL);
		size--;
		return temp;
	}
	item* search(std::string name) {
		index = head;
		if (head == NULL) {
			std::cout << "Nothing in this list." << std::endl;
			return NULL;
		}
		while (index->getName() != name) {
			if (index->getNext() == NULL && index->getName() != name) {
				std::cout << "Not found; returned last node: ";
				return index;
			}
			index = index->getNext();
		}
		return index;
	}
	void printFrontwards() {	//uses the next pointers to print the list
		index = head;
		std::cout << "[ ";
		while (index != NULL) {	//traverses the list from the beginning to end
			std::cout << index->getName() << " ";
			index = index->getNext();
		}
		std::cout << "]" << std::endl;
		index = head;
	}
private:
	item* head = NULL;
	item* tail = NULL;
	item* index = NULL;
	int size = 0;
};

class inventory {
public:
	inventory() {
		this->size = 100;
		this->tableSize = 100;
		table.resize(100);
	}
	inventory(int tableSize) {
		this->size = tableSize;
		this->tableSize = tableSize;
		table.resize(tableSize);
	}
	int getSize() {
		return size;
	}
	int hash(int key) {	//hashing function
		return key * 1;
	}

	void add(int key, item* n) {
		int index = hash(key);	//hash value will become index location
		table[index].pushback(n);	//adds to the back of linked list at that index
		size++;
	}
	void add_potion() {
		potion* p = new potion;
		add(p->getKey(), p);
	}
	void add_attackUp() {
		attackUp* a = new attackUp;
		add(a->getKey(), a);
	}
	void add_defenseUp() {
		defenseUp* d = new defenseUp;
		add(d->getKey(), d);
	}
	void add_deadRat() {
		deadRat* r = new deadRat;
		add(r->getKey(), r);
	}


	void useItem(int key, character& c) {
		getItem(key)->use(c);	//uses item
		remove(key);	//deletes item
	}

	void printTable() {
		for (int i = 0; i < tableSize; i++) {
			std::cout << i << ": -> ";
			table[i].printFrontwards();	//prints out all the contents of the linked list at the current "i"
		}
	}
	void printInventory() {
		for (int i = 0; i < tableSize; i++) {
			std::cout << table[i].getHeadName() << ": ";
			std::cout << table[i].getSize() << std::endl;
		}
	}
	item* getItem(int key) {
		int index = hash(key);	//get the key
		return table[index].getHead();
	}
	item* remove(int key) {
		int index = hash(key);	//get the key
		return table[index].popBack();
	}

private:
	int size = 0;
	int tableSize = 0;
	std::vector<item_list> table;
};

#endif
