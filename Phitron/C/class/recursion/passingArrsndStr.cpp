#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int fun(int x[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum;
}

void makeFirstCHarUpper(char x[]){
    x[0]=toupper(x[0]);
    cout<<x<<endl;
}
int32_t main()
{
    faster;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int res=fun(a,10);
    cout<<res<<endl;

    char b[20]="ripro";
    makeFirstCHarUpper(b);
    return 0;
}