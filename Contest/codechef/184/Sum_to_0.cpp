#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    if(n==1){
        cout<<-1<<nl;
        return;

    }
    vector<int>v;
    for(int i=0;i<n/2;i++){
        v.push_back(3);
        v.push_back(-3);
    }
    if(n%2!=0){
        v.pop_back();
        v.pop_back();
        v.push_back(1);
        v.push_back(2);
        v.push_back(-3);
    }
    for(auto val:v) cout<<val<<" ";
    cout<<nl;
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