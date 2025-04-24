#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
       int n=s.size();
       s.replace(n-2,2,"i");
       cout<<s<<nl;  
    }
    return 0;
}