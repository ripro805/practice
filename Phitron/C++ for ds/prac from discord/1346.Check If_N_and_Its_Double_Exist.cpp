#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);



class Solution
{

public:
bool checkIfExist(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==2*arr[j]){
                return true;
            }
        }
    }
    return false;
}
    
};




int32_t main()
{
    faster;
    Solution sol;
    int n;
    cin>>n;
    int arr[n+5];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    if(sol.checkIfExist(arr,n)){
        cout<<"true"<<nl;
    }
    else{
        cout<<"false"<<nl;
    }
    return 0;
}
