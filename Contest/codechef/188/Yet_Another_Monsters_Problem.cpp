#include <bits/stdc++.h>
using namespace std;
typedef  long long ll ;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
     int n;
    cin >> n;

    vector<ll> hp(n);
    for (auto& x : hp) {
        cin >> x;
    }

    sort(hp.begin(), hp.end());

    ll time = n;

    set<ll> trlDmg;
    trlDmg.insert(0); 

    for (auto x : hp) {
        trlDmg.insert(x);         
        if (x > 0) trlDmg.insert(x - 1);
    }

    for (auto dmg : trlDmg) {
        ll aoe_time = dmg;

        
        auto pos = upper_bound(hp.begin(), hp.end(), dmg);
        ll rem = hp.end() - pos;

        ll tot_time = aoe_time + rem;

        time = min(time, tot_time);
    }

    cout << time << '\n';
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