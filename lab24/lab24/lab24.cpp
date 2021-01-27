#include "pch.h"
#include <iostream>
using namespace std;

int* reverseArray(int[], int);
void showArray(int*, int);

int main()
{
	const int SIZE = 10;
	int values[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = &values[0];

	cout << "The contents of the original array are:\n";
	showArray(ptr1, SIZE);

	int* arrCopy = reverseArray(values, SIZE);

	cout << "\n\nThe contents of the array in REVERSE order:\n";
	showArray(arrCopy, SIZE);
	cout << "\n\nHave a nice day!\n";
	   	  
	return 0;
}

int* reverseArray(int arr[], int size)
{
	int sourceIndex;
	int targetIndex;

	int* copy = new int[size];

	for (sourceIndex = size - 1, targetIndex = 0;
		sourceIndex >= 0;
		sourceIndex--, targetIndex++)
	{
		copy[targetIndex] = arr[sourceIndex];
	}
	return copy;
}

void showArray(int *p1, int size)
{
	for (int index = 0; index < size; index++, p1++)
		cout << *p1 << " ";
	cout << endl;
}