//csc126 first quiz
//program to calculate and displays the total charges that should be paid by the driver.

#include <iostream>     //to handle output ( cout ) and input ( cin ) statement
#include <iomanip>      //to align the text

using namespace std;

int main () {        //general fucntion
	
	float distance_km;         //declare input
	float total_fee;           //declare output
	
	const double toll_rate = 0.75;        //constant for 1km = RM0.75
	
	cout << setw (70);           //align the text
	cout << " CSC126 QUIZ 1 \n";        //content
	cout << setw (72);
	cout << " By Fakhrul Radzi \n\n";
	
	cout << " Enter the distance in KM here : ";       //prompt driver to enter the distance in km
	cin >> distance_km;                                 //read value from keyboard and store in distance_km
	
	
	//formula tu find total charges
	total_fee = distance_km * toll_rate;
	
	
	//display output to monitor
	cout << " The total charges is : RM " << total_fee << endl;
	cout << " \n\n Thank you and have a nice day :) ";
	
	return 0;     //end
	
}
