#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<ll, int> freq;
    ll l = 0, r = 0, ans = 0;
    ll cnt = 0;

    while(r < n) {
        freq[arr[r]]++;
        if(freq[arr[r]] == 1) cnt++;

        while(cnt > k) {
            freq[arr[l]]--;
            if(freq[arr[l]] == 0) cnt--;
            l++;
        }

        ans += (r - l + 1);
        r++;
    }

    cout << ans << nl;
}

int32_t main()
{
    faster;
    solve();
    return 0;
}
