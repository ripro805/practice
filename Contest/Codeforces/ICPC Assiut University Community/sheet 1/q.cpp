#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main()
{
    float a,b;
    cin>>a>>b;
    if(a==0 &&b==0){
        cout<<"Origem"<<endl;
    }
    else if((a>0||a<0) &&b==0){
        cout<<"Eixo X"<<endl;
    }
    else if(a==0 &&(b>0||b<0)){
        cout<<"Eixo Y"<<endl;
    }
    else if(a>0&&b>0){
        cout<<"Q1"<<endl;
    }
    else if(a<0&&b>0){
        cout<<"Q2"<<endl;
    }
    else if(a<0&&b<0){
        cout<<"Q3"<<endl;
    }
    else if(a>0&&b<0){
        cout<<"Q4"<<endl;
    }
    return 0;
}
