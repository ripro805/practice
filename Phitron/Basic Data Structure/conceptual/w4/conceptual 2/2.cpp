#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin>>t;
   while(t--){
    string clr;
   cin>>clr;
   stack<char>st;
   int sz=clr.size();
   int flag=0;
   for(int i=0;i<sz;i++){
    if(st.empty()==true){
        st.push(clr[i]);
    }
    else{
        if(st.top()=='B'&& clr[i]=='R'||st.top()=='R'&& clr[i]=='B'){
            st.pop();
        }
        else if(st.top()=='Y'&& clr[i]=='B'||st.top()=='B'&& clr[i]=='Y'){
            st.pop();
            st.push('G');
        }
        else if(st.top()=='Y'&&clr[i]=='R'||st.top()=='R'&& clr[i]=='Y'){
            st.pop();
        }
        else if(st.top()=='G'&& clr[i]=='R'||st.top()=='R'&& clr[i]=='G'){
           flag=1;
           break;
        }
        else{
            st.push(clr[i]);
        }
    }
   }

   if(flag==1){
    cout<<"YES"<<nl;
   }
   else{
    cout<<"NO"<<nl;
   }
   }
    return 0;
}