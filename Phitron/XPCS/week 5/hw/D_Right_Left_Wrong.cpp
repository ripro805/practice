#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
       { 
        cin >> a[i];
        sum+=a[i];
        a[i]=sum;

    }

    string s;
    cin >> s;
    
    ll ans = 0;

    int l = 0, r = n - 1;

    while (l < r)
    {
        while (l < n && (s[l] != 'L'))
            l++;
        while (r >= 0 && (s[r] != 'R'))
            r--;

        if (l < r)
        {
            
            ll p=0;
            if(l>0)p=a[l-1];
            ans +=a[r]-p;

            }
            
        
        l++;
        r--;
    }

    cout << ans << nl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
