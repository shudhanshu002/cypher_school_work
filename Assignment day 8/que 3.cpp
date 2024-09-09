/*Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

Sample Input : - str1 = "Hello, "
str2 = "World!"

Sample Output :- "Hello, World!"*/
#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    cout <<concatenateStrings(str1, str2) << endl;
    return 0;
}
