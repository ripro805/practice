#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int dp[100000 + 5];
int N=100005;

int32_t main()
{
    faster;
    int t;
    cin >> t;
   
    for (int i = 0; i < N; i++)
    {
        dp[i] = -1;
    }
    dp[1] = true;
    for (int i = 1; i <= N; i++)
    {
        if (dp[i] == true)
        {
            if (i + 5 <= N)
                dp[i + 5] = true;
            if (i * 4 <= N)
                dp[i * 4] = true;
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
       
        if (dp[n] == true)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}