#include<iostream>
using namespace std;

class Animal 
{
private:
   int a, b,  c;
public :
    int d ,  e;

void setData (int a1, int b1, int c1);
void getData () {

 cout<<"Value of a "<<a<<endl;
 cout<<"Value of b"<< b <<endl;
 cout<<"Value of c"<< c <<endl;
 cout<<"Value of d"<< d <<endl;
 cout<<"Value of e"<< e <<endl;
 cout<<" ";
}


};

void Animal :: setData (int a1, int b1, int c1)
{
a= a1;
b= b1;
c= c1;


}


int main()
{
   Animal Dog;

   Dog.d=17;
   Dog.e=18;

   Dog.setData (14, 15, 16);
   Dog.getData();

    return 0;
}