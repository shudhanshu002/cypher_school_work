/* Ques 2: Write a C++ code that take linked list from user input and a value integer .
 Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40
 */
 #include <iostream>
using namespace std;

// Node class for a linked list
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

// Function to insert a new node at the end of the linked list
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

// Function to delete a node with a specific value
void deleteValue(Node* &head, int val) {
    if (head == nullptr) return;

    // If the head node needs to be deleted
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next;
    }

    // If the value is found, delete the node
    if (temp->next != nullptr) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

int main() {
    Node* head = nullptr;

    // Insert elements into the linked list
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Original Linked List: ";
    display(head);

    int value;
    cout << "Enter the value to delete: ";
    cin >> value;

    // Delete the value from the linked list
    deleteValue(head, value);

    cout << "Linked List after deletion: ";
    display(head);

    return 0;
}

