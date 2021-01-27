#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int[], int);
void bubbleSort(int[], int);
void showArray(int[], int);

int main()
{
	const int SIZE = 8;
	int arr1[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };
	cout << "\nArray before sorting: ["; showArray(arr1, SIZE); cout << "\b]\n";
	bubbleSort(arr1, SIZE);
	cout << "\nArray after sorting: ["; showArray(arr1, SIZE); cout << "\b]\n";
	cout << "\nArray before sorting:["; showArray(arr1, SIZE); cout << "\b]\n";
	selectionSort(arr1, SIZE);
	cout << "\nArray after sorting: ["; showArray(arr1, SIZE); cout << "\b]\n";
	cout << endl;
	   	  
	return 0;
}

void bubbleSort(int values[], int size)
{
	cout << "Now performing the bubble sort\n";
	cout << "-------------------------\n";
	bool swap;
	int temp;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (values[count] > values[count + 1])
			{
				temp = values[count];
				values[count] = values[count + 1];
				values[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

void selectionSort(int values[], int size)
{
	int startScan, minIndex, minValue;
	int pass = 1;

	cout << "Now performing the selection sort\n";
	cout << "-------------------------\n";
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = values[startScan];

		for (int index = startScan + 1; index < size; index++)
		{
			if (values[index] < minValue)
			{
				minValue = values[index];
				minIndex = index;
			}
		}

		values[minIndex] = values[startScan];
		values[startScan] = minValue;

		pass++;
	}
}

void showArray(int values[], int size)
{
	for (int count = 0; count < size; count++)
		cout << values[count] << " ";
}