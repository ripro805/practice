#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

int main(){
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
   cout<<"Sum:"<<sum<<endl;
   int avg=sum/n;

    cout<<"Average: "<<avg<<endl;
    return 0;
}