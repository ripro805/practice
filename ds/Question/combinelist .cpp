#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert nodes at the end of the linked list
void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to combine two lists in an alternating manner
Node* combineLists(Node* a, Node* b) {
    Node* head = nullptr; // head of the new list
    Node* tail = nullptr; // to keep track of the last node in the new list

    while (a != nullptr || b != nullptr) {
        // Add a node from list A if available
        if (a != nullptr) {
            if (head == nullptr) {
                head = tail = new Node{a->data, nullptr};
            } else {
                tail->next = new Node{a->data, nullptr};
                tail = tail->next;
            }
            a = a->next;
        }

        // Add a node from list B if available
        if (b != nullptr) {
            if (head == nullptr) {
                head = tail = new Node{b->data, nullptr};
            } else {
                tail->next = new Node{b->data, nullptr};
                tail = tail->next;
            }
            b = b->next;
        }
    }

    return head;
}

int main() {
    Node* A = nullptr;
    Node* B = nullptr;

    // Initializing list A
    insert(A, 7);
    insert(A, 5);
    insert(A, 3);
    insert(A, 1);
    insert(A, 20);

    // Initializing list B
    insert(B, 6);
    insert(B, 25);
    insert(B, 32);
    insert(B, 11);
    insert(B, 9);

    // Combine lists
    Node* combinedList = combineLists(A, B);

    // Print the combined list
    cout << "Combined list: ";
    printList(combinedList);

    return 0;
}
