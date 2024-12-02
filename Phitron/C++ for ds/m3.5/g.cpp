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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isPalindrome=true;
    int l=0, r=n-1;
    while(l<r){
        if(arr[l]!=arr[r]){
            isPalindrome=false;
            break;
        }
        ++l;
        --r;
       
    }
     if(isPalindrome==true){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
    return 0;
}