/*
Ques-02 Write a C++ function that takes a string as input and reverses it.

Sample Input:
Enter a string: CipherSchools

Sample Output:
Reversed string: sloohcSrehpiC
*/
#include <iostream>
#include <string>
using namespace std;

void reverseString(string str) {
    int n = str.length();


    for (int i = 0; i < n / 2; i++) {

        swap(str[i], str[n - i - 1]);
    }

    cout << "Reversed string: " << str << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str);

    return 0;
}

