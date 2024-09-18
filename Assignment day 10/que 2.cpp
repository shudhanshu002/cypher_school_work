/*Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome
(a word, phrase, or sequence that reads the same backward as forward).
 The function should ignore spaces, punctuation, and case sensitivity.
 Test your function with various strings in the main() function.

Example:

Input: "A man, a plan, a canal, Panama"
Output: true*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string testStr = "A man, a plan, a canal, Panama";

    if (isPalindrome(testStr)) {
        cout <<"true" << endl;
    } else {
        cout << "false"<< endl;
    }

    return 0;
}
