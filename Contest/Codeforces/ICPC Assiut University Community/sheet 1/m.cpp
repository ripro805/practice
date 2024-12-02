#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   
    char ch;
    cin>>ch;
 
    if(ch>='0' && ch<='9')
    {
        printf("IS DIGIT");
    }
    else{
        printf("ALPHA\n");
        if(ch>='A' && ch<='Z')
        {
            printf("IS CAPITAL");
        }
 
        else{
            printf("IS SMALL");
        }
    }
}
    
