#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   int n;
   cin>>n;
   int m[n][n];

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>m[i][j];
    }
   }
   int flag=true;
   int element=m[0][0];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
        if(m[i][j]!=element){
            flag=false;
            break;
        }
        else{
            if(m[i][j]!=0){
                flag =false;
                break;
            }
        }
        }
    }
    if (flag==false){
        break;
    }
   }

   if(flag==true){
    cout<<"scaler"<<endl;
   }
else{
    cout<<"No"<<endl;
}

    return 0;
}