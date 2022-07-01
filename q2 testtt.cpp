#include <iostream>

using namespace std;

//prototype
double canopyCharges(char, int, int);
double additionalCharges ( char );
void display ( double, double );
int main ()
{
	char code, itemCode;
	int days = 0;
	int totalCanopies = 0;
	double finalCanopies = 0;
	double additional = 0;
	double charge = 0;
	
	finalCanopies = canopyCharges (code, totalCanopies, days);
	additional = additionalCharges ( itemCode );
	return 0;
}

double canopyCharges ( char code, int totalCanopies, int days )
{
	double charge, finalCanopies;
	
	cout << " Please enter your participant code : ";
	cin >> code;
	
	cout << " Enter the total of canopies : ";
	cin >> totalCanopies;
	
	cout << " Enter total days : ";
	cin >> days;
	
	if ( toupper (code) == 'T')
	{
		charge = 90.00;
	}
	else if ( toupper ( code ) == 'S')
	{
		charge = 150.00;
	}
	else if ( toupper ( code ) == 'O')
	{
		charge = 200.00;
	}
	
	return (charge * days);
}
double additionalCharges ( char itemCode )
{
	double additional, finalCanopies;
	cout << " \n Enter your item code ( Wet item (W) will have additional price ) : ";
	cin >> itemCode;
	
	if ( toupper ( itemCode ) == 'W')
	{
		cout << " Extra RM100 charges is needed. " << endl;
		additional = 100;
	}
	else
	{
		cout << " No additional charges is needed. " << endl;
		additional = 0;
	}
	
	return ( finalCanopies + additionalCharges );
}
void display ( double finalCanopies, double additional )
{
	cout << " ----------- " << endl;
	cout << " Total Canopy charge : " << finalCanopies << endl;
	cout << " n " << additional << endl;
}
