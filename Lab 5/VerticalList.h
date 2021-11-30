#pragma once
#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;
//vertical list class
class VerticalList
{
private:
	Node* head;
public:
	//default constructor
	VerticalList();
	//print function
	void print();
	//increment
	void increment();
	//destructor

	~VerticalList();

	//copy constructor
	VerticalList(const VerticalList& list);
	//operator =
	const VerticalList& operator=(const VerticalList& list);
	
};