#include<stdio.h>
int main ()
{
    int a,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("1+2+3+........+%d=",n);
   while(a<=n)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("%d",sum);
    return 0;

}

