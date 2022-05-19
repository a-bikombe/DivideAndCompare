/*
Student Name: Arianna Bikombe
Date: March 11, 2021
Course: CSCI175N
Lab Assignment: Lab05-01DivideAndCompare
Project Name: Divide And Compare
File Name: Lab05-01_divide_and_compare
Description: Divides number by 2 and outputs if number is >, < or = 150.
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
using namespace std;

int main() {

    // Local variable declarations placed here
    int number;
    double dividedNumber;

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n" << endl;

    // Prompt user to enter data needed by the program
    cout << "Enter a number between 100 and 200\n";
    cout << "and I will divide it by 2\n";
    cout << "and then tell you if it is higher, ";
    cout << "lower, or equal to 150: " << flush;
    cin >> number;

    // Skip extra line
    cout << endl;

    dividedNumber = number / 2.0;

    // Program output
    if (number > 200 || number < 100)
        cout << "Invalid number!\n" << endl;
    else {
        cout << number << " divided by 2 = " << dividedNumber << endl;
        cout << endl;
        if (number > 150)   // Determines whether one is greater
            cout << "number is > 150\n" << endl;
        else if (number < 150)
            cout << "number is < 150\n" << endl;
        else
            cout << "number is = 150\n" << endl;
    }
    
    // This code pauses the program so instructor can grade
    system("pause");

    return 0;
}

/*

test 1

Arianna Bikombe
CSCI175N

Enter a number between 100 and 200
and I will divide it by 2
and then tell you if it is higher, lower, or equal to 150: 149

149 divided by 2 = 74.5

number is < 150

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N

Enter a number between 100 and 200
and I will divide it by 2
and then tell you if it is higher, lower, or equal to 150: 150

150 divided by 2 = 75

number is = 150

Press any key to continue . . .

*/

/*

test 3

Arianna Bikombe
CSCI175N

Enter a number between 100 and 200
and I will divide it by 2
and then tell you if it is higher, lower, or equal to 150: 151

151 divided by 2 = 75.5

number is > 150

Press any key to continue . . .

*/