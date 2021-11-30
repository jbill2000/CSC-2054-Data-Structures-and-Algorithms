//Created by Jeremy Bill as part of Lab 4.
#include <iostream>
#include "Duck.h"
#include "Pond.h"
#include <vector>
using namespace std;
//constructor creates a vector of ducks
Pond::Pond()
{
	vector<Duck> duckies;
}
//adds ducks to the vector
void Pond::addDuck(Duck in)
{
	duckies.push_back(in);
}
void Pond::printPond()
{
		//prints vector by looping through it yes i chose Jeff and James for random duck names
	for (int i = 0; i < duckies.size(); i++)
	{
		  Duck jeff= duckies.at(i);
		  cout << "name: " << jeff.getName() << " " << "height: " << jeff.getHeight()<<"\n";
	}
}
//modifies the duck in the vector when we have to fly the duck
void Pond::modDuck(string name)
{
		//for loop 
	for (int k = 0; k < duckies.size(); k++)
	{
		Duck james = duckies.at(k);
		//if the name at k == the name inputted it will fly the duck at k.
		if (james.getName()==name)
		{
			duckies.at(k).fly();

		}
		

	}
}

