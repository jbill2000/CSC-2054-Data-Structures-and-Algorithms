#include "Node.h"
#include "Tree.h"
#include <iostream>
using namespace std;
int main()
{
	//creates the tree and inserts the values
	Tree t;
	t.Insert(8);
	t.Insert(4);
	t.Insert(12);
	t.Insert(2);
	t.Insert(6);
	t.Insert(10);
	t.Insert(14);
	t.Insert(1);
	t.Insert(9);
	t.Insert(11);
	t.Insert(5);
	t.Insert(13);
	t.Insert(15);
	t.Insert(16);
	//calls find
	cout << t.Find(4) << "\n";
	cout << t.Find(5) << "\n";
	cout << t.Find(6) << "\n";
	cout << t.Find(10) << "\n";
	cout << t.Find(9) << "\n";
	//calls the inorder function. 
	t.inOrder();
	//calls horizontal print in order
	t.inOrderH();

	



}