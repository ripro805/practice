#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%10;
    b=b%10;
    c=c%10;
    d=d%10;
    long long res=a*b*c*d;
    res=res%10;
    if(res<10){
        cout<<"0"<<res<<endl;
    }
    else{
        cout<<res<<endl;
    }
    return 0;
}
