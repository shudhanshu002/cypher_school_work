/* Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

*/
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        double grade;

    public:
        // Constructor to initialize the student's details
        Student(string n, int a, double g) {
            name = n;
            age = a;
            grade = g;
        }

        // Member function to display the student's details using 'this' pointer
        void displayDetails() {
            cout << "Student Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Grade: " << this->grade << endl;
        }
};

int main() {
    // Creating a student object
    Student student1("John", 20, 85.5);

    // Display student details using the 'this' pointer in the member function
    student1.displayDetails();

    return 0;
}
