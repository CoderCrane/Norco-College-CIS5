#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title;
	string director;
	int year;
	int length;
};

void displayMovie(MovieData);

int main()
{
	MovieData movie1, movie2;

	movie1.title = "War of the Worlds";
	movie1.director = "Byron Haskin";
	movie1.year = 1953;
	movie1.length = 88;

	movie2.title = "War of the Worlds";
	movie2.director = "Stephen Spielberg";
	movie2.year = 2005;
	movie2.length = 118;

	displayMovie(movie1);
	cout << endl;

	displayMovie(movie2);

	return 0;
}

void displayMovie(MovieData m)
{
	cout << "\nTitle     : " << m.title;
	cout << "\nDirector  : " << m.director;
	cout << "\nReleased  : " << m.year;
	cout << "\nMinutes   : " << m.length;
}