#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s;
    cin>>s;
    vector<bool>freq(26,false);
    for(auto c:s){
        freq[c-'a']=true;
    }
    for(int i =0;i<26;i++){
        if(!freq[i]){
            cout<<char(i+'a')<<nl;
            return 0;
        }
    }
    cout<<"None"<<nl;
    return 0;
}