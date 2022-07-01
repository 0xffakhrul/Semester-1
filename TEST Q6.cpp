#include <iostream>

using namespace std;

int main ()
{
	char type;
	float price_unit, total_price;
	int quantity;
	
	cout << " Enter the type of mask : ";
	cin >> type;
	
	if ( type == '1')
	   price_unit = 0.20;
	   
	else if ( type == '2')
	   price_unit = 0.50;
	   
	else 
	   cout << " Invalid type. ";
	   
	cout << " How much do you want to buy ? : ";
	cin >> quantity;
	
	total_price = price_unit * quantity;
	
	cout << " Total price for " << quantity << " mask(s) is : RM" << total_price;
	
	return 0;
	   
}
