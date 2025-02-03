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

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_any(Node *&head, Node *&tail, int indx)
{
    if (indx < 0 || head == NULL)
    {
        return;
    }

    if (indx == 0)
    {
        Node *tmp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < indx - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
    {
        return;
    }

    Node *deletedNode = tmp->next;
    tmp->next = tmp->next->next;

    if (tmp->next == NULL)
    {
        tail = tmp;
    }

    delete deletedNode;
}

void print_linklist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << nl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, V);
            if (tail == NULL)
                tail = head;
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_any(head, tail, V);
        }

        print_linklist(head);
    }

    return 0;
}
