#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n, k, d;
    cin >> n >> k >> d;

   vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int m = max(0, n - k); 
    ll cnt = 0;

    for (int i = 0; i < m; i++) {
        cnt += ((d - 1) / arr[i]) + 1;
    }

    cout << cnt << '\n';
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}