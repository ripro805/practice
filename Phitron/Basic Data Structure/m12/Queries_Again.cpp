#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_index(Node *&head, Node *&tail, int indx, int val, bool &flag)
{
    flag = true; 
    if (indx < 0)
    {
        cout << "Invalid" << endl;
        flag = false;
        return;
    }

    Node *newnode = new Node(val);

    if (indx == 0)
    {
        newnode->next = head;
        if (head != NULL)
            head->prev = newnode;
        head = newnode;
        if (tail == NULL)
            tail = head;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < indx - 1; i++)
        {
            if (tmp == NULL)
            {
                cout << "Invalid" << endl;
                delete newnode;
                flag = false;
                return;
            }
            tmp = tmp->next;
        }

        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            delete newnode;
            flag = false;
            return;
        }

        newnode->next = tmp->next;
        newnode->prev = tmp;
        if (tmp->next != NULL)
            tmp->next->prev = newnode;
        tmp->next = newnode;
        if (newnode->next == NULL)
            tail = newnode;
    }
}

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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

        bool flag;
        insert_at_index(head, tail, X, V, flag);

        if (flag && head != NULL)
        {
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}
