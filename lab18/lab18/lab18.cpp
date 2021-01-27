#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 10;

void displayGreaterThan(int[], int);

int main()
{
	int number;

	int numbers[SIZE] = { 1, 23, 43, 54, 4, 34, 2, 5, 7, 9 };

	cout << "Enter a number: ";
	cin >> number;

	displayGreaterThan(numbers, number);
	
	return 0;
}

void displayGreaterThan(int values[], int n)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (values[i] > n)
		{
			cout << values[i] << endl;
		}
	}
}