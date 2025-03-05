
#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    // base case
    if(n==4) return;
    // task
    cout<<n<<endl;
    // recursive call
    fun(n+1);
}

int main()
{
    fun(1);
    return 0;
}
