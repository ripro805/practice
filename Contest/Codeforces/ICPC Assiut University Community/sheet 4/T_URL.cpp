#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   string url;
   cin>>url;
   int n=url.size();
   for(int i=0;i<n;i++){
    if(url[i]=='?'){
        i++;
        for(int j=i;j<n;j++){
            if(url[j]=='='){
                cout<<": ";
                continue;
            }
            if(url[j]=='&'){
                cout<<nl;
                continue;
            }
            cout<<url[j];
        }
        break;
    }
   }
    return 0;
}