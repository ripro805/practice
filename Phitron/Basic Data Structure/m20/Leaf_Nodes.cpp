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

Node* inputTree() {
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

void get_leaf_node(Node* root, vector<int>& leaf) {
    if (!root) return;

    if (!root->left && !root->right) {
        leaf.push_back(root->val);
        return;
    }

    get_leaf_node(root->left, leaf);
    get_leaf_node(root->right, leaf);
}

void print_leaf_node(Node* root) {
    vector<int> leaf;
    get_leaf_node(root, leaf);
    sort(leaf.begin(), leaf.end() ,greater<int>());
    for (int val : leaf) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
   

    Node* root = inputTree();
    print_leaf_node(root);

    return 0;
}
