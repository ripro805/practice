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
   int chang_pat_cnt1=0;
   int expect_sign=1;
   for(int i=0;i<n;i++){
    if((arr[i]<0 && expect_sign==1 )||(arr[i]>0 && expect_sign==-1))
    {
        chang_pat_cnt1++;
    }
    expect_sign*=-1;
    
   }
   int chang_pat_cnt2=0;
    expect_sign=-1;
   for(int i=0;i<n;i++){
    if((arr[i]<0 && expect_sign==1 )||(arr[i]>0 && expect_sign==-1))
    {
        chang_pat_cnt2++;
    }
    expect_sign*=-1;
    
   }

   cout<<min(chang_pat_cnt2,chang_pat_cnt1)<<nl;
    return 0;
}