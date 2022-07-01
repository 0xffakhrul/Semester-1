#include <iostream>

using namespace std;

//function prototype
double calcArea ( double, double);

int main ()
{
	double length, width, areaRect;
	areaRect = calcArea ( length, width );
	
	cout << " Area of rectangle is : "<< areaRect;
	
	return 0;
}

//function definition
double calcArea ( double length, double width )
{
	double area;
	
	cout << " Enter length : ";
	cin >> length;
	
	cout << " Enter width : ";
	cin >> width;
	
	area = length * width;
	
	return area;
}
