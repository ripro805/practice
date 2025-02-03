#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node {
  public:
  int val; 
  Node* next; 
  Node(int val)
  {
    this->val=val;
    this->next=NULL;

  }

};
class myQeue{
    public:
    Node*head=NULL;
    Node*tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node*newnode=new Node (val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop(){
        sz--;
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL){
            tail=NULL;
        }
    }
    int front(){
        if(head!=NULL)
        return head->val;
    }
    int back(){
        if(tail!=NULL)
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head==NULL;
    }

};
int32_t main()
{
    faster;
    myQeue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    
    if (!q.empty()) {
        cout << q.front() << " " << q.back() << " " << q.size() << nl;
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout <<nl;

    return 0;
}