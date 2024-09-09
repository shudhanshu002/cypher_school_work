/*Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array.
 If it exists inside an array then print YES otherwise NO.

Sample Input :- Array -[2,4,6,7,8]
Target: 6
Output: YES
*/

#include <iostream>
using namespace std;

void findTarget(int arr[], int size, int target) {
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    findTarget(arr, size, target);

    return 0;
}
