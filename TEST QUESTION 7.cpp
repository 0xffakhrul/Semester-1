#include <iostream>

using namespace std;

int main ()
{
	char type;
	float cgpa, amount, parents_inc, length, total;
	
	cout << " Enter type of study ( 1 | 2 | 3 | 4 ) : ";
	cin >> type;
	
	cout << " Enter your CGPA : ";
	cin >> cgpa;
	
	cout << " Enter length of study ( in semester ) : ";
	cin >> length;
	
	cout << " Enter your parents' yearly income : RM";
	cin >> parents_inc;
	
	if (( parents_inc <= 50000) && ((type == '1' || type == '3') && cgpa >= 3.30 ) && ( length >= 2))
    {
    	cout << " \n\n You are qualified. ";
    	
    	if ( type == '1' )
    	  amount = 2000;
    	  
    	else
    	  amount = 3000;
    	     	
	}
	else if (( parents_inc <= 500000) && (( type == '2' || type == '4') && cgpa >= 3.00) && ( length >= 2 ))
	{
		cout << " \n\n You are qualified. ";
		
		if ( type == '2')
		   amount = 3500;
		   
		else
		   amount = 4500;
	}
	else
	   cout << " \n\n You are not qualified. ";
	   
	total = ( length - 1) * amount;
	cout << " \n\n\n Total amount of scholarship is : RM" << total;
	
	return 0;
}
