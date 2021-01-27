#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int COOKIES_RECIPE = 48;
	const double SUGAR_RECIPE = 1.5;
	const double BUTTER_RECIPE = 1.0;
	const double FLOUR_RECIPE = 2.75;

	int cookies;
	double sugar;
	double butter;
	double flour;

	cout << "Enter the number of cookies: ";
	cin >> cookies;

	sugar = (cookies * SUGAR_RECIPE) / COOKIES_RECIPE;
	butter = (cookies * BUTTER_RECIPE) / COOKIES_RECIPE;
	flour = (cookies * FLOUR_RECIPE) / COOKIES_RECIPE;

	cout << "/nTo make" << cookies << "cookies, you will need:\n"
		<< setprecision(2) << fixed << showpoint
		<< sugar << "cups of sugar\n"
		<< butter << "cups of butter\n"
		<< flour << "cups of flower\n\n";
	   	 
	return 0;
}