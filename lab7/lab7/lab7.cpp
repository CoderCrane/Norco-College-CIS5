#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;
	string age;
	string college;
	string profession;
	string animal;
	string petName;

	cout << "Name: ";
	getline(cin, name);

	cout << "City: ";
	getline(cin, city);

	cout << "Age: ";
	getline(cin, age);

	cout << "College: ";
	getline(cin, college);

	cout << "Profession: ";
	getline(cin, profession);

	cout << "Animal: ";
	getline(cin, animal);

	cout << "Pet Name: ";
	getline(cin, petName);

	cout << "\n\nThere once was a person named" << name
		<< " who lived in " << city << ".\n"
		<< "At the age of " << age << ", "
		<< name << " went to college at " << college << ".\n"
		<< name << " graduated and went to work " << "as a "
		<< profession << ".\n" << "Then " << name
		<< " adopted a(n) " << animal << " named " << petName
		<< ".\n" << "They both lived happily ever after!\n\n";
			   		 
	return 0;
}