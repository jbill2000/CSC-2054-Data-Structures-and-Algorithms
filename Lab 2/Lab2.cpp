//Program created by Jeremy Bill as part of Lab 2.
#include "getString.h"
#include "ObstacleMove.h"
#include "playerMove.h"
#include "CollDet.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std; 



//main 
int main()
{
		//variables
	//1 - initialize the player's position
	int playerx = 0;
	//other variables
	char direction;
	int pos = 0;
	int newpos = 0;
	bool collide = false;
	bool end = false;
	int size = 1;
	int obscount = 0;
	int check = 0;

	
	//2 - initialize the obstacle vector and the frame counter (see frame’s use below)
	vector<int> obstacles;
	//adds a 29 to the vector to start 
		obstacles.push_back(29);
	

	//1 - while the player has not won
	do
	{
		
		
			
		
		
		
		//1 - get the string of the game board and print it out.
		cout << getString(newpos,obstacles);
		//While check is not 1 it will do this
		while (check != 1)
		{

			//1 - get the direction the player wants to move and move the player via move function
			cout << "\n""What move would you like to make?";
			cin >> direction;

			//does nothing for these conditions unless it goes into the else in which case it will move the player then the obstacles and increment obscount by 1. Once obscount gets to 3 it goes into the if(obscount==3) statement.
			if (direction == 'a' && pos == 0)
			{
				//does nothing
			}
			else if (direction == 'f' && pos == 28)
			{
				//do nothing
			}
			else if (direction == 'd' && pos == 29)
			{
				//do nothing
			}
			else
			{
				//player move
				newpos = movePlayer(direction, pos);
				//2 - call move on the obstacles 
				moveObstacles(obstacles);
				//increment the obstacle count. 
				obscount++;
			}


			

			


			//2 - check if the obscount is  3
			if (obscount == 3)
			{
				//2 - if so then add an obstacle by appending a 29 to the end of the vector
				obstacles.push_back(29);
				//2 - increment the frame
				size = size + 1;
				//resizes the frame
				obstacles.resize(size);
				//sets count to 0
				obscount = 0;
			}

			
			
			//For loop that loops through the vector and compares it to position.
			for (int n = 0; n < obstacles.size(); n++)
			{
					//if position == to the vector and the player is not at 29 then i call my collisiondetect method I created and make it true which returns a 1 and will go into the if below. and say you collided with an obstacle and will end the program.
				if (newpos == obstacles[n] && newpos<29)
				{
					//calls the method i created 
					check = collisionDetect(true);
					break;
				}
				//else if new pos is not equal to the obstacles vector n then it wouldnt have crashed and so the detection is false.
				else if (newpos != obstacles[n])
				{
					check = collisionDetect(false);

				}

			}
			
			//2 - check if the player collided with an obstacle and inform player they lost

		//1 - check if the player won and inform player if won
			if (check == 1)
			{
				cout << "\nYou collided with an obstacle better luck next time!\n";
				break;
			}
			//if they dont crash and the position is 29 then they win 
			if (check == 0 && newpos == 29)
			{
				cout << "\nYou win!\n";
				check = 1;
				cout << getString(newpos, obstacles);
				break;
			}
			//else if it doesnt meet the above it continues through the program as normal. 
			else
			{
				cout << getString(newpos, obstacles);
			}
			
			
			
		}
		
		
		//end of do while. 
	 }while(check!=1);
}

