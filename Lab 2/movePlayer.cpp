#include <iostream>
#include <string>
#include <vector>
#include "playerMove.h"
using namespace std;
//Program created by Jeremy Bill as part of Lab 2.

//1 - move takes in a character and moves the player's position depending on the 
int movePlayer(char direction, int& pos)
{

	//If condition to check if the direction is a and between the game board
	if (direction == 'a' && pos > 0 && pos < 29)
	{
		//If a is chosen and pos ==0 it will do nothing
		if (direction == 'a' && pos == 0)
		{
			pos = pos - 0;
		}
		//else it will decrease by 1.
		else
			pos = pos - 1;
		

	}
	// If condition to check if the direction is d and between the game board
	else if (direction == 'd' && pos >= 0 && pos <= 29)
	{
			//If d is chosen and pos ==29 it will do nothing
		if (direction == 'd' && pos == 29)
		{
			pos = pos + 0;
		}
		//else pos is incremented by 1
		else
		{
			pos = pos + 1;
		}
		

	}
	// If condition to check if the direction is f and between the game board
	else if (direction == 'f' && pos >= 0 && pos <= 29)
	{
		//If f is chosen and pos ==28 or 29 it will do nothing
		if (direction == 'f' && pos == 28)
		{
			pos = pos + 0;
		}
		else if (direction == 'f' && pos == 29)
		{
			pos = pos + 0;
		}
		//else it will increase by 2.
		else
		{
			pos = pos + 2;
		}
		
	}

	return pos;
}