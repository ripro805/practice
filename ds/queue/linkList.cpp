#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue
{
private:
    Node *f;
    Node *r;

public:
    Queue() : f(nullptr), r(nullptr) {}

    void linkedTraversal()
    {
        cout << "Printing the elements of this linkedlist";
        Node *ptr = f;
        while (ptr != nullptr)
        {
            cout << "Element: " << endl;
            ptr = ptr->next;
        }
    }
    void enqueue(int val)
    {
        Node *n = new Node(val);
        if (n == nullptr)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if (f == nullptr)
            {
                f = r = n;
            }
            else
            {
                r->next = n;
            }
        }
    }
    int dequeue()
    {
        int val = -1;
        if (f == nullptr)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Node *ptr = f;
            f = f->next;
            val = ptr->data;
            delete ptr;
        }
        return val;
    }
};
int main()
{
    Queue q;
    q.linkedTraversal();
    cout << "Dequeuing element " << q.dequeue() << endl;
    q.enqueue(34);
    q.enqueue(4);
    q.enqueue(7);
    q.enqueue(17);
    cout << "Dequeuing element " << q.dequeue() << endl;
    cout << "Dequeuing element " << q.dequeue() << endl;
    cout << "Dequeuing element " << q.dequeue() << endl;
    cout << "Dequeuing element " << q.dequeue() << endl;
    q.linkedTraversal();
    return 0;
}