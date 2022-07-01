#include <iostream>

using namespace std;

double getDiscount ( int );
double calPayment ( double, double );

int main ()
{
	int creditP;
	double total, discountRate, priceAfterDiscount;
	
	cout << " Enter total purchase here : RM ";
	cin >> total;
	creditP = total;
	
	discountRate = getDiscount ( creditP);
	calPayment ( discountRate, total);
	
	cout << " Ameba Couture Payment Receipt " << endl;
	cout << " ------------------------------------- " << endl;
	cout << " Total Purchase : RM " << total << endl;
	cout << " Point Earn : " << creditP << endl;
	cout << " Discount : " << discountRate << endl;
	//cout << " Total Purchase after Discount : RM " << priceAfterDiscount << endl;
	cout << " Total Purchase after Discount : RM " << calPayment(discountRate, total) << endl;
	
	return 0;
}

double getDiscount ( int creditP )
{
	double discountRate, total;
	
	if ( creditP >= 250 && creditP<= 499)
	{
		discountRate = 0.05;
	}
	else if ( creditP >= 500 && creditP <= 999)
	{
		discountRate = 0.08;
	}
	else if ( creditP >= 1000 && creditP <= 2499)
	{
		discountRate = 0.10;
	}
	else if ( creditP >= 2500 && creditP <= 4999 )
	{
		discountRate = 0.12;
	}
	else if ( creditP >= 5000 && creditP <= 7999 )
	{
		discountRate = 0.15;
	}
	else if ( creditP == 8000)
	{
		discountRate = 0.20;
	}
	
	return discountRate;
}

double calPayment ( double getDiscount, double total )
{
	double discountRate = getDiscount * total;
	double priceAfterDiscount = total - discountRate;
	return priceAfterDiscount;  
}
