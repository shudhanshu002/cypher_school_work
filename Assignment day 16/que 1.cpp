/*
Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer.
Now insert the value inside linkedlist such that new likedlist is also in sorted order.
Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40
*/

#include <iostream>
using namespace std;

// Node class for the linked list
class Node {
    public:
        int data;
        Node* next;

        // Constructor to initialize node
        Node(int val) {
            data = val;
            next = nullptr;
        }
};

// Function to insert a new node at the correct position in a sorted linked list
void insertInSortedOrder(Node* &head, int val) {
    Node* newNode = new Node(val);

    // If the list is empty or the new value is smaller than the head
    if (head == nullptr || head->data >= val) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Find the position where the new value should be inserted
    while (temp->next != nullptr && temp->next->data < val) {
        temp = temp->next;
    }

    // Insert the new node in the sorted position
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert elements into the linked list
void insert(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;

    // Input: Create a sorted linked list
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Original Sorted Linked List: ";
    display(head);

    // Take user input for the value to insert
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;

    // Insert the value into the sorted linked list
    insertInSortedOrder(head, value);

    // Display the updated linked list
    cout << "Linked List after insertion: ";
    display(head);

    return 0;
}
