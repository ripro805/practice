#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    char str[100]="apple";
    int f[26]={0};

    int len= strlen(str);
    for(int i=0; i<len;i++){
        char ch=str[i];
        int indx=ch-'a';
        f[indx]=1;
    }
    for(int i=0;i<26;i++){
        cout<<char(i+'a')<<" "<<f[i]<<endl;
    }
    cout<<endl<<endl<<endl;
    int cnt=0;
     for(int i=0;i<26;i++){
        cnt+=f[i];
        if(f[i]==1){
        cout<<char(i+'a')<<" "<<f[i]<<endl;
        }
     }
      cout<<cnt<<endl;  
        
    
    return 0;
}