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
void PreOrder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);    
}

void PostOrder(Node* root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->val<<" ";

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

    PreOrder(root);
    cout<<nl;
    InOrder(root);
    cout<<nl;
    PostOrder(root);
    cout<<nl;
    return 0;
}