#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,m;
    
   
    cin >> n>>m;
    int count[10001] = {0}; 
    int a[10001]; 
    for(int i=0; i<n; i++){
    cin>>a[i]; 
}
    for(int i=0;i<n;i++){ 
    if(a[i]>=1 && a[i]<=m ){
        count[a[i]]++;
    }
}
    for(int i=1 ;i<=m;i++){
        cout<<count[i]<<endl;
    }
        
    return 0;
}
