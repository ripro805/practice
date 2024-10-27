#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
     printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("1-2+3-4+........+%d=", n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    printf("%d\n",odd-even);

}
