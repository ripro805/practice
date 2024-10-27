#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left , *right;

};

Node* Create(){
    int x;
    
    cout << "Enter Data (-1 for no node): ";
    cin>> x;

    if (x==-1){
        return nullptr; 
    }
    Node *newnode= new Node();
    newnode->data=x;

    cout << "Enter the left child of " << x << ": " << endl;
    newnode->left=Create();

    cout << "Enter the right child of " << x << ": " << endl;
    newnode->right=Create();
    return newnode;

}

void Preorder(Node* root){
    if(root==nullptr)
    {
        return;
    }

    cout<<root->data<<" ";

    Preorder(root->left);
    Preorder(root->right);
}

int main(){
    struct Node*root=nullptr;
   
    root=Create();
    Preorder(root);

    cout<<endl;

    return 0;
}