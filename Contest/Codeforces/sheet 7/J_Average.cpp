#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
double recurcivesum(double arr[],int n){
    if(n==0){
        return 0.0;
    }

    return arr[n-1]+recurcivesum(arr,n-1);
}
double average(double arr[],int n){
  double  totalsum=recurcivesum(arr,n);
  return totalsum/ n;

}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    double arr[n+5];
    for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        double res=average(arr,n);
        cout<<fixed<<setprecision(7)<<res<<endl;
    return 0;
}