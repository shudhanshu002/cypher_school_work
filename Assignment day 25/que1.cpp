/*
Ques 1. Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
Sample :- Input: nums = [2,2,1]
Output: 1
Note: Take all the required input from user.
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(const vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR operation
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}
