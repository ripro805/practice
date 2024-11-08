#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
/*void Sum(int i,int n,int a[],int &sum){ // if use local varriable
    if(i==n){
        return;
    }
    
    sum+=a[i];
    Sum(i+1,n,a,sum);                    

}
int32_t main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    Sum(0,n,arr,sum);
    cout<<sum<<endl;
    
    return 0;
}*/

//if we use global varibale the code will be :
int arr[10000];
int sum=0;
void Sum(int i,int n){ 
    if(i==n){
        return;
    }
    
    sum+=arr[i];
    Sum(i+1,n);
}

int32_t main()
{
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     sum=0;
    Sum(0,n);
    cout<<sum<<endl;
    
    return 0;
}


