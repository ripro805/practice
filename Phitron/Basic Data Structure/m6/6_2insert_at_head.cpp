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
void Insert_at_head(Node* &head, int val) //O(1)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
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
    Insert_at_head(head, 100);
    print_linklist(head);
    return 0;
}