#include <iostream>

using namespace std;

int main () {
	
	double square_area , side;
	
	double shaded_area;
	
	double radius;
	
	const double PI = 3.142;
	
	cout << " enter side ";
	cin >> side;
	
	square_area = side * side;
	
	cout << " area of square is : " << square_area << endl;
	
	radius = side / 4;
	cout << " your radius is " << radius << endl;
	
	shaded_area = square_area - PI * radius * radius  * 4;
	
	cout << " shaded area is :" << shaded_area << endl;
	
	return 0;
}
