/*Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

Sample Input:-Enter a number : 5
Sample Output :- The month is: May"
*/
#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter a number: ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "The month is: January" << endl;
            break;
        case 2:
            cout << "The month is: February" << endl;
            break;
        case 3:
            cout << "The month is: March" << endl;
            break;
        case 4:
            cout << "The month is: April" << endl;
            break;
        case 5:
            cout << "The month is: May" << endl;
            break;
        case 6:
            cout << "The month is: June" << endl;
            break;
        case 7:
            cout << "The month is: July" << endl;
            break;
        case 8:
            cout << "The month is: August" << endl;
            break;
        case 9:
            cout << "The month is: September" << endl;
            break;
        case 10:
            cout << "The month is: October" << endl;
            break;
        case 11:
            cout << "The month is: November" << endl;
            break;
        case 12:
            cout << "The month is: December" << endl;
            break;
        default:
            cout << "Invalid" << endl;
            break;
    }

    return 0;
}
