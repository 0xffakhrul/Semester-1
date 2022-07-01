#include <iostream>

using namespace std;

int main ()
{
	char type;
	float cgpa, parents_inc, amount;
	int length;
	
	cout << " Please enter your Type of Study ( 1 | 2 | 3 | 4 ) : ";
	cin >> type;
	
	cout << " Enter your CGPA : ";
	cin >> cgpa;
	
	cout << " Enter length of study ( in semester ) : ";
	cin >> length;
	
	cout << " Enter parents' yearly income : RM";
	cin >> parents_inc;
	
	if ( length >= 2 && length <= 6)
	   if ( type == '1' || type == '3' )
	      if ( parents_inc >= 50000)   
	         if ( cgpa >= 3.30 && cgpa <= 4.00 )       
	            if ( type == '1')
	               amount = 2000;            
	            else if ( type == '3')
	               amount = 3000;           
	   else if ( type == '2' || type == '4')
	    if ( cgpa >= 3.00 && cgpa <= 4.00 )
	    if ( type == '2')
	    amount = 3500;
	               
	    else if ( type == '4')
	    amount = 4000;
	    else
	    cout << " Invalid type of study. ";
	else 
	               
	cout << " YAYASAN SETIA BAKTI SCHOLARSHIP ";
	cout << " \n Type of Study : " << type;
	cout << " \n CGPA : " << cgpa;
	cout << " \n Length of study ( in semester ) : " << length;
	cout << " \n Parents' income : RM" << parents_inc;
	
	cout << " \n amount scholarship : " << amount;
	
	return 0;
		             
}
