#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter the a,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is=%f\n",area);
}

