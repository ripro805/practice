#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    long long n, m, k;
    cin >> n >> m >> k;
    
    // Fixing the min function to handle three arguments
    long long maxKatryoshkas = min(min(n / 2, m), k);
    
    cout << maxKatryoshkas << endl;
    return 0;
}
