#pragma once
#include <iostream>
#include "Train.h"
#include <list>
#include <vector>
using namespace std;
class HashTable
{
public:
	//constructor and various methods
	HashTable();
	bool insert(Train* in);
	void print();
	bool find(Train* in);
	int getSize();
	void remove(Train* in);
	unsigned int rehash(Train* in);
private:
	//private vars
	int numberOfEntries, sizeOfTable;

	list <Train*>* Trainptr = new list<Train*>;
	int tracker = 1;

	//vector <Train*> trains;
	list<Train*>* table;
	

};

ostream& operator << (ostream& out, list<Train*> t);