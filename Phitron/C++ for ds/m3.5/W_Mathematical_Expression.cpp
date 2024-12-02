#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    int a,b;
    long c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    switch (s)
    {
    case '+':
    if(a+b==c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<a+b<<endl;
    }
        break;

    case '-':
    if(a-b==c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<a-b<<endl;
    }
        break;


    case '*':
    if(a*b==c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<a*b<<endl;
    }
        break ;      
    }
    return 0;
}