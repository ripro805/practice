#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
 map<string,int>mp;
 mp["tamim"]=2;
 mp["ramim"]=5;
 mp["shamim"]=100;

 for(auto it=mp.begin();it!=mp.end();it++){ //nlogn
    cout<<it->first<<" "<<it->second<<nl;
 }

 if(mp.count("hamim")){
    cout<<"Ache"<<nl;
 }
 else{
    cout<<"Nai"<<nl;
 }

    return 0;
}