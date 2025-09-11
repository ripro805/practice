#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

bool isPossible(vector<int>& a, int n, int mid) {
    int cnt = 1;
    int L = a[0] - mid, R = a[0] + mid;
    for (int i = 0; i < n; i++) {
        int l = a[i] - mid, r = a[i] + mid;
        if (l <= R) L = max(L, l);
        else {
            cnt++;
            if (cnt > 3) return false;
            L = l;
            R = r;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int l = 0, h = 1e9, answer = h;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (isPossible(a, n, mid)) {
            answer = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << answer << nl;
}

int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
