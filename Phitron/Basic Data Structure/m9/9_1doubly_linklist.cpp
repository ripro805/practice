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

    
     return 0;
 }