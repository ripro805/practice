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
    map<string, string> ans,has ; 
    
    for (int i = 1; i <=n; i++) {
        string key, value;
        cin >> key >> value;
        if(has.find(key)!=has.end()){
            string s=has[key];
            ans[s]=value;
            has.erase(key);
            has[value]=s;
        }
        else{
            ans[key]=value;
            has[value]=key;
        }

       
    }
  

   
    cout << ans.size() << endl;
     for(auto i:ans){
       cout<<i.first<<" "<<i.second<<nl;
    }

    return 0;
}