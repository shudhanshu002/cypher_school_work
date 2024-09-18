/*
Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
   public:
        string brandName;
        string model;
        string engine;
        int numberOfSeats;


        Car(string b, string m, string e, int seats) {
            brandName = b;
            model = m;
            engine = e;
            numberOfSeats = seats;
        }

        // Method to display the car's information
        void displayInfo() {
            cout << "Brand Name: " << brandName << endl;
            cout << "Model: " << model << endl;
            cout << "Engine: " << engine << endl;
            cout << "Number of Seats: " << numberOfSeats << endl;
        }
};

int main() {
    // Create an object of Car class and initialize it
    Car myCar("Toyota", "Corolla", "1.8L", 5);

    // Call the displayInfo method to show car details
    myCar.displayInfo();

    return 0;
}
