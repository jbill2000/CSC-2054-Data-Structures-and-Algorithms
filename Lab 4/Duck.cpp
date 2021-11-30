//Created by Jeremy Bill as part of Lab 4.
#include <iostream>
#include "Duck.h"
#include "Pond.h"
#include <vector>
using namespace std;
//duck constructor creates a new duck by taking in name and height
Duck::Duck(string name_in, int height_in)
{
	name = name_in;
	height = height_in;
}
//flys the duck by getting the height and incrementing it by 1 then returns it for use in mod duck
int Duck::fly()
{
		height = getHeight() + 1;
		return height;
	
		
}
//returns name
string Duck::getName()const
{
	return name;
}
//returns height
int Duck::getHeight()const
{
	return height;
}