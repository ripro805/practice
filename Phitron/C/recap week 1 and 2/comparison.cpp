#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    switch (s)
    {
    case '>':
    if(a>b)
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
        break;

    case '<':
    if(a<b)
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
        break;


    case '=':
    if(a==b)
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
        break;        
    }
    return 0;
}
