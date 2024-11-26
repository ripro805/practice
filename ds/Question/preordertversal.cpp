#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node *left, *right;
};

// Function to create a binary tree
Node* Create() {
    int x;
    cout << "Enter Data (-1 for no node): ";
    cin >> x;

    if (x == -1) {
        return nullptr;
    }

    // Allocate new node
    Node* newnode = new Node();
    newnode->data = x;

    // Create left and right subtrees recursively
    cout << "Enter the left child of " << x << ": " << endl;
    newnode->left = Create();

    cout << "Enter the right child of " << x << ": " << endl;
    newnode->right = Create();

    return newnode;
}

// Function to perform preorder traversal
void Preorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Visit the root
    cout << root->data << " ";

    // Recur on the left and right subtrees
    Preorder(root->left);
    Preorder(root->right);
}

int main() {
    Node* root = nullptr;

    // Build the tree
    root = Create();

    // Perform preorder traversal
    Preorder(root);

    cout << endl;
    return 0;
}

//time complexity big o of n