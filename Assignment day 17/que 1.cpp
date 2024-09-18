/*
Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

*/
#include <iostream>
using namespace std;

int main() {
    int rows, cols, key;

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

    // Take input for the key to be searched
    cout << "Enter the key to search: ";
    cin >> key;

    // Check if the key exists in the 2D array
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    // Output the result
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
