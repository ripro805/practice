#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin>>n;
    string s=to_string(n);
    while(s.size()<4){
        s='0'+s;
    }
    cout<<s<<nl;
    return 0;
}