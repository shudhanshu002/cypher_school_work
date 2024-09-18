//Write C++ program to demonstrate how to create dynamic variable using new keyword.
#include <iostream>
using namespace std;

int main() {
    // Creating a dynamic integer variable using new keyword
    int *dynamicVar = new int;  // Memory allocated dynamically for an integer

    // Assign a value to the dynamically allocated memory
    *dynamicVar = 42;

    // Display the value of the dynamically allocated variable
    cout << "Value of dynamicVar: " << *dynamicVar << endl;

    // Free the dynamically allocated memory
    delete dynamicVar;

    return 0;
}

