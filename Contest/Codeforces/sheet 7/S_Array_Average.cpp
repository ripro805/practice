#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
long long Sum(long long arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+Sum(arr,n-1);
}
double average(long long arr[],int n){
  if(n==0){
    return 0;
  }
  long long sum=Sum(arr,n);
  return sum/n;
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    long long arr[n+5];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    double avg= average(arr,n);
    cout<<fixed<<setprecision(6)<<avg<<endl;
        
    return 0;
}