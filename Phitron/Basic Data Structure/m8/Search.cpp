#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

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
        tail = newnode;
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
int search_indx(Node *head, int x)
{
    int indx = 0;
    if (head == NULL)
    {
        return 0;
    }
    for (Node *i = head; i != NULL; i = i->next, indx++)
    {
        if (i->val == x)
        {
            return indx;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
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
        int x;
        cin >> x;

        cout << search_indx(head, x) << nl;
    }
    return 0;
}