#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n - 1));
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
            if (j == 0)
                v.push_back(arr[i][j]);
        }
    }

    sort(v.begin(), v.end());

    int f;
    for (int i = 1; i < v.size(); i++)  
    {
        if (v[i - 1] == v[i])
        {
            f = v[i];
            break;
        }
    }

    int indx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] != f)
        {
            indx = i;
            break;
        }
    }

    cout << f << " ";
    for (int i = 0; i < n - 1; i++)
        cout << arr[indx][i] << " ";
    cout << nl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
