#include <iostream>

using namespace std;

int main () {
	
	int year_service , monthly_salary, yearly_income, bonus;
	
	cout << " Enter your monthly salary : ";
	cin >> monthly_salary;
	
	cout << " Enter your year of services : ";
	cin >> year_service;
	
	if ( year_service > 10 )
	bonus = 1500;
	
	else if ( year_service >= 6 && year_service <= 10 )
	bonus = 800;
	
	else if ( year_service >= 3 && year_service <= 5)
	bonus = 500;
	
	else
	bonus = 150;
	
	yearly_income = ( monthly_salary * 12 ) + bonus;
	
	cout << " \n\n Your yearly income is : RM " << yearly_income;
	
	return 0;

}
