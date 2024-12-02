#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
 
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
int32_t main()
{
    faster;
    int n;
    cin>>n;
     long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long min=0,max=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
 
        if(a[i]>a[max]){
            max=i;
        }
    }
    swap(a[min],a[max]);
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}