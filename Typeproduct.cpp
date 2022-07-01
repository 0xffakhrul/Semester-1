//program to read product type and discount

#include <iostream>
#include <ctype.h>

using namespace std;

int main () {
	
	char type, choice;
	
	double price, discount_rate, priceAfterDiscount;
	              
	while ( toupper(choice)!= 'N')         //sentinel loop
	{
	cout << " Enter the price here : RM";  //prompt user to enter price
	cin >> price;     
	
	cout << " Enter the product type here ( S | C | M ) : ";     //prompt user to enter the product type : S , C , M
	cin >> type;
	
	if ( toupper (type) == 'S')       
	{
		cout << " \n You get a 30% discount ! ";     //type product for S
	    discount_rate = 0.3;                      //discount 30%
    }
	   
	else if ( toupper(type) == 'C') 
	{
	    cout << " \n You get 10% discount ! ";      //type product for C
	    discount_rate = 0.1;                     //discount 10%
    }
	else if ( toupper(type) == 'M')
	{
		cout << " \n You get 40% discount ! ";     //type product for M
	    discount_rate = 0.4;                    //discount 40%
    }
	else 
	   cout << " \n nvalid product type. ";       //other than S , C , M

	priceAfterDiscount = price - ( discount_rate * price );       //calculate price after discount          
	
	cout << " \n\n The total price after discount is : RM" << priceAfterDiscount << endl;      //show price after discount
	cout << " \n\n Would you like to continue ? ( Y / N ) : ";                  //ask the user to continue or stop
	cin >> choice;
	cout << " --------------------------------------------- " << endl;
    }
	cout << " \n Thank you. See you again :) " << endl;     
	
	return 0;
	   
}
