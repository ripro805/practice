#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int a[10000]; 
int maxInArray( int i, int n){
    if(i==n-1){
        return a[i];

    }
    int right=maxInArray(i+1,n);
    if(right>a[i]){
        return right;
    }
    else{
        return a[i];
    }
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
     int res=maxInArray(0,n);
     cout<<res<<endl;
        
    return 0;
}