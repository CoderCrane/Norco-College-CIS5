#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double weight,
		distance,
		shippingCharge;

	bool goodPackage = true;

	cout << "Weight of the package in kilograms (max 20 Kg): ";
	cin >> weight;

	cout << "Distance the package is to be shipped "
		<< "(min 10 Mi, max 3000 Mi): ";
	cin >> distance;
	cout << endl;
	
	if (weight <= 0)

	{
		cout << "Weight must be greater than zero.\n";
		goodPackage = false;
	}
	else if (weight > 20.0)
	{
		cout << "We do not ship packages of more than 20 Kg.\n";
		goodPackage = false;
	}

	if (distance < 10.0 || distance > 3000.0)
	{
		cout << "We do not ship less than 10 miles or more than 3000 miles.\n";
		goodPackage = false;
	}

	if (goodPackage)
	{
		if (weight <= 2.0)
			shippingCharge = 1.10 + (int((distance - 1) / 500) * 1.10);
		else if (weight <= 6.0)
			shippingCharge = 2.20 + (int((distance - 1) / 500) * 2.20);
		else if (weight <= 10.0)
			shippingCharge = 3.70 + (int((distance - 1) / 500) * 3.70);
		else
			shippingCharge = 4.80 + (int((distance - 1) / 500) * 4.80);

		cout << fixed << showpoint << setprecision(2);
		cout << "The shipping charge is $" << shippingCharge << "\n\n";
	}


	return 0;
}