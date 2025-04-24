#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int cnt_1=0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1) cnt_1++;
    }
    cout<<n-(cnt_1/2)<<nl;
    
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
