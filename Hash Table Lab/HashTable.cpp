#include "HashTable.h"
#include <list>
#include <iostream>
using namespace std;
//hash table constructor sets num of entries and size and creates a table
HashTable::HashTable()
{
	numberOfEntries = 0;
	sizeOfTable = 2;
	table = new list<Train*>[sizeOfTable];
}
//insert hashes for an index then iterates through the table if no duplicate is found it adds it to the list. and increases num of entries. If num of entries is bigger than size it calls rehash. 
bool HashTable::insert(Train* in)
{
	int store = in->hash(sizeOfTable);
	
	//I want to iterate through the list and check if the train is in there
	list<Train*>::iterator it;
	bool found = false;
	//iterates through the table if no duplicate is found it adds it to the list. if found sets found to true
	for (it = table[store].begin(); it != table[store].end(); ++it)
	{
		
		if (*it == in)
		{
			found = true;

		}
	
			
	}
	//if found is false add it to front.
	if (found == false)
	{
 		table[store].push_front(in);
		numberOfEntries++;
	}
	else
	{
		//do nothing
	}
	
	//if entries is greaster than size * 2 it will call rehash.
	if (numberOfEntries > sizeOfTable * 2)
	{
		rehash(in);
	}
	return true;


}
//returns size
int HashTable:: getSize()
{
	return sizeOfTable;
}
//print prints out the table
void HashTable::print()
{
	list<Train*>::iterator it2;
	//for loop and iterator for formatting and acessibility loops through table and prints out the values. 
	for (int i = 0; i < sizeOfTable; i++)
	{
		cout << i << ":";
		for (it2 = table[i].begin(); it2 != table[i].end(); ++it2)
		{
	
			cout << "  " << *it2;

		}
		cout << "\n";
	}
	
}
//find takes in a train * basically same as insert except returns a bool and doesnt add it to the table.
bool HashTable::find(Train* in)
{
	int index = in->hash(sizeOfTable);

	list<Train*>::iterator it;
	bool found = false;
	//iterator
	for (it = table[index].begin(); it != table[index].end(); ++it)
	{
		if (*it == in)
		{
			found = true;
			return true;
		}
	}
	if (found == false)
	{
		return false;
	}
}
//remove removes a value from the table
void HashTable::remove(Train* in)
{
	int indexer = in->hash(sizeOfTable);
	list<Train*>::iterator it;
	bool found = false;
	//if the value is found it will remove the value at the hashed index.
	if (find(in)==true)
	{
		table[indexer].remove(in);
		numberOfEntries--;
	}
	else
	{
		//do nothing
	}
}
//rehash hashes again
unsigned int HashTable::rehash(Train* in)
{
	//vector and iterator creation
	vector<Train*>* storage = new vector<Train*>;
	
	
	list<Train*>::iterator it;


	//stores the table data in a vector
	for (int i = 0; i < sizeOfTable; i++)
	{
		for (it = table[i].begin(); it != table[i].end(); ++it)
		{
			storage->push_back(*it);
			
		}
		
	}

	//sets some variables
	sizeOfTable = sizeOfTable * 2;
	numberOfEntries = 0;
	//creates a new table
	list<Train*>* table2;
	table2 = new list<Train*>[sizeOfTable];
	//sets table to table 2
	table = table2;

	//for loop to insert the data into the new table
	for (int i = 0; i < storage->size(); i++)
	{
		
		insert(storage->operator[](i));
		
	}

	return 0;
}
//operator overloading for print. 
ostream& operator << (ostream& out, list<Train*> t)
{
	
	out << t;
	return out;
}


