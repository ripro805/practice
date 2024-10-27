#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("num1= %d\n",num1);
      printf("num2= %d\n",num2);

}

