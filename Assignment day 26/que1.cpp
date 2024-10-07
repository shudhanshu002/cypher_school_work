//Ques 1. Implement the priority queue using array.

#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

class PriorityQueue {
private:
    int* arr;       // Array to hold the elements
    int capacity;   // Maximum number of elements
    int size;       // Current number of elements

public:
    // Constructor to initialize the priority queue
    PriorityQueue(int cap) {
        capacity = cap;
        arr = new int[capacity]; // Allocate memory for the array
        size = 0;                // Initialize the size to 0
    }

    // Destructor to free allocated memory
    ~PriorityQueue() {
        delete[] arr; // Free the allocated memory
    }

    // Function to insert an element into the priority queue
    void insert(int element) {
        if (size >= capacity) {
            cout << "Priority Queue is full!" << endl;
            return; // Queue is full
        }
        arr[size] = element; // Insert the new element
        size++;              // Increase the size of the queue

        // Rearrange the elements to maintain the priority (max-heap)
        for (int i = size - 1; i > 0; i--) {
            if (arr[i] > arr[(i - 1) / 2]) { // Compare with parent
                swap(arr[i], arr[(i - 1) / 2]); // Swap if current is greater
            } else {
                break; // No need to swap further
            }
        }
    }

    // Function to remove and return the highest priority element
    int remove() {
        if (isEmpty()) {
            cout << "Priority Queue is empty!" << endl;
            return INT_MIN; // Indicate that the queue is empty
        }
        int highestPriority = arr[0]; // The root contains the highest priority
        arr[0] = arr[size - 1]; // Replace root with the last element
        size--; // Reduce the size

        // Rearrange the elements to maintain the priority
        int i = 0;
        while (i < size) {
            int largest = i; // Assume the current node is the largest
            int leftChild = 2 * i + 1; // Left child index
            int rightChild = 2 * i + 2; // Right child index

            // Compare with left child
            if (leftChild < size && arr[leftChild] > arr[largest]) {
                largest = leftChild;
            }

            // Compare with right child
            if (rightChild < size && arr[rightChild] > arr[largest]) {
                largest = rightChild;
            }

            // If the largest is not the current node, swap
            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest; // Move down the tree
            } else {
                break; // No need to rearrange further
            }
        }
        return highestPriority; // Return the highest priority element
    }

    // Function to peek at the highest priority element
    int peek() {
        if (isEmpty()) {
            cout << "Priority Queue is empty!" << endl;
            return INT_MIN; // Indicate that the queue is empty
        }
        return arr[0]; // Return the root element
    }

    // Function to check if the priority queue is empty
    bool isEmpty() {
        return size == 0;
    }
};

// Main function to demonstrate the Priority Queue
int main() {
    PriorityQueue pq(10); // Create a priority queue of capacity 10

    // Insert elements into the priority queue
    pq.insert(30);
    pq.insert(20);
    pq.insert(50);
    pq.insert(10);
    pq.insert(40);

    cout << "Highest priority element: " << pq.peek() << endl; // Should print 50

    cout << "Removing highest priority element: " << pq.remove() << endl; // Should print 50
    cout << "New highest priority element: " << pq.peek() << endl; // Should print 40

    return 0;
}
