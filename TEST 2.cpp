#include <iostream>

using namespace std;

int main ()
{
	char mode, membership;
	float price, total_price, discount;
	
	cout << " Enter the price of ticket : RM ";
	cin >> price;
	
	cout << " Enter your choice of Mode of Payment ( C - Credit card | O - Online Banking | $ - Cash ) : ";
	cin >> mode;
	
	cout << " Do you have a membership ? ( Y | N ) : ";
	cin >> membership;
	
	if ( mode == 'C' && membership == 'Y')
	{
	   discount = 0.05;
	   else 
	   discount = 0.03;   
    }
	else if ( mode == 'O' && membership == 'Y')
	{
	   discount = 0.08;
	   else
	   discount = 0.03;	   
    }
	else if ( mode == '$' && membership == 'Y')
	{
	   discount = 0.03;
	   else
	   discount = 0;	   
    }
	else 
	   cout << " Invalid mode of payment. ";
	   
	total_price = price - ( discount * price );
	
	cout << " Total price after discount is : RM " << total_price;
	
	return 0;
	   
	
	
	
}
