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
    
    
    long long minimum = min(min(n, m), k);
    long long newEyes=(n-minimum)/2;
    long long newMouth=(m-minimum);
    long long newBody=(k-minimum);

    long long maxKatryoshkas=min(newEyes,newBody);
    
    cout << maxKatryoshkas+minimum << endl;
    return 0;
}
