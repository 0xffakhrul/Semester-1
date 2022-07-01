#include <iostream>

#include <string>

 

using namespace std;

 

int main()

{

    string first, last;

     

    cout << "Please enter your first and last name: ";

    cin >> first >> last;

     

    cout << "Your initials are " << first[0] << last[0] << endl;

     

    if ((first[0] == 'A') || (last[0] == 'A')){

        cout <<endl <<"...*..." <<endl <<"..*.*.." <<endl <<".*...*." <<endl;

        cout <<".*****." <<endl <<"*.....*" <<endl;

    }

    return 0;

}

