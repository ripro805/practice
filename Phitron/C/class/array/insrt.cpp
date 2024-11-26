#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    int a[10000];
    int length;
    cin>>length; 
    for(int i =0;i<length;i++){
        cin>>a[i];
    }
    int indx,value;
    cin>>indx>>value;
    length++;

    for(int i=length-1;i>=indx;i--){
        a[i+1]=a[i];
    }
    a[indx]=value;

    for(int i=0;i<length;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
