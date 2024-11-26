#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void fun(int x,int *y){
    x *=10;
    *y *=10;
    cout<<"function:"<<x<<" "<<*y<<endl;
}
int32_t main()                                           //a and x call by value
{                                                        //b and y call byreference
    faster;
    int a=10,b=20;
    fun(a,&b);
    cout<<"mainfunction:"<<a <<" "<<b<<endl;
    
    return 0;
}