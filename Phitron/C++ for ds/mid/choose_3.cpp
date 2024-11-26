#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
   while(t--){
    int n,s;
    cin>>n>>s;
    int arr[n+5];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool found =false;
    for (int i = 0; i < n-2; i++)
    {
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    found=true;
                    break;

                }
            }
            if(found)break;
        }
       if(found)break;
    }
    if (found) {
    cout << "YES" << endl;
    }
        else 
        {
            cout << "NO" << endl;
        }
    
    
   }
    return 0;
}