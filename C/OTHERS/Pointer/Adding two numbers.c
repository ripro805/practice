#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int sum;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1+*ptr2;
    printf("SUM=%d\n",sum);

}