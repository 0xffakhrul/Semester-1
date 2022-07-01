#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int x,y,b;
	double z,c;
	
	cout << " enter x1";
	cin >>x;
	cout << " enter y ";
	cin >> y;
	cout << " enter b";
	cin >> b;
	cout << " c";
	cin >> c;
	
	z =  x % y - b + y / c;
	
	cout << " z is" << z;
}
