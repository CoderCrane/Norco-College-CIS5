#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double speed;

	double maxHours;

	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;

	while (speed < 0)
	{
		cout << "Please enter a non-negative number for speed:  ";
		cin >> speed;
	}

	cout << "For how many hours has it traveled? ";
	cin >> maxHours;

	while (maxHours < 1)
	{
		cout << "Please enter 1 or greater for hours:  ";
		cin >> maxHours;
	}

	cout << endl << setw(8) << left << "Hour"
		<< "Distance traveled in Miles\n";
	cout << "-----------------------------------\n";

	for (int hour = 1; hour <= maxHours; hour++)
	{
		double distance = speed * hour;

		cout << setw(8) << left << hour
			<< (speed * hour) << endl;
	}


	return 0;
}