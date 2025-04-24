#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{   
    int n;
    cin>>n;
    map<int ,int>mp;
    vector<int>arr(n+1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int cnt=0;
    int rem=n;
    int i=0;
    while(mp.size()!=rem){
        cnt++;
        mp[arr[i]]--;
        if(mp[arr[i]]==0) mp.erase(arr[i]);
        i++;
        rem--;
    }
    cout<<cnt<<nl;
    

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