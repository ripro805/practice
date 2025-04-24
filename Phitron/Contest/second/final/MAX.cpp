#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Make ios::sync_with_stdio(false) ;
#define  fast cin.tie(0);

void solve()
{
   ll q;
   cin>>q; 
   map<ll,ll>st;
   set<pair<ll,ll>>ans;
   for(ll i=1;i<=q;i++){
    ll op;
    cin>>op;
    if(op==1){
        ll x;
        cin>>x;
        st[x]++;
        if(ans.count({st[x]-1,x})==1){
            ans.erase({st[x]-1,x});
        }
            ans.insert({st[x],x});
        }else{
            if(ans.size()==0){cout<<"empty\n";}
            else{
                auto it=*ans.rbegin();
                ans.erase({it.first,it.second});
                cout<<it.second<<endl;
                ll xo=it.first,yo=it.second;
                xo=max(1ll,xo/2);
                st[yo]=st[yo]-xo;
                if(st[yo]!=0){
                    ans.insert({st[yo],yo});
                }
            }
        }
    
   }

}

int main()
{
    Make fast;

    long long t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}