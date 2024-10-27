#include<iostream>
using namespace std;
struct Node{
    int value;
    Node *r;
    Node *l;

    Node (int val){
        value=val;
        l=nullptr;
        r=nullptr;
    }

};
Node *insert(Node *root,int value){
    if(root==nullptr){
        return new Node(value);

    }
    if (value < root->value) {
        root->l = insert(root->l, value);
    } else {
        root->r = insert(root->r, value);
    }
    
    return root;
}
void reverseInOrderTraversal(Node* root) {
    if (root == nullptr) return;
    
    reverseInOrderTraversal(root->r);  
    cout << root->value << " ";            
    reverseInOrderTraversal(root->l);   
}
void sortInDecreasingOrder(int values[], int n) {
    if(n==0)
    return;
    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }
    
    reverseInOrderTraversal(root);
}



int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "No elements to sort!" << endl;
        return 0;
    }
    int values[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    cout << "Sorted values in decreasing order: ";
    sortInDecreasingOrder(values, n);
    
    return 0;
}
