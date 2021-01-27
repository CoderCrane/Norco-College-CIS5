#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double MIN_TIME = 00.00;
	const double MAX_TIME = 23.59;
	const double MIN_MINUTE = 00.00;
	const double MAX_MINUTE = 00.59;

	const double NIGHT_START = 00.00;
	const double NIGHT_END = 06.59;
	const double DAY_START = 7.00;
	const double DAY_END = 19.00;
	const double EVENING_START = 19.01;
	const double EVENING_END = 23.59;

	const double NIGHT_RATE = 00.05;
	const double DAY_RATE = 00.45;
	const double EVENING_RATE = 00.20;

	double time;
	double minute;
	double length;
	double rate;
	double cost;

	cout << "This program calculates the cost of a long-distance call\n";
	cout << "Enter the starting time in 24 hour format HH.MM\n\n";

	cout << "What is the starting time of the call?";
	cin >> time;

	minute = time - static_cast<int>(time);

	if (time >= MIN_TIME && minute <= MAX_TIME)
	{
		if (minute >= MIN_MINUTE && minute <= MAX_MINUTE)
		{
			cout << "How long was the call in minutes? ";
			cin >> length;

			if (length >= 0)
			{
				if (time >= NIGHT_START && time <= NIGHT_END)
					rate = NIGHT_RATE;
				if (time >= DAY_START && time <= DAY_END)
					rate = DAY_RATE;
				if (time >= EVENING_START && time <= EVENING_END)
					rate = EVENING_RATE;

				cost = length * rate;

				cout << fixed << showpoint << setprecision(2);
				cout << "\nThe cost of the call is $ " << cost << endl;
			}
			else
			{
				cout << "\nThe number of minutes of the call must "
					<< "be positive.\n";
			}
		}
		else
		{
			cout << "\nThe minutes for the starting time must be between "
				<< MIN_MINUTE << " and " << MAX_MINUTE << ".\n";

		}
	}
	else
	{
		cout << "\nThe starting time must be between "
			<< MIN_TIME << " and " << MAX_TIME << ".\n";
	}
	
	return 0;
}