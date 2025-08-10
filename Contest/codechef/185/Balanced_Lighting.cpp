#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve(int t_case)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int r = 0, b = 0, un = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) r++;
        else if(v[i] == 2) b++;
        else un++;
    }

    if(n % 2 != 0){
        cout << "No" << nl;
        return;
    }

    int h = n / 2;
    int rem_r = max(0, h - r);
    int rem_b = max(0, h - b);

    if(rem_r + rem_b <= un) cout << "Yes" << nl;
    else cout << "No" << nl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
        solve(i);
    return 0;
}
