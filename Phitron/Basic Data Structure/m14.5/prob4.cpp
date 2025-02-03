#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin>>n;
    queue<int>q1,q2;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q1.push(val);

    }

    stack<int>st;
    while(!q1.empty()){
       st.push(q1.front());
       if(!q1.empty()){
        q1.pop();
       }
    }
    while(!st.empty()){
        q2.push(st.top());
        if(!st.empty()){
            st.pop();
        }
    }

     while(!q2.empty()){
       cout<<q2.front()<<" ";
       if(!q2.empty()){
        q2.pop();
       }
    }

    return 0;
}