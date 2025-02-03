#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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
void printleft(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left!=NULL)
    {
        printleft(root->left);
    }
    else if(root->right!=NULL)
    {
        printleft(root->right);
    }
    cout<<root->val<<" ";
}
void printright(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    if(root->right!=NULL)
    {
        printright(root->right);
    }
    else if(root->left!=NULL)
    {
        printright(root->left);
    }
}
int main() {
    Node* root =input_tree();
    if(root==NULL)
    {
        return 0;
    }
    if(root->left!=NULL){
    printleft(root->left);
    }
    cout<<root->val<<" ";
    if(root->right!=NULL){
    printright(root->right);
    }
    return 0;
}