#include<iostream>
using namespace std;
struct Node
{
    int data ;
    Node* next;
};
void linktraversal(Node*ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void insrtfirst(Node*& head, int data){
    Node*ptr=new Node();
    ptr->data=data;
    ptr->next=head;
    head=ptr;
}
void insrtbetween(Node*& head, int data,int index){
    Node*ptr=new Node();
    Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
}

void insrtend(Node*& head, int data){
    Node*ptr=new Node();
    Node*p=head;
    while(p->next!=NULL){
        p=p->next;

    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
}

void insrtafterNode(Node*& head, Node*prevNode, int data){
    Node*ptr=new Node();
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
}
int main()
{
    Node*head=new Node ();
    Node*second=new Node ();
    Node*third=new Node ();
    Node*forth=new Node ();
    Node*fifth=new Node ();
    

    head->data=2;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=11;
    third->next=forth;

    forth->data=44;
    forth->next=fifth;

    fifth->data=55;
   fifth->next=NULL;


   linktraversal(head);
   cout<<"After insertion: "<<endl;
   insrtfirst(head,56);
   insrtbetween(head,57,2);
   insrtend(head,66);
   insrtafterNode(head,third,80);
   linktraversal(head);




    return 0;
}