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


void print_nodes_at_level(Node* root, int level) {
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q; 
    q.push({root, 0});
    bool found = false;

    while (!q.empty()) {
        pair<Node*, int> front_pair = q.front();
        q.pop();

        Node* current_node = front_pair.first;
        int current_level = front_pair.second;

        if (current_level == level) {
            cout << current_node->val << " ";
            found = true;
        }

        if (current_level > level) 
            {
                break;
            }

        if (current_node->left) {
            q.push({current_node->left, current_level + 1});
        }
        if (current_node->right) {
            q.push({current_node->right, current_level + 1});
        }
    }

    if (!found) {
        cout << "Invalid";
    }
    cout << endl;
}

int main() {
    Node* root = input_tree();
    int x;
    cin >> x;

    print_nodes_at_level(root, x);

    return 0;
}
