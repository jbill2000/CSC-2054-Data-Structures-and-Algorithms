//Created by Jeremy Bill as part of Lab 4.
#pragma once
#include <vector>
#include <iostream>
#include "Duck.h"
using namespace std;
//pond .h
class Pond
{
	//public pond members
public:
	Pond();
	void addDuck(Duck in);
	void printPond();
	void modDuck(string name);

	//private pond member
private:
	vector<Duck> duckies;

};