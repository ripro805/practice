#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to input the binary tree in level order
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myleft, *myright;
        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int left = max_height(root->left);
    int right = max_height(root->right);

    return max(left, right) + 1;
}

bool isPerfectBinaryTree(Node *root)
{
    if (root == NULL)
        return true;

    int mx_level = max_height(root);

    queue<pair<Node *, int>> q;
    q.push({root, 1});

    bool found = false;

    while (!q.empty())
    {
        pair<Node *, int> parent_pair = q.front();
        q.pop();

        Node *parent_node = parent_pair.first;
        int parent_node_level = parent_pair.second;

        if (parent_node->left == NULL && parent_node->right == NULL)
        {
            if (!found)
            {
                found = true;
            }
            else if (parent_node_level != mx_level)
            {
                return false;
            }
        }
        else if (parent_node->left == NULL || parent_node->right == NULL)
        {
            return false;
        }

        if (parent_node->left)
        {
            q.push({parent_node->left, parent_node_level + 1});
        }
        if (parent_node->right)
        {
            q.push({parent_node->right, parent_node_level + 1});
        }
    }

    return true;
}

int main()
{
    Node *root = input_tree();

    if (isPerfectBinaryTree(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
