#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct studentInfo
{
	string fullName;
	double gpa;
};

void printInfo(studentInfo);
studentInfo getInfo(void);

int main()
{
	studentInfo stu1, stu2;

	stu1 = getInfo();
	stu2 = getInfo();

	printInfo(stu1); cout << endl;
	printInfo(stu2); cout << endl;

	return 0;
}
void printInfo(studentInfo stu)
{
	cout << "\n" << stu.fullName << " has a GPA of: " << stu.gpa;
}

studentInfo getInfo(void)
{
	studentInfo s;
	cout << "\nEnter Student name: ";
	getline(cin, s.fullName);

	cout << "\nEnter Student GPA: ";
	cin >> s.gpa;
	cin.ignore();

	return s;
}