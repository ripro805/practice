#include<stdio.h>
int main()
{
    int r,x,rev=0;
    printf("Enter the value of x:");
    scanf("%d\n",x);
    int tmp=x;
    r=x%10;
    x=x/10;
    rev=(rev*10)+r;
     r=x%10;
    x=x/10;
    rev=(rev*10)+r;
    rev=(rev*10)+x;
    printf("Reverse=%d\n",rev);
}
