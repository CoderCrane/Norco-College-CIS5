#include "pch.h"
#include <iostream>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);

int main()
{
	int score1 , score2 , score3 , score4 , score5;

	getScore(score1); getScore(score2), getScore(score3), getScore(score4), getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);
	   	  
	return 0;
}

void getScore(int &score)
{
	cout << "Enter a test score: ";
	cin >> score;

	while (score < 0 || score > 100)
	{
		cout << "Enter a test score between 0 and 100: ";
		cin >> score;
	}
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	int total = score1 + score2 + score3 + score4 + score5;
	float average = total / 5.0;
	cout << "After dropping the lowest test score, " << "the test average is " << average << "\n.";
}