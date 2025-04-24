#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        
        if(s.size()!=n){
            cout<<"NO"<<nl;
            continue;
        }
        map<char,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }
        bool flag=true;
        for(auto it: mp){
            for(int i=0;i<it.second.size()-1;i++){
                if(arr[it.second[i]]!=arr[it.second[i+1]])
                    flag=false;
                
            }
        }
        if(!flag){
            cout<<"NO"<<nl;
                    continue;
        }
        map<int,vector<int>>mp2;
        for(int i=0;i<n;i++){
            mp2[arr[i]].push_back(i);
        }
       
        for(auto it: mp2){
            for(int i=0;i<it.second.size()-1;i++){
                if(s[it.second[i]]!=s[it.second[i+1]])
                    flag=false;
                
            }
        }

        if(!flag)cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

    }
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