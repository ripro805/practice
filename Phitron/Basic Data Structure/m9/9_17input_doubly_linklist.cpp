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
void Insert_at_tail (Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
     if (head == NULL) {
        
        head = newnode;
        tail = newnode;
    } else {
       
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

}
 
 int32_t main()
 {
     faster;
 Node* head=NULL;
 Node* tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        Insert_at_tail(head,tail,val);
    }
     Print_forward(head);
     Print_backward(tail);


    
     return 0;
 }