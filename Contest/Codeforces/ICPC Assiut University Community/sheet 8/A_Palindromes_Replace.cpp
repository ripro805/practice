#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main() {
    faster;
    
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n/2;i++){
        int j=n-i-1;

        if(s[i]=='?'&&s[j]=='?'){
            s[i]=s[j]='a';
        }
        else if( s[i]=='?'){
            s[i]=s[j];
        }

         else if( s[j]=='?'){
            s[j]=s[i];
        }
        else if( s[j]!=s[i]){
           cout<<"-1"<<nl;
           return 0;
        }
    }
    if(n%2==1 && s[n/2]=='?'){
        s[n/2]='a';
    }
    cout<<s<<nl;
    
    return 0;
}
