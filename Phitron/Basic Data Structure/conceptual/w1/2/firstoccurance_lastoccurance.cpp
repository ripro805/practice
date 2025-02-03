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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int l=0,r=n-1;
    int first=-1;
        int last=-1;
    while(l<=r){
        
        //first occurance
        int mid=(l+r)/2;
        if(v[mid]==target){
           first=mid;
           r=mid-1; 

        }
        else if(v[mid]>target){
           r=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
      l = 0, r = n - 1;
     while(l<=r){
        
       //last occurance
       int mid=(l+r)/2;
        if(v[mid]==target){
           last=mid;
           l=mid+1; 

        }
         else if(v[mid]>target){
           r=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    cout<<first<<" "<<last<<nl;
    return 0;
}