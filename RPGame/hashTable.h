#ifndef _HASH_TABLE
#define _HASH_TABLE

#include <iostream>
#include <vector>

class hashNode {
public:
	//constructor
	hashNode(int key, int data) {
		this->next = NULL;
		this->prev = NULL;
		this->key = key;
		this->data = data;
	}
	//for previous pointer
	hashNode* getPrev() {
		return prev;
	}
	void setPrev(hashNode* n) {
		this->prev = n;
	}
	void nullifyPrev() {
		this->prev = NULL;
	}
	//for next pointer
	hashNode* getNext() {
		return next;
	}
	void setNext(hashNode* n) {
		this->next = n;
	}
	void nullifyNext() {
		this->next = NULL;
	}
	int getKey() {
		return key;
	}
	void setKey(int key) {
		this->key = key;
	}
	int getData() {
		return data;
	}
	void setData(int data) {
		this->data = data;
	}

private:
	int key;
	int data;
	hashNode* prev = NULL;
	hashNode* next = NULL;
};

class hashList {
public:
	void pushback(hashNode* n) {
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
	hashNode* popBack() {
		index = tail;
		hashNode* temp = index;
		tail = tail->getPrev();
		index->getPrev()->nullifyNext();
		//index->nullifyPrev();
		index = head;
		return temp;
	}
	hashNode* popFront() {
		index = head;
		hashNode* temp = index;
		head = head->getNext();
		//index->getNext()->nullifyPrev();
		index->nullifyNext();
		index = head;
		return temp;
	}
	hashNode* popAt(int data) {
		if (size == 0) {
			std::cout << "Nothing in list." << std::endl;
			return NULL;
		}
		index = head;
		while (index->getData() != data) {
			if (index->getNext() == NULL && index->getData() != data) {
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
		hashNode* temp = index;
		index->getPrev()->setNext(index->getNext());
		index->getNext()->setPrev(index->getPrev());
		index->nullifyNext();
		//index->nullifyPrev();
		return temp;
	}
	hashNode* search(int data) {
		index = head;
		if (head == NULL) {
			std::cout << "Nothing in this list." << std::endl;
			return NULL;
		}
		while (index->getData() != data) {
			if (index->getNext() == NULL && index->getData() != data) {
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
			std::cout << index->getData() << " ";
			index = index->getNext();
		}
		std::cout << "]" << std::endl;
		index = head;
	}
private:
	hashNode* head = NULL;
	hashNode* tail = NULL;
	hashNode* index = NULL;
	int size = 0;
};

class hashTable {
public:
	hashTable() {};
	hashTable(int tableSize) {
		this->size = tableSize;
		this->tableSize = tableSize;
		table.resize(tableSize);
	}

	int getSize() {
		return size;
	}

	int hash(int key) {	//hashing function
		double val = pow(key, 2) - key + 1;	//quadratic function
		int index = static_cast<int> (val) % tableSize;
		return index;
	}

	void add(int key, int data) {
		/*if (size > tableSize) {
			std::cout << "Error: Hashtable Overflow!" << std::endl;
		}*/
		int index = hash(key);	//hash value will become index location
		hashNode* h = new hashNode(key, data);
		table[index].pushback(h);	//adds to the back of linked list at that index
		size++;
	}

	void printTable() {
		for (int i = 0; i < tableSize; i++) {
			std::cout << i << ": -> ";
			table[i].printFrontwards();	//prints out all the contents of the linked list at the current "i"
		}
	}

	hashNode* searchTable(int key, int data) {
		int index = hash(key);	//get the key
		return table[index].search(data);
	}

	hashNode* remove(int key, int data) {
		int index = hash(key);	//get the key
		return table[index].popAt(data);
	}

private:
	int size = 0;
	int tableSize = 0;
	std::vector<hashList> table;
};

#endif
