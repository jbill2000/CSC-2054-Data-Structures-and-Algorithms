
//Program created by Jeremy Bill as part of Lab 3.
#include <iostream>
#include <vector>
#include "Menu.h"
#include "add.h"
#include <cmath>
using namespace std;

int main()
{
	
		//Part 1 of the Lab
	//Variables
	int aint=8;
	int bint=11;
	int* aPtr;
	int* bPtr;
	int* cPtr;
	int* dPtr;
	int* ePtr;
	//Setting b to b and a to a
	bPtr = &bint;
	aPtr = &aint;
	//Setting the values
	*aPtr = 8;
	*bPtr = 11;
	//Printing the first stuff 
	cout << "aptr:" << *aPtr<<"\n";
	cout << "bptr:" << *bPtr<<"\n";
	cout << "aptr:" << aPtr << " " << "bptr:" << bPtr<< "\n";

	//Swapping
	

	//Sets d to A so d becomes 8
	dPtr = aPtr;
	//Sets e to b so e becomes 11
	ePtr = bPtr;
	//sets b to d so b becomes 8
	bPtr = dPtr;
	//sets c to e so c becomes 11
	cPtr = ePtr;
	//sets a to c so a becomes 11
	aPtr = cPtr;
	
	//Print after swap
	cout << "aptr:" << *aPtr << "\n";
	cout << "bptr:" << *bPtr << "\n";
	cout << "aptr:" << aPtr << " " << "bptr:" << bPtr << "\n";


	//Part 2 of the Lab

	//Creates vector and initializes it
	vector <char*> * vectptr;
	vectptr = new vector<char*>();
	//sets letter to a for use later
	char letter = 'a';
	//for loop to create the memory in the vector
	for (int i = 0; i < 26; i++)
	{
	    (*vectptr).push_back(new char);
	}
	//For loop that access each piece of memory in the vector sets it to letter and increments letter there by changing the letter from a all the way to z.
	for (int j = 0; j < 26; j++)
	{
		*(*vectptr).at(j) = letter;
		letter++;
	}
	//prints out the vector
	for (int k = 0; k < 26; k++)
	{
		cout << *(*vectptr).at(k) << "\n";
	}
	//deletes the whole vector
	for (int m = 0; m < 26; m++)
	{
		delete vectptr->at(m);
	}

	//Part 3
	//variables
	int num = 15;
	int calcnum = 0;
	int exp = 4;
	int indexer = 0;
	int* numarray = new int[num];
	//for loop that sets a variable equal to x then does that num to the 4th power and inputs it into the dynamic array
	for (int x = 0; x < 15; x++)
	{
		  calcnum = x;
		  calcnum = pow(calcnum,4);
		  indexer = calcnum;
		 numarray[x] = indexer;
	}
	//prints out the dynamic array
	for (int y = 0; y < 15; y++)
	{
		cout << "i:" << numarray[y] << " ";
	}
	//calls delete on the array to avoid a mem leak.
	delete [] numarray;
	cout << "\n";
	//Part 4
	//Vector creation and initalization. 
	vector <int*>* intvectptr;
	intvectptr = new vector<int*>();
	//variable creation
	int check = 0;
	char userinput;

	int index;
	int value;

	int calc1;
	int calc2;
	int answer;
	//for loop to create the memory in the vector
	for (int a = 0; a < 10; a++)
	{
		(*intvectptr).push_back(new int);
	}

	//do while for the program
	do
	{
			//prints the menu and asks for user input
		printmenu();
		cin >> userinput;
		//switch statement based on user input
		switch (userinput)
		{
			//S case sets a value to a particular index
		case 's':
		{
			//Takes in index and value
			cout << "Please enter two values in the format index value\n";
			cin >> index;
			cin >> value;
			//if index is bigger or equal to 10 or less than 0 it is out of range
			if (index >= 10 || index < 0)
			{
				cout << "That index does not exist/Out of Range\n ";
			} 
			//else the value at index is whatever the user inputs
			else
			{


				*(*intvectptr).at(index) = value;
			}
			break;
		}
		//p case prints out a value at a particular index
		case 'p':
		{
			cout << "What index would you like to print\n";
			cin >> index;
			//if index is bigger or equal to 10 or less than 0 it is out of range
			if (index >= 10 || index <0)
			{
				cout << "That index does not exist\n ";
			}
			//If the value at index is null it cannot be print
			else if (intvectptr->at(index) == NULL)
			{
				cout << "Index " << index << " is null and cannot be print\n";
			}
			//else it will print the value at index
			else
			{
				cout << *(*intvectptr).at(index) << "\n";
			}
			
			
			break;

		}
		//d case deletes mem
		case 'd':
		{
				//takes in an index for which mem to delete
			cout << "What memory would you like to delete?\n";
				cin >> index;
				//if index is bigger or equal to 10 or less than 0 it is out of range
				if (index >= 10 || index < 0)
				{
					cout << "That index does not exist\n ";
				}
				//if value at index is null it cannot be deleted
				else if (intvectptr->at(index) == NULL)
				{
					cout << "Index " << index << " Is null and cannot be deleted\n";
				}
				//else it will delete the value at that index and set it to NULL.
				else
				{


					delete intvectptr->at(index);
					intvectptr->at(index) = NULL;
				}
				break;


		}
		//I case instantiates memory
		case 'i':
		{
			//takes in index
			cout << "What memory would you like to instantiate?\n";
			cin >> index;
			//if value at index is not null its active mem
			if (intvectptr->at(index) != NULL)
			{
				cout << "Index " << index << " is active memory\n";
			}
			//else it will instantitate the memory
			else 
			{


				(*intvectptr).at(index) = new int;
			}
			break;

		}
		//W case takes in two values and adds them and sets those indexes to the added value
		case 'w':
		{
				//takes in two values and adds them and sets those indexes to the added value
			cout << "What values would you like to add?\n";
			cin >> calc1;
			cin >> calc2;
			//if either one of the two values is NULL they cannot be added and this avoids a crash
			if (intvectptr->at(calc1) == NULL || intvectptr->at(calc2) ==NULL)
			{
			cout << "Index " << calc1 << " and " <<calc2 << " cannot be added becuase one of them is null\n";
			}
			//else
			else
			{
				//passes the values at calc 1 and 2 into the add function i created and assigns the result of that to answer.
				answer = add((*intvectptr).at(calc1), (*intvectptr).at(calc2));
				//sets the values at calc 1 and 2 to answer
				*(*intvectptr).at(calc1) = answer;
				*(*intvectptr).at(calc2) = answer;
			}
			
			

			break;



		}
		//Q case quits the program
		case 'q':
		{
			//deletes the ptr to avoid a mem leak and sets check = 1 which makes the do while statement false and quits the program. 
			delete intvectptr;
			check = 1;
			break;

		}

		}







	     }while (check != 1);

	 





}