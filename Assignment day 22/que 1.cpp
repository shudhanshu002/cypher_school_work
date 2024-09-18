
/*
Ques 1: Write C++ program that create a stack using Array.
*/

#include <iostream>
using namespace std;

#define MAX 100  // Define maximum size of the stack

class Stack {
    private:
        int arr[MAX];
        int top;

    public:
        Stack() : top(-1) {}  // Initialize top to -1 indicating an empty stack

        // Check if the stack is full
        bool isFull() {
            return top == MAX - 1;
        }

        // Check if the stack is empty
        bool isEmpty() {
            return top == -1;
        }

        // Push an element onto the stack
        void push(int value) {
            if (isFull()) {
                cout << "Stack overflow!" << endl;
                return;
            }
            arr[++top] = value;
        }

        // Pop an element from the stack
        int pop() {
            if (isEmpty()) {
                cout << "Stack underflow!" << endl;
                return -1;  // Return -1 or some error value
            }
            return arr[top--];
        }

        // Peek at the top element of the stack
        int peek() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return -1;  // Return -1 or some error value
            }
            return arr[top];
        }

        // Print all elements in the stack
        void print() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return;
            }
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Stack stack;

    // Push some elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    // Print the stack
    cout << "Stack after pushing elements: ";
    stack.print();

    // Pop all elements from the stack
    cout << "Popped elements: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    return 0;
}
