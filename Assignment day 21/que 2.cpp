/*  Ques 2: Write C++ program that detect the cycle inside a given linkedlist if their is any cycle present then print true otherwise print false.
Input: head = [3,2,0,-4], pos = 1.
Output: true. Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

*/

#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to detect a cycle in the linked list
bool detectCycle(Node* head) {
    if (head == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    // Create the linked list: 3 -> 2 -> 0 -> -4
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);

    // Create a cycle: tail connects to the node with value 2
    head->next->next->next->next = head->next;

    // Detect the cycle
    if (detectCycle(head)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    // Free allocated memory (optional but good practice)
    // This is more complex due to the cycle; handled here for completeness
    // This implementation does not handle breaking the cycle or freeing memory correctly.

    return 0;
}
