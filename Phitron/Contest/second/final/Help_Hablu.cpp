#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
string s,t;
const ll N=3e5+100;
ll dp[N][5];
ll go(ll i,ll j){
    if(j==0)return 1;
    if(i==0)return 0;
   if(dp[i][j]!=-1)return dp[i][j];
    //if()
   if(s[i-1]==t[j-1]){
    ll p=go(i-1,j-1);
    ll q=go(i-1,j);
    return dp[i][j]=p+q;
   }
   else return dp[i][j]= go(i-1,j);
}

void TestCases()
{
   
}
int32_t main()
{
    faster;
    int T;
    cin >> T;
    while(T--){
        cin>>s>>t;
        //s='0'+s;
        for(ll i=0;i<=s.size();i++){
            for(ll j=0;j<=t.size();j++)dp[i][j]=-1;
        }
        cout<<go(s.size(),t.size())<<endl;
    }
    return 0;
}