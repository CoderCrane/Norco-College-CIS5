#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

char getPatientType();
double patientCharges(int, double, double, double);
double patientCharges(double, double);

int main()
{
	char patientType;
	int days;
	double roomRate;
	double medication;
	double services;
	double totalCharges;

	patientType = getPatientType();

	if (patientType == 'I' || patientType == 'i')
	{
		cout << "Number of days in the hospital: ";
		cin >> days;

		while (days < 0)
		{
			cout << "Days in hospital must be zero or more. "
				<< "Please re-enter: ";
			cin >> days;
		}
		cout << "Daily room rate: $";
		cin >> roomRate;

		while (roomRate < 0)
		{
			cout << "Room rate must be zero or more. "
				<< "Please re-enter: $";
			cin >> roomRate;
		}
	}

	cout << "Medication Charges: $";
	cin >> medication;

	while (medication < 0)
	{
		cout << "Medication charges must be zero or more. ";
		cin >> medication;
	}

	cout << "Lab fees and other service charges: $";
	cin >> services;

	while (services < 0)
	{
		cout << "These chasrges must be zero or more. "
			<< "Please re-enter: $";
	}

	if (patientType == 'I')
		totalCharges = patientCharges(days, roomRate, medication, services);
	else
		totalCharges = patientCharges(medication, services);

	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe total charges are $" << totalCharges << endl << endl;

	return 0;
}

char getPatientType()
{
	char type;

	cout << "This program will compute patient hospital charges.\n"
		<< "What was the patient type?\n"
		<< "In-patient or Out-patient? (I or O) ";
	cin >> type;

	while (type != 'I' && type != 'i' &&
		type != 'O' && type != 'o')
	{
		cout << "Please enter I or O: ";
		cin >> type;
	}

	if (type == 'i')
		type = 'I';
	else if (type == 'o')
		type = 'O';

	return type;
}

double patientCharges(int days, double rate,
	double med, double serv)
{
	return days * rate + med + serv;
}

double patientCharges(double med, double serv)
{
	return med + serv;
}