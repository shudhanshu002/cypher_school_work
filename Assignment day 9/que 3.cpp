
/*Ques 3: Create a program that demonstrates the use of a pointer to a pointer.
 Declare an integer variable, a pointer to the integer, and a pointer to that pointer.
  Use all three to print the value of the integer.*/
  #include <iostream>
using namespace std;

int main() {
    int num = 100;

    int *ptr = &num;

    int **ptrToPtr = &ptr;

    // Print the value of the integer
    cout << "Value of the variable: " << num << endl;

    cout << "Value using the pointer: " << *ptr << endl;
    cout << "Value using the pointer to pointer: " << **ptrToPtr << endl;

    return 0;
}
