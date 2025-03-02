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
Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }

    queue<Node*> q;

    if (root) {
        q.push(root);
    }

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myleft;
        Node* myright;

        if (l == -1) {
            myleft = NULL;
        } else {
            myleft = new Node(l);
        }

        if (r == -1) {
            myright = NULL;
        } else {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }
    return root;
}
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

  void insert(Node* &root, int val){
    if(root==NULL){
        root=new Node(val);
    }
    if(root->val>val){
        if (root->left==NULL){
            root->left=new Node(val);
        }
        else{
            insert(root->left,val);
        }
    }
    else{
        if (root->right==NULL){
            root->right=new Node(val);
        }
        else{
            insert(root->right,val);
        }
    }
  }
  
int32_t main()
{
    faster;
    Node* root=input_tree();
    int val;
    cin>>val;
    insert(root,val);
    level_order(root);
    return 0;
}