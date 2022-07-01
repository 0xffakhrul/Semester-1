/*#include <iostream>

using namespace std;

float getDiscount ( int creditP)
{
	float discountRate;
	
	if ( creditP >= 250 && creditP<= 499)
		discountRate = 0.05;
	else if ( creditP >= 500 && creditP <= 999)
		discountRate = 0.08;
	else if ( creditP >= 1000 && creditP <= 2499)
		discountRate = 0.10;
	else if ( creditP >= 2500 && creditP <= 4999 )
		discountRate = 0.12;
	else if ( creditP >= 5000 && creditP <= 7999 )
		discountRate = 0.15;
	else if ( creditP == 8000)
		discountRate = 0.20;
	else
		cout << " Invalid type. ";
	
	return discountRate;
}
float calPayment ( float total, float discountRate)
{
	float priceAfterDiscount, creditP;
	priceAfterDiscount = total - (total * discountRate);
	
	return priceAfterDiscount;
}
int main ()
{
	int creditP;
	float total, discountRate, priceAfterDiscount, netPrice, discount;
	
	netPrice = calPayment ( total, discountRate);
	discount = getDiscount ( creditP);
	
	cout << " Total Purchase : RM ";
	cin >> total;
	cout << " Point Earn : ";
	cin >> creditP;
	cout << " Discount : " << discount << endl;
	cout << " Total Purchase after Discount : RM " << netPrice << endl;
	
	return 0;
	
}*/

#include <iostream>
#include <iomanip>
using namespace std;

// Declare Functions
double computeGross( double hoursWorked, double hourlyWage);
double computeDeductions(double grossPay);
double computeNet( double grossPay, double deductions);
void validateHours(double hoursWorked);
void validateWage(double hourlyWage);

int main()
{
    // Declare Variables
    double hoursWorked = 0;
    double hourlyWage = 0;
    double grossPay = 0;
    double deductions = 0;
    double netSalary = 0;

    // Get the hours worked and hourly wage
    cout << "Please enter the amount of hours worked (HH.MM): " << endl;
    cin >> hoursWorked;
    cout << "Please enter in your hourly wage: $" << endl;
    cin >> hourlyWage;

    //you have to actually call your functions lol:

    validateHours (hoursWorked);

    validateWage(hourlyWage);

    grossPay = computeGross(hoursWorked, hourlyWage);

    deductions = computeDeductions(grossPay);

    netSalary = computeNet(grossPay, deductions );

    // Output the results
    cout << fixed << setprecision(2)
    << "The net salary is: $" << netSalary << endl;

    return 0;
}

// compteGross() function - get gross salary based on hours worked and hourly wage.
double computeGross(double hoursWorked, double hourlyWage)
{
    return hoursWorked * hourlyWage;
}

// computeDeductions() function - gets salary and calculates deductions
double computeDeductions(double grossPay)
{
    double deductions;
    if(grossPay < 2500)
    {
        deductions = (grossPay * .10) * .175;
    }
    else
    {
        deductions = (grossPay * .20) * .175;
    }

    return deductions;

}

// computeNet() function - prints out gross salary,total deductions and net    salary
double computeNet(double grossPay, double deductions)
{
    double netSalary;
    netSalary = grossPay - deductions;

    cout << "The gross salary is: $" << grossPay << endl;
    cout << "The total deductions are: $" << deductions << endl;
    cout << "The net salary is: $" << netSalary << endl;
    return netSalary;
}

// validateHours() function - input validation; hours worked can;t exceed 150  or be neg.
void validateHours(double hoursWorked)
{
    if(hoursWorked < 0 || hoursWorked > 150)
    {
        cout << "Error! Hours can't be negative or exceed 150\n";
    }
}

// validateWage() - Input validation; wage can't exceed 200 or be   negative
void validateWage(double hourlyWage)
{
    if(hourlyWage < 0 || hourlyWage > 200)
    {
        cout << "Error! Wage can't be negative or exceed 200\n";
    }
}
