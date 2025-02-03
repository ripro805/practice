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
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i]-'0';
    }
    cout<<sum<<nl;
    return 0;
}