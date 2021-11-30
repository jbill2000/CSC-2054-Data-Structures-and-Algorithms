//created as part of Lab 8 by Jeremy Bill
#include "Card.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
//functions that were given to us to generate random numbers 
int currentNumber;
void simpleSetRand(int passedInNum)
{
	currentNumber = passedInNum;
}


int simpleRand()
{
	return currentNumber = ((currentNumber + 1) * (currentNumber + 1)) % 17;
}

//shuffle method out of class 
void shuffle(queue<Card>& in)
{
	//creates a card vector
	vector <Card> vec;
	//adds cards to the vector from the queue
	for (int l = 0; l < 26; l++)
	{
		vec.push_back(in.front());
		in.pop();
	}
	//swapping variables
	int i = 0;
	int j = 1;
	Card swapper=1;
	//for loop to swap cards accordingly.
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 1; j < vec.size(); j++)
		{

			if (simpleRand() % 2 == 0)
			{
				swapper = vec[j];
				vec[j] = vec[i];
				vec[i] = swapper;
			}

		}


	}
	//adds the data back into a queue.
	for (int k = 0; k < vec.size(); k++)
	{
		in.push(vec[k]);
		
	}
	
}
int main()
{
	//vars
	queue<Card> pdeck;
	queue<Card> cdeck;
	vector<queue<Card>> vec;
	vector<Card> popped;
	int seed;
	bool confirm = false;
	//adds cards to deck 1 and 2.
	for (int i = 0; i< 13; i++)
	{
		pdeck.push((Card)i);
		pdeck.push((Card)i);
	}
	for (int i = 0; i < 13; i++)
	{
		cdeck.push((Card)i);
		cdeck.push((Card)i);
	}
	

	//asks the user what seed they would like
	cout << "What seed would you like?: ";
	cin >> seed;

	//call the seed creation function
	simpleSetRand(seed);
	//adds the queues to a vector
	vec.push_back(pdeck);
	vec.push_back(cdeck);
	//Then it shuffles and adds to the vector for each deck
	shuffle(pdeck);
	//vec.push_back(pdeck);
	shuffle(cdeck);
	//vec.push_back(cdeck);

	//now we play the game
	//do while
	do
	{
		//cout the value of deck 1 vs deck 2.
		cout << pdeck.front().getVal() << "vs" << cdeck.front().getVal()<<"\n";
		// if the value of deck 1 is greater than the value of deck 2
		if (pdeck.front() > cdeck.front())
		{
			
			//adds the values to deck 1
			pdeck.push(cdeck.front());
			pdeck.push(pdeck.front());
			//removes the card from c deck and one card from p deck to keep the numbers intact. 
			cdeck.pop();
			pdeck.pop();
		}
		// if the value of deck 2 is greater than the value of deck 1
		else if (cdeck.front() > pdeck.front())
		{
			//adds the values to deck 2
			cdeck.push(pdeck.front());
			cdeck.push(cdeck.front());
			//removes the card from c deck and one card from p deck to keep the numbers intact. 
			cdeck.pop();
			pdeck.pop();
		}
		//else if the vals are equal
		else if (cdeck.front() == pdeck.front())
		{
			//do while
			do {

				//prints out war and the values accordingly
				cout << "WAR!!\n";

				cout << "facedown player1: " << pdeck.front().getVal() << "\n";
				//adds the card to a vector of removed cards for access later
				popped.push_back(pdeck.front());
				//pops the card
				pdeck.pop();

				cout << "facedown player1: " << pdeck.front().getVal() << "\n";
				//adds the card to a vector of removed cards for access later
				popped.push_back(pdeck.front());
				//pops the card
				pdeck.pop();

				cout << "facedown player2: " << cdeck.front().getVal() << "\n";
				//adds the card to a vector of removed cards for access later
				popped.push_back(cdeck.front());
				//pops the card
				cdeck.pop();

				cout << "facedown player2: " << cdeck.front().getVal() << "\n";
				//adds the card to a vector of removed cards for access later
				popped.push_back(cdeck.front());
				//pops the card
				cdeck.pop();
				//comparisons for the third card draw.

				//if deck 1 > 2 and either size is not 1 adds the popped cards to deck 1 then clears it for use later and pops the current cards and sets confirm to true to end a do while.
				if (pdeck.front() > cdeck.front() && pdeck.size() != 1 || cdeck.size() != 1)
				{
					for (int i = 0; i < popped.size(); i++)
					{
						pdeck.push(popped[i]);
					}
					popped.clear();
					cdeck.pop();
					pdeck.pop();
					confirm = true;
				}
				//if deck 2 > 1 and either size is not 1 adds the popped cards to deck 2 then clears it for use later and pops the current cards and sets confirm to true to end a do while.
				else if (cdeck.front() > pdeck.front() && pdeck.size() != 1 || cdeck.size() != 1)
				{
					for (int i = 0; i < popped.size(); i++)
					{
						cdeck.push(popped[i]);
					}
					popped.clear();
					cdeck.pop();
					pdeck.pop();
					confirm = true;
				}

			} while (confirm == false);
			
		}
		//ending while condition that says if they are not empty it will keep going.
	} while(pdeck.empty() != true && cdeck.empty() != true);
	//if either deck is empty it will say player 1 or 2 wins. 
	if (pdeck.empty() == true)
	{
		cout << "Player 2 wins!";
	}
	else if (cdeck.empty() == true)
	{
		cout << "Player 1 Wins";
	}




}


