#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Print the list from left to right
void Print_forward(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << nl;
}

// Print the list from right to left
void Print_backward(Node* tail) {
    Node* tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << nl;
}

// Insert a value at the Xth index
void Insert_at_index(Node*& head, Node*& tail, int index, int value) {
    if (index < 0) {
        cout << "Invalid" << nl;
        return;
    }

    Node* newnode = new Node(value);

    if (index == 0) {
        // Insert at the head
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    } else {
        Node* current = head;
        int count = 0;

        // Traverse to the (index-1)th node
        while (current != NULL && count < index - 1) {
            current = current->next;
            count++;
        }

        if (current == NULL) {
            cout << "Invalid" << nl;
            return;
        }

        // Insert after the (index-1)th node
        newnode->next = current->next;
        newnode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newnode;
        } else {
            tail = newnode; // Update tail if inserting at the end
        }
        current->next = newnode;
    }

    // Print the list in both directions
    Print_forward(head);
    Print_backward(tail);
}

int32_t main() {
    faster;
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;
        Insert_at_index(head, tail, X, V);
    }

    return 0;
}
