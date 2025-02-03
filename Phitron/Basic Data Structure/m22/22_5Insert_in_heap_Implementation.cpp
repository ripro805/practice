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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;
    v.push_back(val);
    int cur_indx = v.size() - 1;
    while (cur_indx != 0)
    {
        int par_indx = (cur_indx - 1) / 2;

        if (v[par_indx] < v[cur_indx])
            swap(v[par_indx], v[cur_indx]);
        else
            break;
        cur_indx = par_indx;
    }
    for (auto x : v)
    {
        cout << x << " ";
        
    }
    cout << nl;

    return 0;
}