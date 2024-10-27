#include<iostream>
using namespace std;
int main()
{   
    int a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f;
    int round1=max(a,b);
    int round2=max(c,d);
    int round3=max(e,f);
    int total=round1+round2+round3;
    cout<<total<<endl;
    return 0;
}