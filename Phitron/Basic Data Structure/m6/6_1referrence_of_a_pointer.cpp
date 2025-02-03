#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void fun(int* p){
    int y=200;
    p=&y;
}
int32_t main()
{
    faster;
    int x=10;
    int*p=&x;
    fun(p);
    cout<<p<<nl;
    return 0;
}