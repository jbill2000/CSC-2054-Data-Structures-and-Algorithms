//Created by Jeremy Bill as part of Lab 4.
#include <iostream>
#include "TempGauge.h"
#include "PrintMenu.h"
#include "Pond.h"
#include "Duck.h"
using namespace std;
int main()
{
	//Part 1
	//creates the objects
	TemperatureGauge temp1;
	TemperatureGauge temp2(120);
	//prints out 1s temp in f and c
	cout << temp1.getTempinF() << "\n";
	cout << temp1.getTempinC() << "\n";
	//prints out 2s temp in f and c
	cout << temp2.getTempinF() <<"\n";
	cout << temp2.getTempinC() << "\n";
	//sets 1 to -80 and prints it in f
	temp1.setTempinF(-80);
	cout << temp1.getTempinF() << "\n";
	//sets 1s temp to 185 and prints it in f
	temp1.setTempinF(185);
	cout << temp1.getTempinF() << "\n";
	//sets ones temp to 59.5 and prints it in c
	temp1.setTempinF(59.5);
	cout << temp1.getTempinC() << "\n";
	//sets 2 to 1
	temp2 = temp1;
	//sets 2 to 33 and prints it in c
	temp2.setTempinF(33);
	cout << temp1.getTempinC() << "\n";

	//Part 2
	//Variables
	int select = 0;
	string name="a";
	int height = 0;
	int check = 0;
	//object creations
	Pond duckpond = Pond();
	Duck duck = Duck(name, height);
	//do while
	do
	{
		//prints menu and takes in user input
		printMenu();
		cin >> select;

		switch (select)
		{
			//case 1 asks height of duck takes it in calls constructor for duck and adds it to the pond. 
		case 1:
		{
			cout << "What is the name and height of your duck?\n";
			cin >> name;
			cin >> height;
			//creates the duck
			duck = Duck(name, height);

			//adds to the pond
			duckpond.addDuck(duck);
			
			break;
		}
		//flys the duck
		case 2:
		{
			cout << "What is the name of the duck you wish to fly?\n";
			cin >> name;
			//flys the duck in the pod through this method which calls fly inside it. 
			duckpond.modDuck(name);




			break;
		}
		//prints the pond
		case 3:
		{
			//prints the pond
			duckpond.printPond();
			break;
		}
		//quits.
		case 4:
		{
			//sets check to 1 to end the loop
			check = 1;
			break;
		}

		}
		//end of do while
	} while (check != 1);




}