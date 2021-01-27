#include "pch.h"
#include <iostream>
using namespace std;
double kineticEnergy(double, double);

int main()
{
	double mass;
	double velocity;

	cout << "Enter the object's mass (in kilograms): ";
	cin >> mass;

	cout << "Enter the object's velocity " << "(in meters per second): ";
	cin >> velocity;

	cout << "The object's kinetic energy is " << kineticEnergy(mass, velocity) << " joules.\n";
	   	  
	return 0;
}

double kineticEnergy(double mass, double velocity)
{
	return 0.5 * mass * velocity * velocity;
}