#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_val = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }

    vector<ll> cnt(max_val + 1, 0);

    for (int i = 0; i < n; ++i) {
        cnt[a[i]] += a[i]; 
    }

    vector<ll> dp(max_val + 1, 0);
    dp[0] = 0;
    dp[1] = cnt[1];

    for (int i = 2; i <= max_val; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i]);
    }

    cout << dp[max_val] << "\n";
    return 0;
}
