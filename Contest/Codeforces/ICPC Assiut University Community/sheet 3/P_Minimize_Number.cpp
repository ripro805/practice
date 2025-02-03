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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int res=0;
      for(int i=0;i<n;i++){
         int cnt=0;
        if(arr[i]%2!=0){
            cout<<0<<nl;
            return 0;
        }

        while(arr[i]%2==0){
            cnt++;
            arr[i]/=2;
        }  
         if(i==0||cnt<res) {
            res=cnt;
         }     
        
    }
    cout<<res<<nl;
   
    
    return 0;
}