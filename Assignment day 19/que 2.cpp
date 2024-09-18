/*
Ques 2: Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.
*/
#include <iostream>
#include <fstream>  // For file handling
#include <string>
using namespace std;

int main() {
    // Create an input file stream (ifstream) to read from the file
    ifstream inFile("sample file.txt");

    // Check if the file opened successfully
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    // Read and print the contents of the file
    cout << "Contents of the file are:" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}
