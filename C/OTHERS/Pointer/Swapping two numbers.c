#include<stdio.h>
int main()
{
    int x=2, y=3, temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    //swapping
     temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("X=%d\n Y=%d\n",x,y);

}