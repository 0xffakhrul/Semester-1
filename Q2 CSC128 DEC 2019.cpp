#include <iostream>

using namespace std;

float getDiscount ( int );
float calPayment ( float, float);

int main ()
{
	int creditP, credit;
	float total, discountRate, priceAfterDiscount;
	
	priceAfterDiscount = calPayment ( discountRate, total);
	
	cout << " Total Purchase : RM ";
	cin >> total;
	
	cout << " Point Earn : ";
	cin >> creditP;
	cout << " Discount : " << getDiscount ( creditP ) << endl;
	cout << " Total Purchase after Discount : RM " << priceAfterDiscount<< endl;

	return 0;
	
}
float getDiscount ( int creditP)
{
	float discountRate;
	
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
float calPayment ( float discountRate, float total )
{
	float priceAfterDiscount;
	priceAfterDiscount = total - discountRate;
	cout << " The price is " << priceAfterDiscount;
	return priceAfterDiscount;
}
