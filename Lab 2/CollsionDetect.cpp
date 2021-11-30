#include <iostream>
#include "CollDet.h"
//Program created by Jeremy Bill as part of Lab 2.
using namespace std;
//Collison detect method takes in a bool and if that bool is true returns a 1 and if false returns 0. Used later in main. 
int collisionDetect(bool checker)
{
	int ender = 0;
	//if true return 1 
	if (checker == true)
	{
		ender = 1;
	}
	//if false return 0
	else if (checker == false)
	{
		ender = 0;
	}
	
	return ender;

}