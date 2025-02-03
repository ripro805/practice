#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    list<int>l;
    int val;
    while(cin>>val&& val!=-1){
        l.push_back(val);
    }
    l.sort();
    for(auto v:l){
        cout<<v<<" ";
    }
    cout<<nl;
    return 0;
}