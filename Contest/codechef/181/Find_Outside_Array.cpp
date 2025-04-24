#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve(int t_case) {
    int n;
    cin >> n;

    vector<int> arr(n);
    // int mini=INT_MAX;
    // int maxi=INT_MIN;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0]<0)
     cout<<arr[0]<<" "<<arr[0]<<endl;
    else if(arr[n-1]>0) 
    cout<<arr[n-1]<<" "<<arr[n-1]<<endl;
    else
     cout<<-1<<endl;
       
           
        
    
    
}

int32_t main() {
    faster;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}
