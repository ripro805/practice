#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int a[10000];
void print_even_indice(int a[],int i)
{
    if(i<0){
        return;
    }
    cout<<a[i]<<" ";
    print_even_indice(a,i-2);
}
int32_t main()
{
    faster;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int startindx;
    if(n%2==0){

        startindx=n-2;
    }
    else{
        startindx=n-1;
    }

    print_even_indice(a,startindx);
    cout<<endl;

    
    return 0;
}