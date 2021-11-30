//created by Jeremy Bill as part of Lab 7
#include <iostream>
#include <fstream> 
#include <cassert>
#include <vector>
#include <string>
#include <iterator>
#include <map>
#include "LevelClass.h"
using namespace std;
int main()
{
	//part 1
	//creating the vector and pushing back the text
	vector <string> level;
	level.push_back("level1.txt");
	level.push_back("level2.txt");
	level.push_back("level3.txt");
	//inFile stream and string
	ifstream inFile;
	string d;
	//opens the file, intakes the string d prints it out closes the file and repeats.
	for (int i = 0; i < level.size(); i++)
	{
		inFile.open(level[i]);
		inFile >> d;
		cout << d << "\n";
		inFile.close();
	}

	//part 2
	//map and iterator creation
	map<string, LevelClass*> mymap;
	map<string,LevelClass*>::const_iterator itr;
	itr = mymap.begin();

	LevelClass* in=0;
	//inserting the data into map by calling mymap.insert
	mymap.insert(mymap.begin(), pair<string, LevelClass*>("level1.txt_OUT",in->readLevel("level1.txt_OUT")));
	mymap.insert(mymap.begin(), pair<string, LevelClass*>("level2.txt_OUT", in->readLevel("level2.txt_OUT")));
	mymap.insert(mymap.begin(), pair<string, LevelClass*>("level3.txt_OUT", in->readLevel("level3.txt_OUT")));
	//for loop that loops through the map and outputs it accordingly.
	for (itr = mymap.begin(); itr != mymap.end(); itr++)
	{
		pair<string, LevelClass*> p = *itr;
		p.second->writeLevel(p.first+"_OUT", p.second);

	}

	








	

	
}