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
    tail = tail->next;
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

void remove_duplicates(Node *head)
{
    Node *crrnt = head;
    while (crrnt != NULL)
    {
        Node *tmp = crrnt;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == crrnt->val)
            {
                Node *duplicate = tmp->next;
                tmp->next = tmp->next->next;
                delete duplicate;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        crrnt = crrnt->next;
    }
}

int main()
{
   
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_linklist(head);

    return 0;
}
