#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for(int i=0;s[i]!='\0';i++){
            if (s[i] == 'q') s[i] = 'p'; 
            else if (s[i] == 'p') s[i] = 'q';
            
        }
        cout<<s<<nl;
    }
    return 0;
}