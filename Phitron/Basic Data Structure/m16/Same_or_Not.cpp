#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,m;
    cin>>n>>m;
    stack<int>a;
    queue<int>b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push(x);
    }
     for(int i=0;i<n;i++){
        int y;
        cin>>y;
        b.push(y);
    }
    bool isEqual=true;

  while(!a.empty()&&!b.empty()){
    if(a.top()!=b.front()){
        isEqual=false;
        break;
    }
    
    a.pop();
    b.pop();
  }
  if(!a.empty()||!b.empty()){
     isEqual=false;
  }
  if(isEqual){
    cout<<"YES"<<nl;
  }
else{
    cout<<"NO"<<nl;
}
    return 0;
}