#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node {
  public:
  int val; 
  Node* left;
  Node* right; 
  Node(int val)
  {
    this->val=val;
    this->left=NULL;
    this->right=NULL;

  }


};
  void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
 while(!q.empty()){
 //1 ber kre ana
 Node* f=q.front();
 q.pop();
    //2 kaaj kra
  cout<<f->val<<" ";
    //3 child push
    if(f->left!=NULL) {
      q.push(f->left);
    }
    if(f->right!=NULL){
      q.push(f->right);
    }
  }
  }
int32_t main()
{
    faster;
    Node* root=new Node (10);
    Node* a=new Node (20);
    Node* b=new Node (30);
    Node* c=new Node (40);
    Node* d=new Node (50);
    Node* e=new Node (60);

    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;

   level_order(root); 
    return 0;
}