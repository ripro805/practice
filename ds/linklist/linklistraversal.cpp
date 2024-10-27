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




    return 0;
}