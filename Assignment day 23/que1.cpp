// Ques 1: You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target. If it is possible then print YES otherwise print NO. Sample testcase arr :[2,7,11,15], target = 9 output : YES .
//  Write code that work in O(n^2) complexity and O(n*logn) complexity.
//   Take all the required input from user.

#include <iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    // Sort the array first
    sort(arr.begin(), arr.end());

    // Two-pointer approach
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return true; // Found two elements whose sum equals the target
        } else if (sum < target) {
            left++; // Move the left pointer to increase the sum
        } else {
            right--; // Move the right pointer to decrease the sum
        }
    }

    return false; // No such pair found
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    if (twoSum(arr, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
