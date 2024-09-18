
/*


Ques 2 : Write C++ program that take n from the user the number of elements and insert all the value inside stack after
inserting all value inside stack pop all the values and print. Input: n=5 values = 1,2,3,4,5 output :- 5,4,3,2,1.  */

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
    int n;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input elements and push them onto the stack
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        stack.push(value);
    }

    // Print the stack after inserting elements
    cout << "Stack after pushing elements: ";
    stack.print();

    // Pop all elements from the stack and print them
    cout << "Popped elements: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    return 0;
}
