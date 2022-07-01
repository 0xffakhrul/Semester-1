#include <iostream>

using namespace std;

int main ()
{
	/*int age;
	
	cout << " Age ";
	cin >> age;
	
	if ( age > 0)
	cout << " free";
	
	if ( age >= 5)
	cout << " ff";
	
	if ( age >= 12)
	cout << " aa";
	
	return 0;*/
	int mark1,mark2,mark3,a,b;
	
	cout << " nom 3 ";
	cin >> mark1 >> mark2 >> mark3;
	
	if (mark1 >= mark2 && mark1 >= mark3 )
	{
		a = mark1;
		if ( mark2 >= mark3)
		   b = mark2;
		else
		   b = mark3;
	}
	else if ( mark2 >= mark3 )
	{
		a= mark2;
		if ( mark3 >= mark1)
		   b = mark3;
		else 
		   b + mark1;
	}
	else 
	{
		a = mark3;
		if ( mark1 >= mark2 )
		   b = mark1;
		else 
		   b = mark2;
	}
	cout << " XXXX IS =" << a;
	cout << endl;
	cout << " YYY" << b;
}
