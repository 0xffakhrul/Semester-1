#include <iostream>

using namespace std;

int main ()
{
	char type;
	float amount, cgpa, parents_inc;
	int length;
	
	cout << " Enter type of study ( 1 | 2 | 3 | 4 ) : ";
	cin >> type;
	
	cout << " Enter CGPA : ";
	cin >> cgpa;
	
	cout << " Enter length of study ( in semester ) : ";
	cin >> length;
	
	cout << " Enter parents' yearly income : RM";
	cin >> parents_inc;
	
	if ( length >= 1)
	{
	  if ( parents_inc <= 50000 )
      {
		if ( type == '1' || type == '3' )
	    {
			if ( cgpa >= 3.30 && cgpa <= 4.00 )
		    {
				if ( type == '1' )
				{
				   cout << " You are qualify ! ";
				   amount = ( length - 1 ) * 2000;
			    }
				else
				{
				   cout << " You are qualify ! ";
				   amount = ( length - 1 ) * 3000;
			    }
		    }
			else
			   cout << " Sorry. You are not eligible. ";
	    }
		else if ( type == '2' || type == '4')
		{
			if ( cgpa >= 3.00 && cgpa <= 4.00 )
			{
				if ( type == '2')
				{
				   cout << " You are qualify ! ";
				   amount = ( length - 1 ) * 3500;
			    }
				else 
				{
				   cout << " You are qualify ! ";
				   amount = ( length - 1 ) * 4500;
			    }
		    }
			else
			   cout << " Sorry. You are not eligible. ";
	    }
		else 
	        cout << " Invalid type. ";
	  }	   
	  else
	    cout << " Sorry. You are not eligible. " << endl;
    }
    else
       cout << " You are not eligible. ";
     
	cout << " \n\n\n --------------------------------------------------- ";
	cout << " \n ----------YAYASAN SETIA BAKTI SCHOLARSHIP---------- ";
	cout << " \n --------------------------------------------------- ";
	cout << " \n Type of Study : " << type;
	cout << " \n CGPA : " << cgpa;
	cout << " \n Length of study ( in semester ) : " << length;
	cout << " \n Parents' income : RM" << parents_inc;
	cout << " \n Amount of Scholarship : RM" << amount << endl;
	
	return 0;
	    
}
