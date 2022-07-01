#include <iostream>

using namespace std;

int main() {
	
	int weight_in_kg;
	
	int lbs;
	
	const double _1kg = 2.205;
	
	cout << " insert your weight ";
	cin >> weight_in_kg;
	
	lbs = weight_in_kg * _1kg;
	
	cout << " your weight in lbs is " << lbs << endl;
	
	return 0;
	
	
}
