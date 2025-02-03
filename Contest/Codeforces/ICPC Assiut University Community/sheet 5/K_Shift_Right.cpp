#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void shiftRight(vector<int>& arr, int n, int x)
{
    x=x%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+x);
    reverse(arr.begin()+x,arr.end());
}
int32_t main()
{
    faster;
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shiftRight(arr,n,x);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<nl;
    
    return 0;
}