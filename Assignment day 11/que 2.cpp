/*Ques 2: You are given an array and target value.
You have to find the index of target value.
If target doest exist inside the array then print -1.Assume indexing is 1 based.

Sample Input :- Array -[2,4,6,7,8]
Target: 6
Output: 3*/

#include <iostream>
using namespace std;

int findIndex(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1;  // Return 1-based index
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;


    int index = findIndex(arr, size, target);
    cout << index << endl;

    return 0;
}
