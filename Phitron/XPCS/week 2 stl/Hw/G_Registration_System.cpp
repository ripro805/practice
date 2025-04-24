#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    map<string,int>mp;
    int t;
    cin >> t;
    while(t--){
    string s;
        cin>>s;
   
    if(mp[s]==0){
        cout<<"OK"<<nl;
        mp[s]=1;
    }
    else
    {
        cout<<s<<mp[s]<<nl;
        mp[s]++;
    }
    }
    return 0;
}