#include <iostream>

using namespace std;
class shape{
    public:
 double circle(int x){

      float area_c=3.1416*x*x;
 return area_c;

 }

 double triangle(int a, int b){

 float area_t=.5*a*b;

 return area_t;
 }

 int rectangle (int s, int d){

 int area_r=s*d;

 }


};



int main()
{
    shape l,m,n;
    cout<<l.circle(3)<<endl;
    cout<<m.rectangle(3,4)<<endl;
    cout<<n.triangle(6,2)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
