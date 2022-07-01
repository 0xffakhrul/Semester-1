#include <iostream>
#include <iomanip>

using namespace std;

int main ()  {
	
	int num;
	
    cout << setw (70);
	cout << " #StaySafe \n\n";
	cout << " Enter an integer : ";
	cin >> num;
	
	if ( num > 0 )
	{
		cout << " You entered a positive integer." << endl;
	}
	
	cout << " This statement is always executed";
	
return 0;
}
