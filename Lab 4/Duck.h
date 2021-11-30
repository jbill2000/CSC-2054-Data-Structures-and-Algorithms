//Created by Jeremy Bill as part of Lab 4.
#pragma once
#include <iostream>
using namespace std;
//duck class .h file
class Duck
{
	//public members with the prototypes
	public:
		int fly();
		Duck(string name_in, int height_in);
		string getName()const;
		int getHeight()const;






		//private members
private:
	string name;
	int height;




};