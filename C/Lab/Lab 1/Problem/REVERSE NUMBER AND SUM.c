#include<stdio.h>
int main()
{
    int x,sum=0,r;
    printf("enter the numbers:");
    scanf("%d",&x);
    r=x%10;
    x=x/10;
    printf("reverse= %d",r);
 sum=sum+r;

     r=x%10;
     x=x/10;

      printf("%d%d\n",r,x);
       sum=sum+r+x;
       printf("sum=%d\n",sum);

}



