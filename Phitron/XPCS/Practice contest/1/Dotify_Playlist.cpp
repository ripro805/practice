#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int N,K,L;
    cin>>N>>K>>L;
    vector<int>s;
    for(int i=0;i<N;i++){
        int m,l;
        cin>>m>>l;
        if(l==L) s.push_back(m);
    }
    int tol=0;
    if(s.size()<K) cout<<-1<<nl;
    else{
        sort(s.rbegin(),s.rend());
        for(int i=0;i<K;i++){
            tol+=s[i];
        }
        cout<<tol<<nl;
    }
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