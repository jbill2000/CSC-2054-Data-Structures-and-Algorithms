//Program created by Jeremy Bill as part of Lab 2.
#include <iostream>
#include <string>
#include <vector>
#include "ObstacleMove.h"
using namespace std;
//2 - move obstacles takes in the vector of obstacle positions and returns void
void moveObstacles(vector<int>& obstacles)
{
	//2 - move each obstacle by decrementing each int
	for (int m = 0; m < obstacles.size(); m++)
	{
		obstacles[m]--;
	}
}