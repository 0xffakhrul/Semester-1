#include <iostream>

using namespace std;

int main () {
	
	int total = 0, scoreCounter = 0, score;
	float average;
	
	cout << " To stop entering score, enter -1. ";
	cout << " \n Enter score : ";
	cin >> score;
	
	while ( score != -1 )
	{
		total += score;
		scoreCounter++;
		cout << " Enter score : ";
		cin >> score;
	}
	
	if ( scoreCounter > 1 )
	{
		average = total / scoreCounter;
		cout << " \n The average score is : " << average << endl;
	}
	else 
	cout << " No score entered. ";
	
	cout << " END. ";
	
	return 0; 
}
