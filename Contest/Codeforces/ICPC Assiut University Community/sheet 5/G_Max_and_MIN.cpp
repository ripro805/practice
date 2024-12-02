#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void min_max()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
        min=a[i];
    }
    if(max<a[i]){
       max= a[i];
    }
    }
    cout<<min<<" "<<max<<endl;
    
}
int32_t main()
{
    min_max();
    return 0;
}