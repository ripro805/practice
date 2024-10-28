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
    int len_a=strlen(a);
    int len_b=strlen(b);
    int length=len_a+len_b;

    for(int i=len_a,j=0;i<length;i++,j++){
        a[i]=b[j];
    }
    a[length]='\0';

   // strcat(a,b);
    cout<<a <<" "<<b<<endl;
    return 0;
}
