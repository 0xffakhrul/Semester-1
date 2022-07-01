#include <iostream>

using namespace std;

int main ()
{
	char type;
	float amount, cgpa, parents_inc;
	int length;
	
	cout << " Enter type of study : ";
	cin >> type;
	
	cout << " Enter CGPA : ";
	cin >> cgpa;
	
	cout << " Enter length of study ( in semester ) : ";
	cin >> length;
	
	cout << " Enter parents' yearly income : RM";
	cin >> parents_inc;
	
	if ( parents_inc <= 50000 )
	   if ( type == '1' || type == '3' )
	      if ( cgpa >= 3.30 )
	         if ( type == '1' )
	           amount = 2000;
	         else 
	           amount = 3500;
	   else if ( type == '2' || type == '4')
	        if ( cgpa >= 3.00 )
	         if ( type == '2')
	           amount = 3500;
	         else
	           amount = 4500;
	   else 
	      cout << " invalid ";
	else
	   cout << " Invalid ";
	           
		
		
	cout << " YAYASAN SETIA BAKTI SCHOLARSHIP ";
	cout << " \n Type of Study : " << type;
	cout << " \n CGPA : " << cgpa;
	cout << " \n Length of study ( in semester ) : " << length;
	cout << " \n Parents' income : RM" << parents_inc;
	
	cout << " \n amount scholarship : " << amount;
	
	return 0;
}
