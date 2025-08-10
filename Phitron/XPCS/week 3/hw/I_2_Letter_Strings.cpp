#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{   int n;
    cin>>n;
    map<char,ll>f_oc;
    map<char,ll>s_oc;
    map<string,ll>oc;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        f_oc[a[i][0]]++;
        s_oc[a[i][1]]++;
        oc[a[i]]++;

    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x;
        x=max((ll)0,f_oc[a[i][0]]-oc[a[i]]);
        ans+=x;
        x=max((ll)0,s_oc[a[i][1]]-oc[a[i]]);
        ans+=x;
        if(f_oc[a[i][0]]>0) f_oc[a[i][0]]--;
        if(s_oc[a[i][1]]>0)s_oc[a[i][1]]--;
        if(oc[a[i]]>0) oc[a[i]]--;
    }
    cout<<ans<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}