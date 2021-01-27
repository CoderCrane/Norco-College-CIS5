#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	const int MIN = 50, MAX = 450;

	unsigned seed = time(0);

	srand(seed);

	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;
	int answer;

	cout << setw(5) << num1 << endl << "+" << setw(4) << num2 << endl << "-----\n\n";

	cout << "Enter to the answer here: ";
	cin >> answer;

	int correctAnswer = num1 + num2;

	cout << (answer == correctAnswer ?
		"\nCongratulations!\n" :
		" \nSorry that is Incorrect.\n")
		<< "The answer is " << correctAnswer << endl << endl;
	   
	return 0;
}