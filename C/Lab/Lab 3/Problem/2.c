#include<stdio.h>
int main()
{

     int n,i,fact=1;
     printf("Enter the value of posetive number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        fact=fact*i;
     }
   printf("%d\n",fact);

}


