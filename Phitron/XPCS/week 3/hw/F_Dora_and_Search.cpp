#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    vector<int>a(n);
    multiset<int>ml;
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ml.insert(a[i]);

    }
    while(l<r){
        if(a[l]==(*ml.begin()) || a[l]==(*ml.rbegin())){
            auto it=ml.find(a[l]);
            ml.erase(it);
            l++;
        }
        else if(a[r]==(*ml.begin()) || a[r]==(*ml.rbegin())){
            auto it=ml.find(a[r]);
            ml.erase(it);
            r--;
        }
        else {
            cout<<l+1<<" "<<r+1<<nl;
            return;
        }
    }
    cout<<"-1"<<nl;
    return;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}