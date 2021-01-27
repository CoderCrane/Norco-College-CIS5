#include "pch.h"
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 12;
int getHighest(int[], int);
int getSum(int[], int);
double getAverage(int[], int);

int main()
{
	int numbers[ARRAY_SIZE] = { 56, 45, 13, 6, 345, 87, 987, 23, 3, 237, 19, 67 };
	cout << "The highest value is " << getHighest(numbers, ARRAY_SIZE) << endl;
	cout << "The sum of the numbers is " << getSum(numbers, ARRAY_SIZE) << endl;
	cout << "The average of the numbers is " << getAverage(numbers, ARRAY_SIZE) << endl;
	return 0;
}

int getHighest(int values[], int size)
{
	int highest = values[0];

	for (int i = 1; i < size; i++)
	{
		if (values[i] > highest)
			highest = values[i];
	}
	return highest;
}

int getSum(int values[], int size)
{
	int sum = 0;
	
	for (int i = 0; i < size; i++)
		sum += values[i];

	return sum;
}

double getAverage(int values[], int size)
{
	return getSum(values, size) / static_cast<double>(size);
}