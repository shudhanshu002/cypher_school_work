/*Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of odd numbers: 45
Sum of even numbers: 30

*/
#include <iostream>

using namespace std;

void sumOddAndEven(const int arr[], int size, int &sumOdd, int &sumEven) {
    sumOdd = 0;
    sumEven = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sumOdd, sumEven;
    sumOddAndEven(arr, size, sumOdd, sumEven);

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;

    return 0;
}
