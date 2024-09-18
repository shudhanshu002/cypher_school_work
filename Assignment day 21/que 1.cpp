/*
Ques 1: Write C++ program to create a doubly linkedlist and insert a node at any position . Input Linkedlist: 2<->4<->5 ,p = 2, x = 6 Output: 2 4 5 6,
 Explanation: p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).

*/
#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to insert a node at a specific position
void insertAtPosition(Node*& head, int pos, int x) {
    Node* newNode = new Node(x);

    // Special case: inserting at the head (position 0)
    if (pos == 0) {
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    // Traverse to the position where the new node needs to be inserted
    Node* current = head;
    for (int i = 0; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
    }

    // Special case: position is out of bounds
    if (current == nullptr) {
        cout << "Position out of bounds" << endl;
        delete newNode;
        return;
    }

    // Insert the new node
    newNode->next = current->next;
    if (current->next != nullptr) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    newNode->prev = current;
}

// Function to print the doubly linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create the initial doubly linked list: 2 <-> 4 <-> 5
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;

    // Insert a node at position 2 with value 6
    int pos = 2, x = 6;
    insertAtPosition(head, pos, x);

    // Print the updated list
    printList(head);

    // Free allocated memory (optional but good practice)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
