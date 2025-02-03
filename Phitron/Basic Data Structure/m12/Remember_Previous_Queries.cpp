#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"

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

void Print_forward(Node* head) {
    if (!head) {
        cout << "L ->" << nl;
        return;
    }
    cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << nl;
}

void Print_backward(Node* tail) {
    if (!tail) {
        cout << "R ->" << nl;
        return;
    }
    cout << "R -> ";
    Node* tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << nl;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* new_node = new Node(val);
    if (tail == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void delete_at_index(Node*& head, Node*& tail, int indx) {
    if (indx < 0 || head == NULL) {
        return;
    }

    if (indx == 0) {
        Node* tmp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete tmp;
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < indx - 1; i++) {
        if (tmp == NULL || tmp->next == NULL) {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL) {
        return;
    }

    Node* deletedNode = tmp->next;
    tmp->next = tmp->next->next;

    if (tmp->next != NULL) {
        tmp->next->prev = tmp;
    } else {
        tail = tmp;
    }

    delete deletedNode;
}


int main() {
    

    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;

    while (q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, tail, V);
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        } else if (X == 2) {
            delete_at_index(head, tail, V);
        }

        Print_forward(head);
        Print_backward(tail);
    }

    return 0;
}
