
#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    // base case
    if(n==4) return;

    // recursive call
    fun(n+1);

    
    // task
    cout<<n<<endl;
}
    

int main()
{
    fun(1);
    return 0;
}
