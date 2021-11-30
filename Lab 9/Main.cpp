#include "sort.h"
#include <vector>
#include <iostream>
using namespace std;
//creates a vector taking a size and seed and swaps it
vector<int> vecCreate(int size, int seed)
{
	vector<int> vec;
	vec.resize(size);
	//fills vector
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = i;
	}
	//randoms
	srand(seed);
	//swaps values
	for (int j = 0; j < vec.size(); j++)
	{
		int q = rand() % size;

		int swap = vec[j];

		vec[j] = vec[q];
		vec[q] = swap;

	}
	//returns it
	return vec;

}
//count inversions
int countInv(vector<int>in)
{
	int count = 0;
	for (int i = 0; i < in.size(); i++)
	{
		for (int k = i+1; k < in.size(); k++)
		{

			//if in i>k count++
			if (in[i] > in[k])
			{
				count++;
			}
			
			
		}
		
	}
	return count;
}


int main()
{
	//vars and asks for user input of vars
	int size;
	int seed;
	cout << "What size of a list would you like to create?: ";
	cin >> size;

	cout << "What Random seed would you like to use?: ";
	cin >> seed;

	//creation of vectors for the randomized normal vec
	vector<int> ins=vecCreate(size, seed);
	vector<int> shell = ins;
	vector<int> heap = ins;
	vector<int> merge = ins;
	vector<int> quick = ins;
	vector<int> rev = ins;

	//reverses the vector.
	reverse(rev.begin(),rev.end());


	//Vectors to store reversed data

	vector<int> insrev = rev;
	vector<int> shellrev = rev;
	vector<int> heaprev = rev;
	vector<int> mergerev = rev;
	vector<int> quickrev = rev;




	//creates presorted stuff
	vector<int>presort;
	presort.resize(size);

	for (int j = 0; j < presort.size(); j++)
	{
		presort[j] = j;
	}

	// vectors storing presort stuff
	vector<int> inspre = presort;
	vector<int> shellpre = presort;
	vector<int> heappre = presort;
	vector<int> mergepre = presort;
	vector<int> quickpre = presort;






	//insertion print for orginal also gets time and prints time
	cout << "\n" << "Insertion: \n";
	cout << "total inversion in the original list: " << countInv(ins) << "\n";
	long long t1 = getTime();
	insertionSort(ins);
	long long t2 = getTime();
	int time = t2 - t1;

	cout << "insertion sort time: " << time << "\n";
	cout << "Total inversions after insertion sort: " << countInv(ins) << "\n";





	do 
	{
		//do while that prints out shell merge heap and quick for all 3 types. 

		//shell
		cout << "\n" << "Shell: \n";
		cout << "total inversion in the original list: " << countInv(shell) << "\n";
		 t1 = getTime();
		shellsort(shell);
		 t2 = getTime();
		 time = t2 - t1;
		cout << "shell sort time: " << time << "\n";
		cout << "Total inversions after shell sort: " << countInv(shell) << "\n";
		//Heap
		cout << "\n" << "Heap: \n";
		cout  << "total inversion in the original list: " << countInv(heap) << "\n";
		 t1 = getTime();
		heapsort(heap);
		t2 = getTime();
		 time = t2 - t1;
		cout << "heap sort time: " << time << "\n";
		cout << "Total inversions after heap sort: " << countInv(heap) << "\n";
		//Merge
		cout << "\n" << "Merge: \n";
		cout << "total inversion in the original list: " << countInv(merge) << "\n";
		 t1 = getTime();
		mergeSort(merge);
		t2 = getTime();
		 time = t2 - t1;
		cout << "merge sort time: " << time << "\n";
		cout << "Total inversions after merge sort: " << countInv(merge) << "\n";
		//Quick
		cout << "\n" << "Quick: \n";
		cout << "total inversion in the original list: " << countInv(quick) << "\n";
		 t1 = getTime();
		quicksort(quick);
		 t2 = getTime();
		 time = t2 - t1;
		cout << "quick sort time: " << time << "\n";
		cout << "Total inversions after quick sort: " << countInv(quick) << "\n";

		//reverse
		cout << "\nReverse order vector sorting: \n";

		//insert
		cout << "\n" << "Insertion: \n";
		cout << "total inversion in the original list: " << countInv(insrev) << "\n";
		long long t1 = getTime();
		insertionSort(insrev);
		long long t2 = getTime();
		int time = t2 - t1;
		cout << "insertion sort time: " << time << "\n";
		cout << "Total inversions after insertion sort: " << countInv(insrev) << "\n";

		//shell
		cout << "\n" << "Shell: \n";
		cout << "total inversion in the original list: " << countInv(shellrev) << "\n";
		t1 = getTime();
		shellsort(shellrev);
		t2 = getTime();
		time = t2 - t1;
		cout << "shell sort time: " << time << "\n";
		cout << "Total inversions after shell sort: " << countInv(shellrev) << "\n";
		//heap
		cout << "\n" << "Heap: \n";
		cout << "total inversion in the original list: " << countInv(heaprev) << "\n";
		t1 = getTime();
		heapsort(heaprev);
		t2 = getTime();
		time = t2 - t1;
		cout << "heap sort time: " << time << "\n";
		cout << "Total inversions after heap sort: " << countInv(heaprev) << "\n";
		//merge
		cout << "\n" << "Merge: \n";
		cout << "total inversion in the original list: " << countInv(mergerev) << "\n";
		t1 = getTime();
		mergeSort(mergerev);
		t2 = getTime();
		time = t2 - t1;
		cout << "merge sort time: " << time << "\n";
		cout << "Total inversions after merge sort: " << countInv(mergerev) << "\n";
		//quick
		cout << "\n" << "Quick: \n";
		cout << "total inversion in the original list: " << countInv(quickrev) << "\n";
		t1 = getTime();
		quicksort(quickrev);
		t2 = getTime();
		time = t2 - t1;
		cout << "quick sort time: " << time << "\n";
		cout << "Total inversions after quick sort: " << countInv(quickrev) << "\n";

		//pre sorted
		cout << "\nPresorted vector running time: \n";
		//insert
		cout << "\n" << "Insertion: \n";
		cout << "total inversion in the original list: " << countInv(inspre) << "\n";
		t1 = getTime();
		insertionSort(inspre);
		 t2 = getTime();
		 time = t2 - t1;
		cout << "insertion sort time: " << time << "\n";
		cout << "Total inversions after insertion sort: " << countInv(inspre) << "\n";

		//shell
		cout << "\n" << "Shell: \n";
		cout << "total inversion in the original list: " << countInv(shellpre) << "\n";
		t1 = getTime();
		shellsort(shellpre);
		t2 = getTime();
		time = t2 - t1;
		cout << "shell sort time: " << time << "\n";
		cout << "Total inversions after shell sort: " << countInv(shellpre) << "\n";
		//heap
		cout << "\n" << "Heap: \n";
		cout << "total inversion in the original list: " << countInv(heappre) << "\n";
		t1 = getTime();
		heapsort(heappre);
		t2 = getTime();
		time = t2 - t1;
		cout << "heap sort time: " << time << "\n";
		cout << "Total inversions after heap sort: " << countInv(heappre) << "\n";
		//merge
		cout << "\n" << "Merge: \n";
		cout << "total inversion in the original list: " << countInv(mergepre) << "\n";
		t1 = getTime();
		mergeSort(mergepre);
		t2 = getTime();
		time = t2 - t1;
		cout << "merge sort time: " << time << "\n";
		cout << "Total inversions after merge sort: " << countInv(mergepre) << "\n";
		//quick
		cout << "\n" << "Quick: \n";
		cout << "total inversion in the original list: " << countInv(quickpre) << "\n";
		t1 = getTime();
		quicksort(quickpre);
		t2 = getTime();
		time = t2 - t1;
		cout << "quick sort time: " << time << "\n";
		cout << "Total inversions after quick sort: " << countInv(quickpre) << "\n";





		//breaks do while

		break;

	} while (true);

}

