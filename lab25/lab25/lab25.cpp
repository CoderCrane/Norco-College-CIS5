#include "pch.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int wordCount(char *);
int wordCount(string);

int main()
{
	const int SIZE = 81;
	char cstring[SIZE];
	string strObj;

	cout << "Enter a C-string containing 80 or fewer characters: \n";
	cin.getline(cstring, SIZE);

	cout << "\nThe number of words in the C-string:  ";
	cout << wordCount(cstring) << endl << endl;

	cout << "\nEnter a string object containing 80 or fewer characters: \n";
	getline(cin, strObj);

	cout << "\nThe number of words in the string object:  ";
	cout << wordCount(strObj) << endl << endl;

	return 0;
}

int wordCount(char *str)
{
	int numWords = 0;

	while (*str != 0)
	{
		while (*str != 0 && isspace(*str))
		{
			str++;
		}

		if (*str != 0)
		{
			numWords++;
		}
		
		while (*str != 0 && !isspace(*str))
		{
			str++;
		}
	}
	return numWords;
}

int wordCount(string strObj)
{
	const char SPACE = ' ';
	const char TAB = '/t';
	int numSpaces = 0;
	int numCharacters = 0;
	int numWords = 0;

	int length = strObj.length();

	for (int i = 0; i < length; i++)
	{
		if (strObj.at(i) == SPACE || strObj.at(i) == TAB)
		{
			numSpaces++;

			numCharacters = 0;
		}

		else
		{
			numCharacters++;

			numSpaces = 0;
		}

		if (numSpaces == 0 && numCharacters == 1)
		{
			numWords++;
		}
	}

	return numWords;
}