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
    Node*f=q.front();
    q.pop();
    //2 kaaj kra
    cout<<f->val<<" ";
    //3 child push
    if(f->left!=NULL)
      q.push(f->left);
    if(f->right!=NULL)
       q.push(f->right);  
    }
  }
  Node* convert(int a[],int n,int l,int r){
    if(l>r){
        return NULL;
    }
    int mid=(l+r)/2;
    Node* root=new Node(a[mid]);
    Node*leftroot=convert(a,n,l,mid-1);
    Node*rightroot=convert(a,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
    return root;
  }

  
  
int32_t main()
{
    faster;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Node* root=convert(a,n,0,n-1);
   
    level_order(root);
    return 0;
}