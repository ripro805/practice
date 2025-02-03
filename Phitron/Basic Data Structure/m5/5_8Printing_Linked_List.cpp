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
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(48);
    head->next = a;
    a->next = b;
    b->next=c;
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    return 0;
}