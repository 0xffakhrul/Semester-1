#include <iostream>

using namespace std;

int main ()
{
	char type, types;
	float amount, cgpa, parents_inc;
	int length;
	
	cout << " Enter type of study : ";
	cin >> type;
	
	cout << " Enter types : ";
	cin >> types;
	
	cout << " Enter CGPA : ";
	cin >> cgpa;
	
	cout << " Enter length of study ( in semester ) : ";
	cin >> length;
	
	cout << " Enter parents' yearly income : RM";
	cin >> parents_inc;
	
	if ( parents_inc <= 50000 )
	{
		if ( types == 'b' || types == 'B' )
		{
			if ( cgpa >= 3.30 && cgpa <= 4.00 )
			{
				if ( type == '1' )
				   amount = ( length - 1 ) * 2000;
				else
				   amount = ( length - 1 ) * 3000;
			}
			else
			   cout << " Sorry. You are not eligible. ";
		}
		else if ( types == 'a' || types == 'A')
		{
			if ( cgpa >= 3.00 && cgpa <= 4.00 )
			{
				if ( type == '2')
				   amount = ( length - 1 ) * 3500;
				else 
				   amount = ( length - 1 ) * 4500;
			}
			else
			   cout << " You are not eligible. ";
		}
		else 
		   cout << " Invalid type. ";
	}
	   
	else
	   cout << " You are not eligible. ";
	   
	   
	cout << " YAYASAN SETIA BAKTI SCHOLARSHIP ";
	cout << " \n Type of Study : " << type;
	cout << " \n CGPA : " << cgpa;
	cout << " \n Length of study ( in semester ) : " << length;
	cout << " \n Parents' income : RM" << parents_inc;
	cout << " \n amount scholarship : " << amount;
	
	return 0;
	    
}
