#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    char a[20]="ri";
    char b[20]="pro";
    //strcpy(a,b);
    int  length= strlen(b);
     for(int i=0;i<length;i++){
        a[i]=b[i];
     }
     a[length]='\0';

    cout<<a <<" "<<b<<endl;
    return 0;
}
