
#include <iostream>

using namespace std;         //to handle output (cout) and input (cin) statement

int main () {      //general function
     
    //declare input variable - place a space to store value in a computer memory
    int number1, number2;
    
    cout << "enter your first number :" ;    //prompt user to enter first number
    cin >>  number1 ;                        //read value from keyboard and store in number1
    cout << "enter your second number :" ;   //prompt user to enter second number
    cin >> number2 ;                         //read value from keyboard and store in number2
    
    //calculate sum in cpu and memory
    int sum = number1 + number2;
    
    //calculate average
    int avg = sum / 2;
    
    //display output to monitor
    cout <<"your sum of " << number1 << " and " << number2 << " is " << sum <<  endl;
    cout << "your  average of " << number1 << " and " << number2 << " is "<< avg << endl;
    
    return 0;
} //end
