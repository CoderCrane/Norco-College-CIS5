#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int times;
	double principal;
	double rate;
	double interest;
	double amount;

	cout << "Enter the principal amount: ";
	cin >> principal;

	cout << "Enter the interest rate:";
	cin >> rate;

	cout << "Enter the number of times interest will be compounded: ";
	cin >> times;

	amount = principal*pow(1 + (rate*0.01 /times), times);

	interest = amount - principal;

	cout << fixed << showpoint << setprecision(2)
		<< "\nInterest Rate:   " << setw(8) << rate << "%"
		<< "\nTimes Compounded:  " << setw(8) << times
		<< "\nPrincipal:  $" << setw(8) << principal
		<< "\nInterest:  $" << setw(8) << interest
		<< "\nAmount in savings:  $" << setw(8) << amount
		<< endl << endl;

	return 0;
}