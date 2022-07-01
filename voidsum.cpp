#include <iostream>

using namespace std;

int calcSum ();

int main ()
{
	cout << " Sum of 6 numbers is : " << calcSum () << endl;
	return 0;
}

int calcSum ()
{
	int sum = 0, num;
	for ( int count = 1; count <= 6; count++ )
	{
			
	    cout << " Enter any number ";
	    cin >> num;
	    
	    sum = sum + num;
	}
	return sum;
}

