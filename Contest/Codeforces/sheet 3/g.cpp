#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    bool isPalindrome=true;

    for(int i=0;i<n/2;i++){
      if(a[i]!=a[n-1-i]){
        isPalindrome=false;
        break;
    }
    
    } 
    if(isPalindrome){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
