
#include "Tree.h"
#include "Node.h"
#include <string>
#include <iostream>
using namespace std;
//private method to insert values into the tree
void Tree::Insert(Node* n, int toInsert)
{
	//if the node is less than the one you want to insert
	if (n->getValue() > toInsert)
	{
		//if n get left is not null recurse.
		if (n->getLeft() != NULL)
		{
			Insert(n->getLeft(), toInsert);
		}
		//if get left is null set a new node with the value to the right.
		else if (n->getLeft() == NULL)
		{
			n->setLeft(new Node(toInsert));
		}
	}
	//if the node is greater than the one you want to insert
	if (n->getValue() < toInsert)
	{
		//if n get right is not null recurse.
		if (n->getRight() != NULL)
		{
			Insert(n->getRight(), toInsert);
		}
		//if get right is null set a new node with the value to the right.
		else if (n->getRight() == NULL)
		{
			n->setRight(new Node(toInsert));
		}
	}
	//if n get value is null do nothing
	if (n->getValue() == NULL)
	{
		//do nothing
	}
}
//public method to 
void Tree::Insert(int toInsert)//driver
{
	//if root is null create a new node with the val
	if (root == NULL)
	{
		root = new Node(toInsert);
	}
	//recurse
	else
		Insert(root, toInsert);
}
//private method to  find a node in the tree
int Tree::Find(Node* n, int toFind)
{
	//if n is null we return -1
	if (n == NULL)
	{
		return -1;
	}
	//if n get value is > the val you want to find print the val and recurse by grabbing the left node
	if (n->getValue() > toFind)
	{
		cout << n->getValue()<< " ";
		return Find(n->getLeft(), toFind);
	}
	//if n get value is < the val you want to find print the val and recurse by grabbing the right node
	if (n->getValue() < toFind)
	{
		cout << n->getValue()<< " ";
		return Find(n->getRight(), toFind);
	}
	//if n get val is equal to find print the value and return it.
	if (n->getValue() == toFind)
	{
		cout << toFind << " ";
		return toFind;
	}
}
//public method to recurse the previous find. 
int Tree::Find(int value)
{
	return Find(root, value);
}
//public method for the vertical in order
void Tree::inOrder()//driver
{
	if (root != NULL)
	{
		inOrder(root,0);
	}

}
//private method to print the tree in vertical order
void Tree::inOrder(Node* n,int tracker)
{
	//if n get left is not null recurse upon it.
	if (n->getRight() != NULL)
	{
		tracker++;
		 inOrder(n->getRight(),tracker);
		 tracker--;
		 //cout << n->getValue();
	}
	//prints the --
	for (int i = 0; i < tracker; i++)
	{
		
		cout << "--";
	}
	//prints the val
	cout << n->getValue() << "\n";
	//if n get right is not null recurse upon it.
	if (n->getLeft() != NULL)
	{
		tracker++;
		inOrder(n->getLeft(),tracker);
		tracker--;
	}
	

	

}
//private method to find the height of the tree
int Tree::getHeight(Node* paTrick)const
{
	//if node is null return -1
	if (paTrick == NULL)
	{
		return -1;
		//meaning there is nothing in the tree
	}
	//set an int height to the left and right via recursion
	int height1 = getHeight(paTrick->getLeft());
	int height2 = getHeight(paTrick->getRight());
	//if height 1 > height 2 return height 1+ 1
	if (height1 > height2)
	{
		return height1 + 1;
	}
	//else return height 2+ 1
	else
	{
		return height2 + 1;
	}


}
//public method to get the height of the tree
int Tree::getHeight()const
{
	//if this is null return 0
	if (this == NULL)
	{
		return 0;
	}
	//else recurse 
	else
		return getHeight(root);

}
//private method to print the tree horizontallyy
void Tree::inOrderH(Node* n, string* in, int height)
{
//if n is null return nothing
		if (n == NULL)
		{
			return;
		}
	//increments a tracker var
		trackeroni++;
		//recurses via the left
		inOrderH(n->getLeft(), in, height);
		trackeroni--;
		//for loop 
		for (int i = 0; i < height+1; i++)
		{
			//if i is height - tracker
			if (i == (height-trackeroni))
			{
				//if n get val < is a single digit add this many spaces and add the value
				if (n->getValue() < 10)
				{
					in[i] += "  ";
					in[i] += to_string(n->getValue());
				}
				//else add the value
				else
				{

					in[i] += to_string(n->getValue());

				}



			}
			//else add spaces
			else
			{
				in[i] += "   ";

			}


		}

		trackeroni++;
		//recurses on right
		inOrderH(n->getRight(), in, height);
		//subtracts from trackeroni.
		trackeroni--;

	


	
	

	
	
}
//public method for the inOrderH
void Tree::inOrderH()
{
	//sets height to the height of the tree+1
	int height = getHeight();
	//sets trackeroni to 0 for use later
	trackeroni = 0;
	//declares and instantiates the array
	string* in;
	in = new string[height+1];
	in[0] = "";
	//recurses 
	inOrderH(root, in, height);
	
	//int checkeroni = getHeight();
	//for loop to print the array.
	for (int j = height; j>=0; j--)
	{
		cout <<in[j] << "\n";
	}
}	