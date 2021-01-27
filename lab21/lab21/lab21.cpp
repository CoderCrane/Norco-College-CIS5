#include "pch.h"
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 20;

int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main()
{
	int comparisons;

	int tests[ARRAY_SIZE] = { 101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600 };

	cout << "Searching for the value 521, " << "located near the end of the array.\n";

	comparisons = linearSearchBench(tests, ARRAY_SIZE, 521);

	cout << "The linear search made " << comparisons << " comparisons.\n";

	comparisons = binarySearchBench(tests, ARRAY_SIZE, 521);

	cout << "The binary search made " << comparisons << " comparisons.\n";
	   	  
	return 0;
}

int linearSearchBench(int values[], int size, int value)
{
	bool found = false;
	int comparisons = 0;
	int index = 0;

	while (!found && index < size)
	{
		comparisons++;
		if (values[index++] == value)
			found = true;
	}
	return comparisons;
}

int binarySearchBench(int array[], int size, int value)
{
	bool found = false;

	int first = 0;
	int middle;
	int last = size - 1;
	int comparisons = 0;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;

		comparisons++;

		if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return comparisons;
}