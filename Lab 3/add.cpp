//Created as part of Lab 3.
#include <iostream>
#include "add.h"
using namespace std;

//Function that takes in two indexes from the pointer vectr in main adds them together and returns the result.
int add(int* ptrparam1, int* ptrparam2)
{
	int result = (*ptrparam1) + (*ptrparam2);
	return result;
}