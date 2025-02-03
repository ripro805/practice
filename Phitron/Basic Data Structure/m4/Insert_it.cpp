#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main() {
    faster;
    
    int n,m,x;
    
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
    
    cin >> x;
    
    arr.insert(arr.begin() + x, B.begin(), B.end());
    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << nl;

    return 0;
}
