#include<iostream>
#include<string>
using namespace std;

/////////////////////////////
// Prototypes
////////////////////////////

void displayWelcome();
void getData(double&, double&);
double calculateLateFee(double);
double calcTotalAmount(double,double);
void displayResults(double, double,double,double);


int main()
{
	//variables
	double rentAmount = 0;
	double daysLate = 0;
	double lateFee = 0;
	double totalDue = 0;
	double lateFeeTotal = 0;
	double totalAmount = 0;
	



	displayWelcome ();
	getData(rentAmount, daysLate);
	lateFeeTotal = calculateLateFee(rentAmount);
	totalAmount = calcTotalAmount(rentAmount, lateFeeTotal);
	lateFee=lateFeeTotal;
	totalDue=totalAmount;
	displayResults(rentAmount, daysLate, lateFee, totalDue);

		return 0;


}

//////////////////////////////////////
// Function Definitions
//////////////////////////////////////

void displayWelcome()
{
	cout << " Welcome" << endl;
}

void getData(double& tempRentAmount, double& tempDaysLate)
{
	cout << "How much rent money do you have?";
	cin >> tempRentAmount;
	cout << "How many days late are you?";
	cin >> tempDaysLate;
}



double calculateLateFee(double tempRentAmount)
{
	return (tempRentAmount * 0.10);
}

double calcTotalAmount(double templateFeeTotal, double tempRentAmount)
{
	return (templateFeeTotal + tempRentAmount);
}

void displayResults(  double tempRentAmount,  double tempDaysLate, double tempLateFee, double tempTotalDue)
{
	cout << "----------------" << endl;
	cout << "Monthly Rent:" << tempRentAmount << "Days Late:" << tempDaysLate  << endl;
	cout << "Late Fee:" << tempLateFee << endl;
	cout << "Total Due:" << tempTotalDue << endl;
	cout << "----------------"  << endl;
}
