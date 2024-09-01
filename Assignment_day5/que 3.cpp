/*Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.

Sample Input:
Enter a string: cipherschools

Sample Output:
Number of vowels: 4
Number of consonants: 9
*/
#include <iostream>
#include <string>

using namespace std;

void countVowelsAndConsonants(const string& str) {
    int vowelCount = 0, consonantCount = 0;

    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonantCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    countVowelsAndConsonants(input);

    return 0;
}
