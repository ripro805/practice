#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
};

Node *Create() {
  int x;

  cout << "Enter Data (-1 for no node): ";
  cin >> x;

  if (x == -1) {
    return nullptr;
  }
  Node *newnode = new Node();
  newnode->data = x;

  cout << "Enter the left child of " << x << ": " << endl;
  newnode->left = Create();

  cout << "Enter the right child of " << x << ": " << endl;
  newnode->right = Create();
  return newnode;
}

void Preorder(Node *root) {
  if (root == nullptr) {
    return;
  }

  cout << root->data << " ";

  Preorder(root->left);
  Preorder(root->right);
}
int s = 0;
void Greatertree(Node *root) {
  if (root == nullptr) {
    return;
  }

  Inorder(root->left);
  //cout << root->data << " ";
  s += root->data;
  root->data=s;
  Inorder(root->right);
}
void Inorder(Node *root) {
  if (root == nullptr) {
    return;
  }

  Inorder(root->left);
  cout << root->data << " ";
  // s += root->data;
  // root->data=s;
  Inorder(root->right);
}
void Postorder(Node *root) {
  if (root == nullptr) {
    return;
  }

  Postorder(root->left);
  Postorder(root->right);
  cout << root->data << " ";
}
int main() {
  struct Node *root = nullptr;

  root = Create();
  Preorder(root);
  cout << endl;
  Inorder(root);
  cout << endl;
  Postorder(root);
  cout << endl;
  Greatertree(root);
  Inorder(root);   

  return 0;
}