#include "Node.h"
#include "Linkedlist.h"
#include "VerticalList.h"
#include <iostream>
using namespace std;
int main()
{
	
	
	
	
	//creates 5 nodes and points them to each other 
	Node* fifth = new Node(35,NULL);
	Node* fourth = new Node(25, fifth);
	Node* third = new Node(15, fourth);
	Node* second = new Node(5, third);
	Node* head = new Node(-5, second);
	

	

	
	//creates a node variable to test 
	Node test;
	//prints from fourth onwards
	test.print(fourth);


	//part 2
	//creates new vert list pointer list
	VerticalList* list=new VerticalList();
	
	
	//prints list1
	list->print();
	//increments list 1
	list->increment();
	//prints list 1 again
	list->print();
	//creates list 2 via copy constructor
	VerticalList* list2 = new VerticalList(*list);

	//increments list 1
	list->increment(); 
	//prints list 1
	list->print();
	//prints list 2
	list2->print();
	//creates list 3
	VerticalList* list3=new VerticalList();
	//sets list 3 to list 1 via equal operator
	*list3 = *list;
	//increments list 3
	list3->increment();
	//prints list 1
	list->print();
	//prints list 2
	list2->print();
	//prints list 3
	list3->print();
	//increments list 1
	list->increment();
	//increments list 2
	list2->increment();
	//increments list 3
	list3->increment();
	//prints all 3 lists
	list->print();

	list2->print();

	list3->print();
	//Call deletes on them since they are pointers once its all done
	delete list;
	delete list2;
	delete list3;



	
	
}