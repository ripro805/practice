#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        
            tail->next = newnode;
            tail = newnode;
    }
    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if (tail == NULL)
        {
            return -1;
        }
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int32_t main()
{
    faster;
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 1; i <= m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    bool isEqual = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            isEqual = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if (!st.empty() || !q.empty())
    {
        isEqual = false;
    }
    if (isEqual)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}