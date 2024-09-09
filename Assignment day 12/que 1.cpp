/*Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value.
Input: A linked list with elements 10 -> 20 -> 30 -> 40
Output: 10 20 30 40
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

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
    head->next->next->next = new Node{40, nullptr};

    printLinkedList(head);

    return 0;
}
