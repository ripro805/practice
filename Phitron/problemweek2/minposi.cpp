#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int main(){
    int n;
    cin>>n;
    ll a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    int minIndx=0;
    for ( int i = 0; i < n; i++)
    {
        if(a[i]<min){
           min= a[i];
           minIndx=i;
        }
       
        
    }
     cout<<min<<" "<<minIndx+1<<endl;
    
}