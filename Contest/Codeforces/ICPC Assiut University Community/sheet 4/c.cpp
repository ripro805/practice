#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    faster;
    char x[21],y[21];
    cin>>x;
    cin>>y;
    char z=strcmp(x,y);
    if(z<=0){
        cout<<x<<endl;
    }
    else{
        cout<<y<<endl;
    }
    return 0;
}
