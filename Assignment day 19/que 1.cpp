/*
Ques 1: Write a C++ program that take txt file input and write your details inside that file through c++ and then print this details.

*/
#include <iostream>
#include <fstream>  // For file handling
#include <string>
using namespace std;

int main() {
    // Create an output file stream (ofstream) to write to the file
    ofstream outFile("details.txt");

    // Check if the file opened successfully
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Write details into the file
    outFile << "Name: John Doe" << endl;
    outFile << "Age: 25" << endl;
    outFile << "Occupation: Software Developer" << endl;

    // Close the file after writing
    outFile.close();

    // Now, read the file to display its contents
    ifstream inFile("details.txt");

    // Check if the file opened successfully
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    // Read and print the contents of the file
    cout << "Details inside the file are:" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}
