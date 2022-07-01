#include <iostream>

using namespace std;

int calcSum ( int );

int main ()
{
	int num,answer;
	
	answer = calcSum ( num );
	cout << " Sum of 6 numbers is : " << answer << endl;
	
	return 0;
}

int calcSum ( int num )
{
	int sum = 0;
	
	for ( int count = 1; count <= 6; count++ )
	{
			
	    cout << " Enter any number : ";
	    cin >> num;
	    
	    sum = sum + num;
	}
	return sum;
}
