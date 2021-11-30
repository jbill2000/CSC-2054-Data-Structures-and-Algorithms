#include "HashTable.h"
#include "Train.h"
#include <iostream>
using namespace std;
int main()
{
	//creates trains abnd hash table
	Train* t1 = new Train("4-4-2", 343);
	Train* t2 = new Train("2-8-0", 344);
	Train* t3 = new Train("4-0-4", 345);

	HashTable* Hash=new HashTable();
	//prints the table blank
	Hash->print();
	cout << "Original Print:"<<"\n";
	//inserts and prints
	Hash->insert(t1);
	Hash->insert(t2);
	Hash->insert(t3);
	Hash->print();
	cout << "print after adding same 3 again:" << "\n";
	//inserts same 3 again and prints
	Hash->insert(t1);
	Hash->insert(t2);
	Hash->insert(t3);
	Hash->print();
	
	cout << "\n";
	//new trains created
	Train* t4 = new Train("2-8-0", 1);
	Train* t5 = new Train("2-8-0", 2);
	Train* t6 = new Train("2-8-0", 3);
	Train* t7 = new Train("12-0-0", 42);
	Train* t8 = new Train("12-0-12", 84);
	Train* t9 = new Train("2-2", 2);
	Train* t10 = new Train("4-4", 4);
	//inserts and prints
	Hash->insert(t4);
	Hash->insert(t5);
	Hash->insert(t6);
	Hash->insert(t7);
	Hash->insert(t8);
	Hash->insert(t9);
	Hash->insert(t10);
	cout << "print after adding more trains:\n";
	Hash->print();
	cout << "\n";
	//removes 3
	Hash->remove(t1);
	Hash->remove(t2);
	Hash->remove(t3);
	//creates a new train
	Train* t11 = new Train("2-8-0", 99);
	//inserts and removes followed by a final print. 
	Hash->insert(t11);
	Hash->remove(t11);
	cout << "print after deleteing the trains:\n" ;
	Hash->print();



	
	



}