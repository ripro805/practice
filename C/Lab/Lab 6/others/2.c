#include<stdio.h>
int factorial(int n){
if(n<=1)
    return 1;
else
    return n*factorial(n-1);
}
void main()
{
    int x,f;
    printf("Enter the value of x :");
    scanf("%d",&x);
    f=factorial(x);
printf("factorial of %d is =%d\n",x,f);
}
