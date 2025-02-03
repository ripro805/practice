#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void Insert_at_tail(Node* &head, Node* &tail, string val) {
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

Node* visit(Node* &head,Node* &crrnt, string addrs){
    Node* tmp=head;
    while(tmp!=NULL){
        if(tmp->val==addrs){
            cout<<tmp->val<<endl;
            crrnt=tmp;
            return crrnt;
        }
        tmp=tmp->next;
    }
    cout << "Not Available" << endl;
    return crrnt;
}

void next(Node* &crrnt){
    if(crrnt==NULL || crrnt->next==NULL){
        cout << "Not Available" << endl;
    }
    else{
        crrnt=crrnt->next;
        cout<<crrnt->val<<endl;
    }
}
void prev(Node* &crrnt){
    if(crrnt==NULL || crrnt->prev==NULL){
        cout << "Not Available" << endl;
    }
    else{
        crrnt=crrnt->prev;
        cout<<crrnt->val<<endl;
    }
}

int32_t main() {
    faster;

    string val;
    Node* head = NULL;
    Node* tail = NULL;

    while (cin >> val && val != "end") {
        Insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;

    Node* crrnt = NULL;
    while (q--) {
        string str;
        cin >> str;

        if (str == "visit") {
            string addrs;
            cin >> addrs;
            if (crrnt == NULL) {
                crrnt = visit(head, crrnt, addrs);  
            } else {
                crrnt = visit(head, crrnt, addrs);
            }
        } else if (str == "next") {
            next(crrnt);
        } else if (str == "prev") {
            prev(crrnt);
        }
    }

    return 0;
}
