 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 #define nl "\n"
 
 #define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node {
  public:
  int val; 
  Node* next; 
  Node* prev;
  Node(int val)
  {
    this->val=val;
    this->next=NULL;
    this->prev=NULL;


  }

};
void Print_forward(Node* &head){
    Node*tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<nl;
}

void Print_backward(Node* &tail){
    Node*tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<nl;
}
void delete_at_any (Node* &head,int indx){
   
    Node *tmp=head;
   
    for(int i=0;i<indx-1;i++){
        tmp=tmp->next;
    }
     Node* deleteNode=tmp->next;
    tmp->next=deleteNode->next ;
    deleteNode->next->prev=tmp;
    
    delete deleteNode;

}
 
 int32_t main()
 {
     faster;
     Node* head=new Node(10);
     Node* a=new Node(20);
     Node* b=new Node(30);
     Node* tail=new Node(40);
     head->next=a;
     a->prev=head;

     a->next=b;
     b->prev=a;

     b->next=tail;
     tail->prev=b;

     Print_forward(head);
     Print_backward(tail);

     delete_at_any(head,2);
     Print_forward(head);
     Print_backward(tail);


    
     return 0;
 }