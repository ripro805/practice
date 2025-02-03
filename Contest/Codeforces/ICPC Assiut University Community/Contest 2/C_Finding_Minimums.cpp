#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
 int n,k;
 cin>>n>>k;
 vector<int>arr(n);
 for(int i=0;i<n;++i){
    cin>>arr[i];
 }

 for(int i=0;i<n;i+=k){
    int grp_end=INT_MAX;
    for(int j=i;j<min(i+k,n);++j){
        grp_end=min(grp_end,arr[j]);

       
}
 if (i > 0) {
    cout << " ";
 }
cout << grp_end;

    }
    cout<<nl;
 
    return 0;
}