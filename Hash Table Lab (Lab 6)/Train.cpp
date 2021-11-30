#include "Train.h"
#include <iostream>
using namespace std;
//train constructor
Train::Train(string name_in, int number_in)
{
	trainNumber = number_in;
	trainName = name_in;
}
//hash function
unsigned int Train::hash(int tablesize)
{
	unsigned int value = trainNumber;
	for (int i = 0; i<trainName.size(); i++)
	{
		value += (trainNumber + 11) * value + trainName[i];
	}
	return value % tablesize;
}
//gets train name
string Train::getName()const
{
	return trainName;
}
//gets train number
int Train::getNumber()const
{
	return trainNumber;
}
//operator overloading
ostream & operator << (ostream & out, Train * t)
{
	out << t->trainName << " " << t->trainNumber;
	return out;
}
