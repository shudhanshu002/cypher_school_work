/*
Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:

Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().
*/
#include <iostream>
#include <string>
#include <tuple>  // For std::tuple
using namespace std;

class Person {
    private:
        string firstName;
        string lastName;
        int age;

    public:
        // Constructor to initialize member variables
        Person(string fName, string lName, int a) : firstName(fName), lastName(lName), age(a) {}

        // Method to get the full name
        string getFullName() {
            return firstName + " " + lastName;
        }

        // Method to return a tuple containing firstName, lastName, and age
        tuple<string, string, int> getDetails() {
            return make_tuple(firstName, lastName, age);
        }
};

int main() {
    // Create a Person object
    Person person("John", "Doe", 25);

    // Display the full name
    cout << "Full Name: " << person.getFullName() << endl;

    // Get the details as a tuple
    tuple<string, string, int> details = person.getDetails();

    // Unpack the tuple using std::get()
    string fName = get<0>(details);
    string lName = get<1>(details);
    int age = get<2>(details);

    // Display unpacked details
    cout << "First Name: " << fName << endl;
    cout << "Last Name: " << lName << endl;
    cout << "Age: " << age << endl;

    return 0;
}

