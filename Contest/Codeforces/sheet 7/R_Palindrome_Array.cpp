#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool isPalin(int *a, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    return a[i] == a[j] && isPalin(a, i + 1, j - 1);
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (isPalin(a, 0, n - 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}