#include<stdio.h>
int main()
{
   double x,y, result;
    printf("Enter the x:");
    scanf("%lf",&x);
    printf("Enter the y:");
    scanf("%lf",&y);
    result=pow(x,y);
    printf("The power value is=%lf\n",result);
}

