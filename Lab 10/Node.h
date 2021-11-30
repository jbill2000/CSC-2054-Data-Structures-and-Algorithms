#pragma once
class Node
{
public:
	//constructORS
	Node(int value_in, Node* right_in, Node* left_in);
	Node(int value_in);
	//Accessors
	int getValue()const;
	Node *getRight()const;
	Node *getLeft()const;

	//mutators
	void setLeft(Node* in);
	void setRight(Node* in);

private:
	int value;
	Node* left;
	Node* right;
};