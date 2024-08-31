//Day1_que1
/*Day - 01 Questions - Week-01 (August 14th, 2024)
Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

Sample Input :- Enter the first string: Hello
Enter the second string: World

Sample Output:- Concatenated string: HelloWorld
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter the first string: ";
    string s1;
    getline(cin,s1);
    cout<<"Enter the second string: ";
    string s2;
    getline(cin,s2);
    cout<<s1+s2;
}
