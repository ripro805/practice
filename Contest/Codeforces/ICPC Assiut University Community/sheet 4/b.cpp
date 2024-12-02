#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    string s;
    getline(cin ,s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='\\'){
            break;
        }
        cout<<s[i];
    }
    
    

    
    return 0;
}
