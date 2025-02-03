#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
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
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myleft, *myright;
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

int sum_of_without_leaf_nodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 0; 
    }

    int left_tree_er_sum = sum_of_without_leaf_nodes(root->left);
    int right_tree_er_sum = sum_of_without_leaf_nodes(root->right);

    return root->val + left_tree_er_sum + right_tree_er_sum;
}

int main() {
    Node *root = input_tree();

    cout << sum_of_without_leaf_nodes(root) << endl;

    return 0;
}
