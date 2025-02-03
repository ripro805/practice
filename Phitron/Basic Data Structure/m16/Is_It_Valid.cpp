#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool isValid(string s)
{
    stack<char> st;
    for (auto c : s)
    {
        if (!st.empty())
        {
            if (c == '1' && st.top() == '0')
            {
                st.pop();
            }
            else if (c == '0' && st.top() == '1')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}
int32_t main()
{
    faster;
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValid(s))
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}