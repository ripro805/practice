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
    string s;
    cin>>s;
    int scr=0;
    for (int i = 0; i < s.size(); i++)
    {
       char c= s[i];
       switch(c){
        case 'V':
        scr+=5;
        break;
        case 'W':
        scr+=2;
        break;
        case 'Z':
        if(i!=s.size()-1){
            if(s[i+1]=='V'){
                scr/=5;
                s[i+1]='0';

            }
            else if(s[i+1]=='W'){
                scr/=2;
                s[i+1]='0';
                
            }
        }
        break;
        case 'Y':
        if(i!=s.size()-1){
        s.push_back(s[i+1]);
        s[i+1]='0';

       }
       break;

       case 'X':
        if(i!=s.size()-1){
          
            s[i+1]='0';

       }
       
    }

    }
    cout<<scr;
    
    
    return 0;
}