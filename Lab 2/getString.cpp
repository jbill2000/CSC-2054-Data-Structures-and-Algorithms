//Program created by Jeremy Bill as part of Lab 2.
#include <iostream>
#include <string>
#include <vector>
#include "getString.h"
#include "CollDet.h"
using namespace std;



//Get String definiton
//1 - creating one line with the B, the player's position, any obstacles (part II), and the E
string getString(int playerx, vector <int> obstacles)
{
	//variables
	bool end = false;
	bool collide = false;
	bool o = true;
	bool p = true;
	string newfirst;
	string firstrow;
	//1 – builds up a string of the game board.
	firstrow = "B";
	//1 - loop over the positions 0 to 29
			
	for (int i = 0; i < 30; i++)
	{
		//1 - if the player is at i
				//1 - add the player to the line
		if (i == playerx)
		{
			firstrow += "P";
			p = false;
		}
		//2 – if an obstacle is at i 
				//2 - add the obstacle line
		for (int j = 0; j < obstacles.size(); j++)
		{
			if (obstacles[j]==i && i!= playerx)
			{
				firstrow += "0";
				o = false;
			}
			else if (i == 29 && obstacles[j] == 29 && playerx!=29)
			{
				firstrow += "0";
				o = false;
			}
		}
		//1 - if neither then add ' '
		if (p && o)
		{
			firstrow += " ";
		}
		p = true;
		o = true;
		
	}
	//Adds E to the end.
	firstrow += "E";
	
		
			
			

	//1 - create a second line with the right number of X's
	string secondrow;
	for (int j = 0; j < 32; j++)
	{
		secondrow += "X";
	}
	string together = firstrow + "\n" + secondrow;

	
	
	return together;
	//1 - return the concatenation of those lines.

}