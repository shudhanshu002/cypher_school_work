/*Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list.
 input: A linked list with elements 10 -> 20 -> 30, and a new data 40
Output: The linked list becomes 10 -> 20 -> 30 -> 40
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    insertAtEnd(head, 40);

    printLinkedList(head);

    return 0;
}
