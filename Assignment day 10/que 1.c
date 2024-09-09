/*Day - 10 Questions - Week-03 (August 28th, 2024)
Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

Example:

Input: {1, 5, 3, 9, 2}
Output: 9
*/
#include <stdio.h>

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);


    printf("The maximum value in the array is: %d\n", findMax(arr, size));

    return 0;
}
