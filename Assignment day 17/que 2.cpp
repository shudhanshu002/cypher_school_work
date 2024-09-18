/* Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.*/
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Take input for dimensions of the 2D array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    // Take input for the elements of the 2D array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    // Calculate the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
    }

    // Output the result
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
