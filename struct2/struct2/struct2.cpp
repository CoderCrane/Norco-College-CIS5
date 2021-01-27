#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct studentInfo
{
	string fullName;
	double gpa;
};

void printArray(studentInfo*);
double GPAavg(studentInfo*);

const int SIZE = 2;

int main()
{
	studentInfo stuArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "\nEnter student #" << i + 1 << " name: ";
		getline(cin, stuArray[i].fullName);
		//cin.ignore();

		cout << "\nEnter student #" << i + 1 << " GPA: ";
		cin >> stuArray[i].gpa;
		cin.ignore();
	}

	printArray(stuArray);
	cout << "\n\nThe average GPA: " << setprecision(2) << fixed << GPAavg(stuArray) << endl;

	cout << "\n";
	return 0;
}


void printArray(studentInfo* p)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n\t" << p->fullName << "\t\t" << p->gpa;
		p++;
	}
}

double GPAavg(studentInfo* p1)
{
	double Sum = 0.0;
	for (int i = 0; i < SIZE; i++)
	{
		Sum += p1->gpa;
		p1++;
	}
	return (Sum / SIZE);
}