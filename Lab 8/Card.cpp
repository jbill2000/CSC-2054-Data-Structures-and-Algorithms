//created as part of Lab 8 by Jeremy Bill
#include "Card.h"
#include <queue>
#include <vector>
#include <iostream>
using namespace std;
//card constructor takes in an int and makes it value
Card::Card(int in)
{
	value = in;
}
//operator overloading for >
bool Card:: operator >(Card const& uno)
{
	return value > uno.getVal();

}
//get val method
int Card::getVal() const
{
	return value;
}
//operator overloading for ==. 
bool Card:: operator ==(Card const& uno)
{
	if (value == uno.getVal())
	{
		return true;
	}
	else
		return false;

}
