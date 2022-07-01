#include <iostream>

using namespace std;

int main (){
	
	int number;
	cout << " \n Enter your pin number ";
	cin >> number;
	
	while ( number != 877 )
	{
		cout << " \n Incorrect pin number, please try again ";
		cout << " \n Enter your pin number ";
		cin >> number;
	}
	cout << " \n Welcome ";
	
	return 0;
}
