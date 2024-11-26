#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int arr[1000];
int getSum(int i,int n){ 
    if(i==n){
        return 0;
    }
    
   
    return arr[i]+ getSum(i+1,n);
}

int32_t main()
{
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int res=getSum(0,n);
    cout<<res<<endl;
    
    return 0;
}


