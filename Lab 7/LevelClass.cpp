//created by Jeremy Bill as part of Lab 7
#include <string>
#include <iostream>
#include <iostream>
#include <fstream> 
#include "LevelClass.h"
using namespace std;
//read level method takes in a filename and uses it to read in the level data
LevelClass* LevelClass::readLevel(string in)
{
		//variable and input stream creation
	ifstream inFile;
	string s;
	int size1 = 0;
	int size2 = 0;
	int size3 = 0;

	int start1=0;
	int start2=0;
	int start3 = 0;
	int test;
	//creation of the pointer
	LevelClass* levelpointer= new LevelClass();
	//Open the file
		inFile.open(in);
		//takes in a var and sets name, z, x and y accordingly
		inFile >> s;
		levelpointer->setName(s);
		inFile >> size1;
			levelpointer->setZ(size1);
	    inFile >> size2;
			levelpointer->setX(size2);
		inFile >> size3;
			levelpointer->setY(size3);
			

			//creation of the 3d array
				levelpointer->array = new int** [levelpointer->getZ()];
				for (int z = 0; z < levelpointer->getZ(); z++)
				{
					levelpointer->array[z] = new int* [levelpointer->getX()];
					for (int y = 0; y < levelpointer->getY(); y++)
					{
						levelpointer->array[z][y] = new int[levelpointer->getX()];
						for (int x = 0; x<levelpointer->getX(); x++)
						{
							//fills the 3d array with data using these nested for loops.
							inFile >> levelpointer->array[z][y][x];
						}
					}
				}
				//reads in the final 3 data numbers and sets them accordingly.
				inFile >> start1;
				levelpointer->setZstart(start1);
				inFile >> start2;
				levelpointer->setXstart(start2);
				inFile >> start3;
				levelpointer->setYstart(start3);
		//closes the file and returns a pointer.
		inFile.close();
		return levelpointer;

}

void LevelClass::writeLevel(string in, LevelClass* n)
{
	//output file stream creation.
	ofstream myfile;
	//opening the file
	myfile.open(in, ios::out);
	//formatting for the output using the accessor methods of the class. 
	myfile << n->getName() <<"\n";
	myfile << "\n";
	myfile << n->getZ() << "\n";
	myfile << n->getX() << "\n";
	myfile << n->getY() << "\n";
	myfile << "\n";
	//nested for loops for the 3d array like above used to output the 3d array to the file.
	for (int z = 0; z < n->getZ(); z++)
	{
		for (int y = 0; y < n->getY(); y++)
		{

			for(int x = 0; x < n->getX(); x++)
			{
				//writes the 3d array to the file.
				myfile << n->array[z][y][x]<< " ";
			}
			myfile << "\n";

		}
		myfile << "\n";
	}
	//writes the last 3 numbers of the level to the file with the proper formatting.
	myfile << n->getZstart() << " ";
	myfile << n->getXstart() << " ";
	myfile << n->getYstart() << " ";
	//closes the file.
	myfile.close();
}

//retrieval and accessor methods i made for different variables. 
string LevelClass::getName()const
{
	return name;
}

int LevelClass::getZ()const
{
	return z;
}

int LevelClass::getX()const
{
	return x;
}

int LevelClass::getY()const
{
	return y;
}

void LevelClass::setName(string in)
{
	name = in;
}
void LevelClass::setZ(int in)
{
	z = in;
}
void LevelClass::setX(int in)
{
	x = in;
}
void LevelClass::setY(int in)
{
	y = in;
}


int LevelClass::getXstart()const
{
	return xstart;
}
int LevelClass::getYstart()const
{
	return ystart;
}
int LevelClass::getZstart()const
{
	return zstart;
}


void LevelClass::setZstart(int in)
{
	zstart = in;
}
void LevelClass::setXstart(int in)
{
	xstart = in;
}
void LevelClass::setYstart(int in)
{
	ystart = in;
}

