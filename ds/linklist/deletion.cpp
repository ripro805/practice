#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void linktraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
void dltfirst(Node *&head)
{
    Node *ptr = head;
    head = head->next;
    free(ptr);
}
void dltbetween(Node *&head, int index)
{
    Node *ptr = head;
    Node *q = head->next;
    int pos = 0;
    while (pos < index - 1)
    {
        ptr = ptr->next;
        q = q->next;
        pos++;
    }

    ptr->next = q->next;

    free(q);
}
void dltlast(Node *&head)
{
    Node *ptr = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    ptr->next = NULL;
    free(q);
}
void dltbyValue(Node *head, int value)
{
    Node *ptr = head;
    Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    if (q->data == value)
    {
        ptr->next = q->next;
        free(q);
    }
}


int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *forth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    Node *seventh = new Node();

    head->data = 2;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 11;
    third->next = forth;

    forth->data = 44;
    forth->next = fifth;

    fifth->data = 15;
    fifth->next = sixth;

    sixth->data = 11;
    sixth->next = seventh;

    seventh->data = 55;
    seventh->next = NULL;

    linktraversal(head);

    cout << "After deletion the first:" << endl;
    dltfirst(head);
    linktraversal(head);

    cout << "After deletion the index 2:" << endl;

    dltbetween(head, 2);
    linktraversal(head);

    cout << "After deletion the last:" << endl;

    dltlast(head);
    linktraversal(head);

    cout << "After deletion by given value:" << endl;

    dltbyValue(head, 11);
    linktraversal(head);

    return 0;
}