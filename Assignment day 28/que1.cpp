/*
Ques 1. You are tasked with creating a simple vehicle system in C++ using object-oriented programming principles. Implement a base class Vehicle and two derived classes Car and Bike. Each vehicle can perform certain common actions, but they also have specific attributes and methods.

Requirements:

Base Class: Vehicle
Attributes:
string make: The manufacturer of the vehicle.
int year: The year the vehicle was manufactured.
float fuel: The amount of fuel left in the vehicle.
Methods:
void refuel(float amount): Increases the fuel by amount.
void display(): A virtual method that displays the vehicle's details.
Derived Class: Car (inherits from Vehicle)
Attributes:
int doors: Number of doors in the car.
Methods:
void display(): Override the display() method to show car-specific details, including the number of doors.
void openDoors(): A method that prints "Doors are opened."
Derived Class: Bike (inherits from Vehicle)
Attributes:
bool hasCarrier: Indicates whether the bike has a carrier.
Methods:
void display(): Override the display() method to show bike-specific details, including whether it has a carrier.
void kickStart(): A method that prints "Bike kick-started."
Main Functionality:
Create objects of Car and Bike with relevant attributes.
Refuel both vehicles and display their details.
Call their specific methods (openDoors() for Car and kickStart() for Bike).
*/
#include <iostream>
#include <string>
using namespace std;

// Base Class: Vehicle
class Vehicle {
protected:
    string make;   // Manufacturer of the vehicle
    int year;      // Year of manufacture
    float fuel;    // Amount of fuel left

public:
    // Constructor
    Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {}

    // Method to refuel the vehicle
    void refuel(float amount) {
        fuel += amount;
        cout << "Refueled " << amount << " units. Current fuel: " << fuel << " units." << endl;
    }

    // Virtual method to display vehicle details
    virtual void display() {
        cout << "Make: " << make << ", Year: " << year << ", Fuel: " << fuel << " units." << endl;
    }
};

// Derived Class: Car
class Car : public Vehicle {
private:
    int doors; // Number of doors in the car

public:
    // Constructor
    Car(string m, int y, float f, int d) : Vehicle(m, y, f), doors(d) {}

    // Override the display method to show car-specific details
    void display() override {
        Vehicle::display(); // Call base class display
        cout << "Doors: " << doors << endl;
    }

    // Method to open doors
    void openDoors() {
        cout << "Doors are opened." << endl;
    }
};

// Derived Class: Bike
class Bike : public Vehicle {
private:
    bool hasCarrier; // Indicates whether the bike has a carrier

public:
    // Constructor
    Bike(string m, int y, float f, bool c) : Vehicle(m, y, f), hasCarrier(c) {}

    // Override the display method to show bike-specific details
    void display() override {
        Vehicle::display(); // Call base class display
        cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }

    // Method to kick-start the bike
    void kickStart() {
        cout << "Bike kick-started." << endl;
    }
};

// Main function
int main() {
    // Create a Car object
    Car myCar("Toyota", 2020, 15.5, 4);
    myCar.refuel(5.0); // Refuel the car
    myCar.display();    // Display car details
    myCar.openDoors();  // Open doors of the car

    cout << endl; // Line break for better output readability

    // Create a Bike object
    Bike myBike("Yamaha", 2019, 5.0, true);
    myBike.refuel(3.0); // Refuel the bike
    myBike.display();    // Display bike details
    myBike.kickStart();  // Kick-start the bike

    return 0;
}
