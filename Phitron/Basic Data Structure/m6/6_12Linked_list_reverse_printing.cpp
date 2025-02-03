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
void insert_at_tail(Node *&head, Node *&tail, int val) // o(1)
{
    Node *newnode = new Node(val);
    // cornercase
    if (head == NULL)
    {
        head = newnode;
        tail=newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next; // for perfectly track'.......
}
void print_linklist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
 void Print_reverse(Node* tmp){
   if(tmp==NULL){
    return;
   }
   Print_reverse(tmp->next);
   cout<<tmp->val<<" ";
 }
int32_t main()
{
    faster;
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_linklist(head);
    cout<<nl;

    Print_reverse(head);
    cout<<nl;
    return 0;
}