#include<iostream>
using namespace std;

class cse{

int i,j,su;

public:

cse(int a, int b){

    i=a;
    j=b;
}

int sum (){
    
    su=i+j;

    return su;
}



int print(){
    cout<< su;
}

};

int main()
{
   cse ob(10,50);
  ob.sum();
  ob.print();

    return 0;
}