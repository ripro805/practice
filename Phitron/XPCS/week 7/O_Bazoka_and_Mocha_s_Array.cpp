#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool isSortedRotation(const vector<int>& a) {
    int n = a.size();

    for (int shift = 0; shift < n; ++shift) {
        bool sorted = true;

        for (int i = 0; i < n - 1; ++i) {
            int cur = a[(shift + i) % n];
            int nxt = a[(shift + i + 1) % n];
            if (cur > nxt) {
                sorted = false;
                break;
            }
        }

        if (sorted) return true;
    }

    return false;
}

void solve()
{
      int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
       if (isSortedRotation(arr)){
        cout<<"YES"<<nl;
    }
    else {
        cout<<"NO"<<nl;
    }
}
int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}