#include<stdio.h>
int main()
{
    int r,num,reversednumber,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {r=temp%10;
   reversednumber=reversednumber*10+r;
    temp=temp/10;

    }
    printf("Reversed number : %d\n",reversednumber);
    while(reversednumber!=0)
    {
       r= reversednumber%10;
       sum=sum+r;
       reversednumber=reversednumber/10;
    }
    printf("Sum of digit : %d\n",sum);
}
