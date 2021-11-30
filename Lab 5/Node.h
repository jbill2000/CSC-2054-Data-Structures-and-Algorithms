
//Node.h
#pragma once
class Node
{
	//private node variables
private:
	int value;
	Node* next;
	Node* in;
	//public stuff
public:
	//functions such as set value get value print constructor etc
	Node();
	Node(int v, Node * next);
	void setValue(int v);
	int getValue() const;
	void print(Node* in);

	Node* getNext() const;
	void setNext(Node* theNewNext);

};
