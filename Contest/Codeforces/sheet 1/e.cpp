#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double pi=3.141592653;
     cout << fixed << setprecision(9);
     double r,area;
     cin>>r;
     area=pi*r*r;
     cout<<area<<endl;
}