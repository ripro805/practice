#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int countVowel(const string &s,int i=0){
    if(i==s.size()){
        return 0;
    }
    char current=tolower(s[i]);
    int cnt=0;
    if(current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u'){
        cnt=1;
         //return 1+countVowel(s,i+1);

    }
    return cnt+countVowel(s,i+1);
}
int32_t main()
{
    faster;
    string s;
    getline(cin,s);
    int res=countVowel(s);
    cout<<res<<endl;
    return 0;
}