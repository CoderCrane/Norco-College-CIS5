#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int maxDays;
	double pay;
	double grandTotal;

	pay = 0.01;
	
	grandTotal = 0.0;

	cout << "For how many days will the pay double? ";
	cin >> maxDays;

	while (maxDays < 1)
	{
		cout << "The number of days must be at least one.\n";
		cout << "Enter the number of days:  ";
		cin >> maxDays;
	}

	cout << "\nDay\t\tTotal pay\n";
	cout << "------------------------------\n";
	cout << fixed << showpoint << setprecision(2);

	for (int day = 1; day <= maxDays; day++)
	{
		cout << day << "\t\t$" << setw(10) << pay << endl;

		grandTotal += pay;

		pay *= 2;
	}

	cout << "------------------------------\n";
	cout << "Total" << "\t\t$"
		<< setw(10) << grandTotal << endl;
	   


	return 0;
}