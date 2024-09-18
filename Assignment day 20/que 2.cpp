/*Ques 2: Write a C++ program that take 2D array from user and then sort this array. Input n=3, m=3 array=7 4 1
8 5 2
9 6 3

output :- 1 2 3
4 5 6
7 8 9
*/

#include <iostream>
#include <algorithm>  // For sort()
using namespace std;

int main() {
    int n, m;

    // Take input for dimensions of the matrix
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    int matrix[100][100];  // Assume max size of 100x100 for simplicity
    int tempArray[10000];  // Flattened array for sorting (max size n*m)

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            tempArray[index++] = matrix[i][j];
        }
    }

    // Sort the flattened array
    sort(tempArray, tempArray + (n * m));

    // Rearrange the sorted elements back into the matrix
    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = tempArray[index++];
        }
    }

    // Display the sorted matrix
    cout << "Sorted Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

