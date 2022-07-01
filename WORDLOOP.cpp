#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	/*string word;
	
	cout << " Enter any word : ";
	cin >> word;
	
	while ( word == "merdeka")
	{
		cout << " \n Wrong word. ";
		cout << " \n Re-enter other word : ";
		cin >> word;
		cin.ignore( );
	}
	cout << " \n Congratulations, You found the word!! ";
	
return 0;
}*/

for ( int a = 2; a < 7; a = a + 1 )
	{
		for ( int b = 1; b < a; b = b + 1)
		cout << " & ";
		cout << endl;
	}
	return 0;
}

