#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin >> n;
    vector<int> v(n);
    int totlsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        totlsum += v[i];
    }
    vector<int> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    
    {
        int rightsum=totlsum-pref[i];
        if (pref[i]==rightsum)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}