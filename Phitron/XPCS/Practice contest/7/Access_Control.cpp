#include <bits/stdc++.h>
using namespace std;
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define nl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    bool flag =true;

    int swipes = 0;
    for (auto c : s)
    {
        if (c == '1')
        {
            swipes = x;
        }
        else
        {
            if (swipes > 0)
            {
               swipes--;
                
            }
            else{
                flag=false;
                break;
                
            }
        }
    }

    if(flag) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main()
{
    faster;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
