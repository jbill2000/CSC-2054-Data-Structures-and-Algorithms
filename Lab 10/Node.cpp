#include "Node.h"
#include <iostream>
using namespace std;
//constructor
Node::Node(int value_in, Node* right_in, Node* left_in)
{
	value = value_in;
	right = right_in;
	left = left_in;


}
//constructor
Node::Node(int value_in)
{
	value = value_in;
	left = NULL;
	right = NULL;
}
//returns right
Node* Node::getRight()const
{
	return right;
}
//returns left
Node* Node::getLeft()const
{
	return left;
}
//returns value
int Node::getValue()const
{
	return value;
}
//sets Left
void Node::setLeft(Node* in)
{
	left = in;

}
//sets Right
void Node::setRight(Node* in)
{
	right = in;
}