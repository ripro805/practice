#include<stdio.h>
int leapyear(int year){
if (year%400==0 || year%4==0 && year%100!=0){
    return 1;
  }

    else{
    return 0;

    }

}
int main(){
int y,test;
 scanf("%d",&y);
 test=leapyear(y);
 if(test==1)
   {
        printf("\nleapyear");
   }
 else
    {
        printf ("\nnot leapyear");

    }

}
