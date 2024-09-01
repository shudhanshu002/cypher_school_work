/*Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

Sample Input:
Enter the size of the array: 5
Enter the array elements: 5 10 15 20 25

Sample Output:
Number of odd numbers: 3
Number of even numbers: 2
*/
#include <iostream>

using namespace std;

void countOddAndEven(const int arr[], int size, int &countOdd, int &countEven) {
    countOdd = 0;
    countEven = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
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

    int countOdd, countEven;
    countOddAndEven(arr, size, countOdd, countEven);

    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;

    return 0;
}
