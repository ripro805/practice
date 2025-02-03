#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int q;
    cin >> q;
    queue<string> qu;
    while (q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "0")
        {
            string name;
            cin >> name;
            qu.push(name);
        }
        else if (cmd == "1")
        {
            if (!qu.empty())
            {
                cout << qu.front() << nl;
                qu.pop();
            }
            else
            {
                cout << "Invalid" << nl;
            }
        }
    }
    return 0;
}