#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void arfun(int *x, int n)

{
    for(int i=0;i<n;i++){
        x[i]*=2;
    }
}
void strFun(char *x,char *y ){
    x=strcpy(x,y);
}
int32_t main()
{
    int a[5]={1,2,3,4,5};
    arfun(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    char b[20]="rizvi";
    char c[20]="Ripro";
    strFun(b,c);
    cout<<b<<endl;
    return 0;
}