#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the integer number:");
    scanf("%d %d %d",&a,&b,&c);
    if
        (((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) || ((b*b)+(c*c)==(a*a)))
       {
          printf("right angle triangle");

       }
       else{
        printf("not right angle triangle");
       }
}

