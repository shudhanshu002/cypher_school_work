/*Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B"
*/
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the score: ";
    int n;
    cin>>n;
    if(n>=90 && n<=100) cout<<"Grade: A";
    else if(n>=80 && n<=89) cout<<"Grade: B";
    else if(n>=70 && n<=79) cout<<"Grade: C";
    else if(n>=60 && n<=69) cout<<"Grade: D";
    else cout<<"Grade: F";
}
