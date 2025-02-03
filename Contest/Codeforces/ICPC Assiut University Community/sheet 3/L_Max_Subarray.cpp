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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    vector<int>result;
    for(int i=0;i<n;++i){
        int max_arr=arr[i];
        for(int j=i;j<n;++j){
           max_arr= max(max_arr,arr[j]);
           result.push_back(max_arr);
        }
    }
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<nl;
   }
    return 0;
}