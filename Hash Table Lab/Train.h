#ifndef TRAIN_H
#define TRAIN_H

#include <string>
using namespace std;

class Train
{
public:
	//methods and vars
	string trainName;
	int trainNumber;

	Train(string name_in, int number_in);
	string getName()const;
	int getNumber()const;
	unsigned int hash(int tablesize);

	

};




ostream & operator << (ostream & out, Train * t);

#endif