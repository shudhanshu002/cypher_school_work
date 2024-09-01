/*Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of the array: 75

*/
#include <iostream>

using namespace std;

int sumOfArray(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
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

    int sum = sumOfArray(arr, size);

    cout << "Sum of the array: " << sum << endl;

    return 0;
}
