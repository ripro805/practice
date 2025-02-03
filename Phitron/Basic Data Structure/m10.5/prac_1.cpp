#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node {
  public:
  int val; 
  Node* next; 
  Node*prev;
  Node(int val)
  {
    this->val=val;
    this->next=NULL;
    this->prev=NULL;

  }

};
void Insert_at_tail(Node* &head,Node* &tail, int val){
 Node *newnode= new Node(val);
 if(head==NULL){
    head=newnode;
    tail=newnode;
 }
 else{
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
 }
}
int32_t main()
{
    faster;
    Node* head1=NULL;
    Node* tail1=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        Insert_at_tail(head1,tail1,val);
    }

     Node* head2=NULL;
    Node* tail2=NULL;

    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        Insert_at_tail(head2,tail2,val);
    }

    bool areEqual=true;
    Node*tmp1=head1;
    Node*tmp2=head2;

    while(tmp1!=NULL && tmp2!=NULL){
        if(tmp1->val!=tmp2->val){
            areEqual=false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    if(tmp1!=NULL || tmp2!=NULL){
        areEqual=false;
    }

    if(areEqual){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
   
    return 0;
}