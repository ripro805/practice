#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0,op=0;
    bool neg=false;
    for(int i=0;i<n;i++){
        sum+=abs(arr[i]);
        if(arr[i]<0){
            if(!neg){
                op++;
                neg=true;
            }
           
        }
        else if(arr[i]!=0){
            neg=false;
        }
    }
    cout<<sum<<" "<<op<<nl;


}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}