#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void binary(int n)
{
    if (n == 0) {
        return;  
    }
    binary(n / 2);  
    cout << (n % 2);  
}

int32_t main()
{
    faster;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << "0";  
    } else {
        binary(n); 
    }
    
    cout << nl;  
    }
    return 0;
}
