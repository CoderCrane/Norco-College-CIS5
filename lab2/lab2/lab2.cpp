#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Constants
	double SALES_TAX = 0.07;

	// Store the prices of the five variables.
	double item1 = 15.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 12.95;
	double item5 = 3.95;

	// Calculate the subtotal.
	double subtotal = item1 + item2 + item3 + item4 + item5;

		// Calculate the sales tax.
		double salesTax = subtotal * SALES_TAX;

		// Calculate the total.
		double total = subtotal + salesTax;

	// Display each item's price, the subtotal of the sale,
	// the amount of sales tax, and the total.
	cout << "item1: $" << item1 << endl;
	cout << "item2: $" << item2 << endl;
	cout << "item3: $" << item3 << endl;
	cout << "item4: $" << item4 << endl;
	cout << "item5: $" << item5 << endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Sales tax: $" << salesTax << endl;
	cout << "Total: $" << total << endl;

	return 0;
}