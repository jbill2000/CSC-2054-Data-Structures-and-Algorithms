//created as part of Lab 8 by Jeremy Bill
#pragma once
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Card
{
public:
	//public functionality including get val and operator overloadings
	Card(int in);
	Card();
	int getVal() const;
	bool operator >(Card const& uno);
	bool operator ==(Card const& uno);
private:
	//private variable int. 
	int value;
};


