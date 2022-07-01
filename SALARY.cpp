#include <iostream>

using namespace std;

int main () {
	
	float salary;
	const float RATE = 45;
	int totalWorkingDays;
	
	cout << " \n Enter the number of working days : ";
	cin >> totalWorkingDays;
	
	if ( totalWorkingDays >= 16 && totalWorkingDays <= 28)
	    salary = totalWorkingDays * RATE;
	
	else 
	    salary = totalWorkingDays * (RATE/2);  
	    
	cout << " The salary is : " << salary << endl;
}
