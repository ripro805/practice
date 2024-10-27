#include<stdio.h>
int main ()
{
    int x;
    printf ("Enter the value of x :");
    scanf ("%d",&x);
    if(x%5==0)
    {
        printf("The value is=%d\n",x);
    }
    else
   {
       printf ("Not divisble by 5");

    }
}
