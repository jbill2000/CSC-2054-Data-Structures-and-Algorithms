//LinkedList.h
#pragma once
#include "Node.h"
class LinkedList
{
public:
	//constructor append and print function prototypes
	LinkedList();
	void append(int value);

	void print();
	//private vars
private:
	Node* head;
};
