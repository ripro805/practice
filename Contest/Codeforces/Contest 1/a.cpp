#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    float x,p;
    cin>>x>>p;
    cout<<fixed<<setprecision(2);
    float org=(100*p)/(100-x);
    cout<<org<<endl;
    return 0;
}
