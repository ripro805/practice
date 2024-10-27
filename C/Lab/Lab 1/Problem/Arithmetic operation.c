#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("sum= %d\n",result);
    result=num1-num2;
    printf("sub= %d\n",result);
    result=num1*num2;
    printf("mul= %d\n",result);
    result=num1/num2;
    printf("div= %d\n",result);
    result=num1%num2;
    printf("remainder= %d\n",result);
}
