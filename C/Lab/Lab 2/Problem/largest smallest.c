#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three integer number:");
    scanf ("%d %d %d" ,&a,&b,&c);
    if(a<b && a<c)
    {
         printf("%d is smallest",a);

    }
    else if (b<a && b<c)
    {
         printf("%d is smallest",b);

    }
    else{
             printf("%d is smallest",c);

         }

}

