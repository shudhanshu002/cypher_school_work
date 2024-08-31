/*Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

Sample Input:- Enter the first number: 10
Enter the second number: 20
Enter the third number: 15

Sample Output :- The largest number is: 20
*/
#include <iostream>
using namespace std;
int main()
{
    int first,second,third;
    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the second number: ";
    cin>>second;
    cout<<"Enter the third number: ";
    cin>>third;
    if(first>=second && first >=third) cout<<"The largest number is: "<<first;
    else if(second>=first && second >= third) cout<<"The largest number is: "<<second;
    else cout<<"The largest number is: "<<third;
}
