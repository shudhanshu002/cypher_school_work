/*
Ques 1: You are given a image in n*m matrix now you have to rotate the image by 90 degree. Input : n=3, m=3 , image[3][3]={[1, 2, 3],[4,5,6],[7,8,9]}. Output =7 4 1
8 5 2
9 6 3

Take all input from user.

*/

#include <iostream>
using namespace std;

// Function to rotate the matrix by 90 degrees clockwise
void rotate90Clockwise(int matrix[][100], int n, int m) {
    // To rotate 90 degrees, we transpose the matrix and then reverse each row.
    int rotated[100][100];

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    // Display the rotated matrix
    cout << "Rotated Matrix by 90 Degrees:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;

    // Take input for dimensions of the matrix
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    int matrix[100][100];  // Assume max size of 100x100 for simplicity

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Rotate the matrix by 90 degrees clockwise
    rotate90Clockwise(matrix, n, m);

    return 0;
}

