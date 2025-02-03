#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
bool isValid(string s){
    stack<char>st;
    for(auto c:s){
        if(!st.empty()){
            if(c=='1'&& st.top()=='0'){
                st.pop();
            }
            else{
            st.push(c);
        }
        }

        else{
            st.push(c);
        }
    }
    return st.empty();
}
int main() {
    

    int t;
    cin >> t; 

    while (t--) {
        string s;
        cin >> s; 
        if (isValid(s)) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }

    return 0;
}
