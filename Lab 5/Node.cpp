
//Node cpp
#include "Node.h"
#include <iostream>
using namespace std;
//Default Node Constructor
Node::Node()
{
	next = 0;
	value = 0;
}
//Node constructor that takes in a value and sets next_in to a node*
Node::Node(int v, Node * next_in)
{
	value = v;
	next = next_in;
}
//sets the value of node
void Node::setValue(int v)
{
	value = v;
}
//returns the value of node
int Node::getValue() const
{
	return value;
}
//Gets the next n ode
Node* Node::getNext() const
{
	return next;
}
//sets the next node 
void Node::setNext(Node* theNewNext)
{
	next = theNewNext;
}
//pritns the node
void Node::print(Node* in)
{
	Node* name = in;
	cout << name->getValue();
	//while node name is not 0 it will get next and set it to name then get the value. If statement breaks it if null.
	while (name != 0)
	{
		name=name->getNext();
		
		cout << name->getValue();
		if (name->getNext() == NULL)
		{
			break;
		}
	
	}
	
	


	

}