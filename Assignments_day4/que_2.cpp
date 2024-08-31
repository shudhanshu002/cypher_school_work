/*Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

Sample Output:-

Complex Number 1: 3 + 4i
Complex Number 2: 1 + 2i
Sum: 4 + 6i
Difference: 2 + 2i
*/
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:

    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}


    Complex operator+( Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }


    Complex operator-( Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }


    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {

    Complex num1(3, 4);
    Complex num2(1, 2);


    Complex sum = num1 + num2;
    Complex difference = num1 - num2;


    cout << "Complex Number 1: ";
    num1.display();

    cout << "Complex Number 2: ";
    num2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    return 0;
}
