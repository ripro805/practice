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
    int e=0,g=0,y=0,p=0,t=0;;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='e'||s[i]=='E'){
            e++;
        }

        else if(s[i]=='g'||s[i]=='G'){
            g++;
        }

        else if(s[i]=='y'||s[i]=='Y'){
            y++;
        }

        else if(s[i]=='p'||s[i]=='P'){
            p++;
        }

       else if(s[i]=='t'||s[i]=='T'){
            t++;
        }
        
    }
    int min1=min(e,g);
    int min2 =min(y,p);
    int min3 =min(min1,min2);
    int min4= min(min3,t);
    cout<<min4<<endl;
    return 0;
}