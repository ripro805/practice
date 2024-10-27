#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
};
void doubly_Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
void insrtfirst(Node *&head, int data)
{
    Node *ptr = new Node();
    ptr->prev=NULL;
    ptr->data=data;
    ptr->next=NULL;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
}
void insrtatIndex(Node *&head, int data, int index)
{
    Node *ptr = new Node();
    Node *r = head->next;
    Node *q = head;
    int i = 1;
    while (i != index - 1)
    {
        q = q->next;
        r = r->next;
        i++;
    }
    ptr->data = data;
    ptr->next = r;
    r->prev = ptr;
    q->next = ptr;
    ptr->prev = q;
}
void insertatend(Node *&head, int data)
{
    Node *ptr = new Node();
    Node *q = head;
    ptr->prev=NULL;
    ptr->data = data;
    ptr->next=NULL;
    
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = ptr;
    ptr->prev = q;
    ptr->next = NULL;
}

void insrtafterNode(Node *prevNode, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    ptr->prev = prevNode;
}
void dltfirst(Node*&head){
    Node*ptr=head;
    head=head->next;
    free(ptr);
}
void dltlast(Node*head){
    Node*ptr=head;
    Node*q=head->next;
    while(q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);
}
void dltAtindex(Node*head,int index){
    Node*ptr=head;
    Node*q=head->next;
    int pos=0;
    while(pos!=index-1)
    {
        ptr=ptr->next;
        q=q->next;
        pos++;
    }
    ptr->next=q->next;
    free(q);
}
void dltbyValue(Node*head,int value){
    Node*ptr=head;
    Node*q=head->next;
    while(q->data!=value&& q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }

    if(q->data==value){
        ptr->next=q->next;
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

    head->data = 2;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 11;
    third->next = forth;

    forth->data = 44;
    forth->next = fifth;

    fifth->data = 55;
    fifth->next = NULL;

    doubly_Traversal(head);
    cout << "After insertion: " << endl;
    insrtfirst(head, 56);
    insrtatIndex(head, 57, 2);
    insertatend(head, 66);
    insrtafterNode( third, 80);
    doubly_Traversal(head);

    cout << "After Deletion " << endl;
    dltfirst(head);
    dltlast(head);
    dltAtindex(head,2);
    dltbyValue(head,80);
    doubly_Traversal(head);

    return 0;
}