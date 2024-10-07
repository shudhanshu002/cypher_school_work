//  Ques 2. Implement the stack using linkedlist.

#include <iostream>
using namespace std;

// Node structure representing each element in the stack
class Node {
public:
    int data;      // Value of the node
    Node* next;    // Pointer to the next node

    Node(int value) : data(value), next(nullptr) {} // Constructor
};

// Stack class implementing stack operations using a linked list
class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    Stack() : top(nullptr) {} // Constructor initializes top to nullptr

    // Push operation to add an element to the stack
    void push(int value) {
        Node* newNode = new Node(value); // Create a new node
        newNode->next = top;              // Link new node to the previous top
        top = newNode;                    // Update top to the new node
    }

    // Pop operation to remove and return the top element
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Return error code for empty stack
        }
        int poppedValue = top->data; // Get the value to return
        Node* temp = top;            // Temporary pointer to delete the top node
        top = top->next;             // Update top to the next node
        delete temp;                 // Free memory
        return poppedValue;          // Return the popped value
    }

    // Peek operation to return the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Return error code for empty stack
        }
        return top->data; // Return the top value
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free memory when the stack is destroyed
    ~Stack() {
        while (!isEmpty()) {
            pop(); // Pop all elements to free memory
        }
    }
};

// Main function to demonstrate the stack implementation
int main() {
    Stack stack;

    // Pushing elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Demonstrating peek and pop operations
    cout << "Top element: " << stack.peek() << endl; // Should print 30
    cout << "Popped element: " << stack.pop() << endl; // Should print 30
    cout << "Top element after pop: " << stack.peek() << endl; // Should print 20

    // Demonstrating popping all elements
    stack.pop(); // Remove 20
    stack.pop(); // Remove 10
    stack.pop(); // Attempt to pop from empty stack

    return 0;
}
