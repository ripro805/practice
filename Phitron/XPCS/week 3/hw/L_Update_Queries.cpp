#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    set<int>st;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    string up;
    cin>>up;
    sort(up.begin(),up.end());
    int indx=0;
    for(auto it: st){
        s[it-1]=up[indx];
        indx++;
    }
    cout<<s<<nl;

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