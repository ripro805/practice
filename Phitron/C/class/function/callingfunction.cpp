/*if we calll by value let x is in main function and n is in the created function
the adress of x and n will be different so if we call the function there will not be any chnges

but if we want to solve the error we have to use call by reference ... such as  :*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"


void changto100(int *n){
     *n=100;
}
int main (){
    int x=10;
    changto100(&x);
    cout<<x<<endl;
}