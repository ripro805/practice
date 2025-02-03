#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n, m;
    cin >> n >> m;
    char arr[101][101];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    if (arr[x - 1][y - 1] != '.' &&
        arr[x - 1][y] != '.' &&
        arr[x - 1][y + 1] != '.' &&
        arr[x][y - 1] != '.' &&
        arr[x][y + 1] != '.' &&
        arr[x + 1][y - 1] != '.' &&
        arr[x + 1][y] != '.' &&
        arr[x + 1][y + 1] != '.'){
            cout<<"yes"<<nl;
        }
        else{
            cout<<"no"<<nl;
        }
        return 0;
}