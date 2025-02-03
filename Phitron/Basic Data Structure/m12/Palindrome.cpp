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

void Print_forward(Node* &head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << nl;
}

void Print_backward(Node* &tail) {
    Node* tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << nl;
}

void Insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void reverse_doubly(Node* &head, Node* &tail) {
    for (Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev) {
        swap(i->val, j->val);
    }
}

bool isPalindrome(Node* &head, Node* &tail) {
    Node* tmpHead = head;
    Node* tmpTail = tail;

    reverse_doubly(head, tail); 

    

    while (tmpHead != NULL && tmpTail != NULL) {
        if (tmpHead->val != tmpTail->val) {
            return false;
        }
        tmpHead = tmpHead->next;
        tmpTail = tmpTail->prev;
    }
    return true;
}

int32_t main() {
    faster;

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        Insert_at_tail(head, tail, val);
    }

    if (isPalindrome(head, tail)) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }

    return 0;
}
