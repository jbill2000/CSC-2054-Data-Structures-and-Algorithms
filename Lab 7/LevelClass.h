//created by Jeremy Bill as part of Lab 7
#pragma once
#include <string>
#include <iostream>
using namespace std;
class LevelClass
{
	//public functions of my level class. The read level and write level as well as a great many get and set accessor and mutator methods respectively. 
public:
	LevelClass *readLevel(string in);
	void writeLevel(string in, LevelClass* n);
	string getName()const;
	int getX()const;
	int getY()const;
	int getZ()const;
	void setName(string in);
	void setZ(int in);
	void setX(int in);
	void setY(int in);

	int getXstart()const;
	int getYstart()const;
	int getZstart()const;


	void setZstart(int in);
	void setXstart(int in);
	void setYstart(int in);
	//private variables.
private:
	int x=5;
	int y=5;
	int z=2;
	int zstart=0;
	int xstart=0;
	int ystart=0;
	string name;
	int*** array;

};