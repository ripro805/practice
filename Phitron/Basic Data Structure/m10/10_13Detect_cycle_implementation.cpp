#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int32_t main()
{
    faster;
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a;
    Node* slow=head;
    Node* fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"Cycle"<<nl;
    }
    else{
        cout<<"No cycle"<<nl;
    }

    return 0;
}