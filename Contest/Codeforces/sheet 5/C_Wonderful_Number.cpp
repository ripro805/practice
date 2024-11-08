#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool isOdd(int n){
    return n%2!=0;
}
bool PalindromeBinary(int n){
    string binary="";
    while(n>0){
        binary+=(n%2)+'0';
        n/=2;
    }
    string reversedBinary=binary;
    reverse(reversedBinary.begin(),reversedBinary.end());
    return binary ==reversedBinary; 
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    if(isOdd(n)&&PalindromeBinary(n)){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
   
    return 0;
}