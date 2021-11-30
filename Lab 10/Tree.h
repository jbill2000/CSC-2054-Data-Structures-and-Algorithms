#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class Tree 
{
public:

	void Insert(int toInsert);//driver
	void inOrder();//driver
	int Find(int value);
	void inOrderH();
	int getHeight()const;
	//int getrHeight(int height);



private:
	//private members
	Node* root=0;
	int height;
	
	int tracker;
	int trackeroni;
	//private functionaronis.
	int getHeight(Node* paTrick)const;
	int Find(Node* n, int toFind);
	void Insert(Node* n, int toInsert);
	void inOrder(Node* n, int tracker);
	void inOrderH(Node* n, string* in, int  height);

};