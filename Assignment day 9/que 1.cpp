/*
Ques 1: Write a C++ program that declares an integer variable, initializes it,
 and then declares a pointer that stores the address of this variable.
  Print the value of the variable using both the variable itself and the pointer.
  */

#include <iostream>
using namespace std;

int main() {
    int num = 42;

    int *ptr = &num;

    cout << "Value of the variable: " << num << endl;

    cout << "Value using the pointer: " << *ptr << endl;

    return 0;
}
