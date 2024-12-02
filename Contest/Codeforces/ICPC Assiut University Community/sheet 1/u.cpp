#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    float n;
    cin>>n;
   float int_part=(int)n;
    if(int_part==n){
        cout<<"int "<<int_part<<endl;
    }
    else{
        float float_part=n-int_part;
        cout<<"float "<<int_part<<" "<<float_part<<endl;
    }
    return 0;
}
