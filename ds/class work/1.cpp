#include <iostream>
#include <queue>
using namespace std;
queue<int> _push(int ar[], int size)
{
    queue<int> q;
    for (int i = 0; i < size; i++)
    {
        q.push(ar[i]);
    }
    return q;
}

void _pop(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    queue<int> mys = _push(a, n);
    _pop(mys);
    cout << endl;

    return 0;
}
