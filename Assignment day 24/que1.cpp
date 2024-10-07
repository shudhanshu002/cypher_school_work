// Ques 1 . You are given a binary array. Your task is to find the maximum number of consecutive ones in array.
// Input :- arr :[1,1,0,1,1,1]
// Output: 3.

#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(const vector<int>& arr) {
    int maxCount = 0; // To keep track of the maximum count of consecutive ones
    int currentCount = 0; // To keep track of the current count of consecutive ones

    for (int num : arr) {
        if (num == 1) {
            currentCount++; // Increment the count if the current number is 1
        } else {
            // If we hit a 0, update maxCount and reset currentCount
            maxCount = max(maxCount, currentCount);
            currentCount = 0; // Reset the current count
        }
    }
    
    // Check at the end of the loop in case the array ends with 1s
    maxCount = max(maxCount, currentCount);

    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1}; // Example input
    int result = maxConsecutiveOnes(arr);
    cout << "Maximum number of consecutive ones: " << result << endl; // Output the result
    return 0;
}
