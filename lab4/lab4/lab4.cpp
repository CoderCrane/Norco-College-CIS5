#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Constants
	const double SQ_FEET_PER_GALLON = 340.0;
	const double FENCE_LENGTH = 100.0;
	const double FENCE_HEIGHT = 6.0;
	const int NUM_COATS = 2;

	// Varibale
	double squareFeet, gallons;

	// Calculate the square feet to paint with 2 coats.
	squareFeet = FENCE_LENGTH * FENCE_HEIGHT * NUM_COATS;

	// Calculate the number of gallons.
	gallons = squareFeet / SQ_FEET_PER_GALLON;

	// Display the amount of paint.
	cout << "To paint " << NUM_COATS << " coats on "
		<< squareFeet << " square feet of fence, you will need "
		<< gallons << " gallons of paint." << endl;




	return 0;
}