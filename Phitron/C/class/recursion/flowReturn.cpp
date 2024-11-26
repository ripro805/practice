#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void fun2(){
    cout<<"Inside function 2"<<nl;
}void fun1(){
    cout<<"Before function call inside func1"<<endl;
    fun2();
    cout<<"After function call inside func1"<<endl;

}
int32_t main()
{
    faster;
    cout<<"Before function call inside main"<<endl;
    fun1();
    cout<<"After function call inside main"<<endl;
    return 0;
}