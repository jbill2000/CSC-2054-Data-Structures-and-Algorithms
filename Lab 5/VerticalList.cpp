#include "VerticalList.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;
//constructor
VerticalList::VerticalList()
{
	//for int i= 10 i <20
	for (int i = 10; i < 20; i++)
	{
			//if head is 0 it sets head to be a new node sets the value of it and sets the next to 0
		if (head == 0)
		{
			head = new Node();
			head->setValue(i);
			head->setNext(0);
		}
		//else creates a new node pointer and sets it to pointy
		else
		{
			Node* pointy = head;
			//while pointy get next is not 0 it will get the next
			while (pointy->getNext() != 0)
			{
				pointy = pointy->getNext();
			}
			//sets next pointy to be a new node
			pointy->setNext(new Node());
			//sets the value of said node
			pointy->getNext()->setValue(i);
			//sets the value of the next to be 0
			pointy->getNext()->setNext(0);
		}
	}
	
}
//print method
void VerticalList::print()
{
		//creates node pointer and sets it to head and gets the value
	Node* in = head;
	cout << "\n";
	cout << in->getValue() << " ";
	//while node in is not 0 it will get next and set it to in then get the value. If statement breaks it if null.
	while (in!= 0)
	{
		
		in = in->getNext();
		cout << in->getValue() << " ";
		if (in->getNext() == NULL)
		{
			break;
		}
	}
}
void VerticalList::increment()
{
	//creates node pointer and sets it to head
	Node* plus = head;
	int counter = 0;
	cout << "\n";
	//while pointer is not 0
	while (plus != 0)
	{
		
		//sets the value of plus to be get value +1	
		plus->setValue(plus->getValue()+1);
		//gets the next one and sets it to plus
		plus = plus->getNext();
		//if plus get next is null
		if (plus->getNext() == NULL)
		{
			//counter=plus get value +1 and sets value to counter. this is how i originally had it but didnt keep it up top.
			counter = plus->getValue() + 1;
		    plus->setValue(counter);
			
			break;
		}
	}
}
//destructor
VerticalList::~VerticalList()
{
	cout << "Calling Destructor";
	delete head;
}
//copy constructor
VerticalList::VerticalList(const VerticalList& list)
{
	//calls on equal operator
	*this = list;
	
}
//operator =
const VerticalList& VerticalList::operator=(const VerticalList& list)
{
		//creates node * list ptr and sets it to list.head->getNext
		Node* listPtr = list.head->getNext();
		//sets head to be a new node by calling on the node constructor and sets the value to be get value from the list at that point
		head = new Node(list.head->getValue(), 0);
		//creates another node * and sets it to head
		Node* myPtr = head;
		while (listPtr != 0)
		{
				//sets myptr to be a new node
			myPtr->setNext(new Node());
			//gets the next node and sets the value to list ptr get value
			myPtr->getNext()->setValue(listPtr->getValue());

			//gets the next nodes for both

			myPtr = myPtr->getNext();
			listPtr = listPtr->getNext();
		}
		
		//returns the whole list
		return *this;
	
}