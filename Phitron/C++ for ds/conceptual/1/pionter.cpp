// pointer is  a varriable which carry the address

/*
let  int a=10, here the address  for a is ax10
lets call a pointer int *ptr
here *ptr=&a //it means the adress of a means ax10
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int a = 10;
    cout << &a << endl; // print the address
    int *ptr = &a;
    cout << ptr << endl; // print the address
    // before dereferencing
    cout << a << endl;    // print the value
    cout << *ptr << endl; // print the value
    // after dereferencing
    *ptr = 15; // can chang the value 
    cout << a << endl;
    cout << *ptr << endl;


    int arr[5];
    cout << &arr[0] << endl;
    cout << arr << endl; // arr=&arr[0]

    cout << &arr[1] << endl; //2nd address
    cout << arr+1 << endl; // arr+1=&arr[1]

    *(arr)= 10;
    *(arr+1)=20;
    *(arr+2)=30;
    *(arr+3)=40;
    *(arr+4)=50;
for(int i=0;i<5;i++){
    cout<<*(arr+i)<<endl; //==arr[i]
}
    return 0;
}