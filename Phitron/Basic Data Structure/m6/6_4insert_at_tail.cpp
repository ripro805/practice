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
void insert_at_tail(Node* &head, int val) //o(n)
{
    Node *newnode = new Node(val);
    //cornercase
    if(head==NULL){
        head=newnode;
    }
    
  Node *tmp = head;
    while (tmp->next != NULL)
    {
       
        tmp = tmp->next;
    }
    tmp->next=newnode;
}
void print_linklist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int32_t main()
{
    faster;
    Node *head = new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(40);
    Node *c = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    insert_at_tail(head, 100);
    print_linklist(head);
    return 0;
}