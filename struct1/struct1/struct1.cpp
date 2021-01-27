#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct studentInfo
{
	string fullName;
	double gpa;
};

int main()
{
	studentInfo stu1, stu2;

	stu1.fullName = "John Smith";
	stu1.gpa = 3.45;

	stu2.fullName = "Lara Boyed";
	stu2.gpa = 2.78;

	cout << "\n" << stu1.fullName << " has a GPA of: " << stu1.gpa;
	cout << "\n" << stu2.fullName << " has a GPA of: " << stu2.gpa;

	cout << "\n";
	return 0;
}