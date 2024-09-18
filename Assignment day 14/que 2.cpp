//
//Ques 2: Write a program that defines a Rectangle class with a copy constructor

#include <iostream>
using namespace std;

class Rectangle {
    // Properties of the Rectangle
    private:
        double length;
        double width;

    public:
        // Constructor to initialize length and width
        Rectangle(double l, double w) {
            length = l;
            width = w;
        }

        // Copy constructor
        Rectangle(const Rectangle &rect) {
            length = rect.length;
            width = rect.width;
        }

        // Method to calculate the area of the rectangle
        double getArea() {
            return length * width;
        }

        // Method to display rectangle's dimensions and area
        void displayInfo() {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << getArea() << endl;
        }
};

int main() {
    // Create a rectangle object
    Rectangle rect1(10.5, 5.0);

    // Use copy constructor to create another rectangle object (copy of rect1)
    Rectangle rect2 = rect1;

    // Display information of both rectangles
    cout << "Rectangle 1:" << endl;
    rect1.displayInfo();

    cout << "\nRectangle 2 (Copy of Rectangle 1):" << endl;
    rect2.displayInfo();

    return 0;
}
