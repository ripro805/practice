#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    char s[200],t[200];
    cin>>s>>t;
    /*int cmp=strcmp(s,t);
  
    cout<<cmp<<endl;*/
    int cmp=0;
    int i=0;
    int len_s=strlen(s);
    int len_t=strlen(t);
    while(i<len_s && i<len_t){
        if(s[i]<t[i]){
            cmp=-1;
            break;
        }
        else if(s[i]>t[i]){
            cmp=1;
            break;
        }
        i++;
    }
    if(cmp<0){
        cout<<s<<endl;
    }
    else if(cmp>0){
        cout<<t<<endl;
    }
    cout<<cmp<<endl;

    return 0;
}