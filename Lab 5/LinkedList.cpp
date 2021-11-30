
//LinkedList.cpp code given to us by Dr Mood that I did not modify
#include "LinkedList.h"
#include <iostream>
using namespace std;
//LL constructor
LinkedList::LinkedList()
{
	head = 0;
}

//Adds a new node to the linked list
void LinkedList::append(int value_in)
{
	if (head == 0)
	{
		head = new Node();
		head->setValue(value_in);
		head->setNext(0);
	}
	else
	{
		Node* myPtr = head;
		while (myPtr->getNext() != 0)
		{
			myPtr = myPtr->getNext();
		}
		myPtr->setNext(new Node());
		myPtr->getNext()->setValue(value_in);
		myPtr->getNext()->setNext(0);
	}
}
//prints the linked list
void LinkedList::print()
{
	Node* in = head;
	while (in != 0)
	{
		cout << in->getValue() << " ";
		in = in->getNext();
		
	}
}

