#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end()); 

   
    int score = (n-1)*(a[n-1]-a[0]);


    cout << score << nl;
}

int32_t main() {
    faster;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
