#include<stdio.h>
int main()
{
   int x,y,z;
    printf("Enter the x:");
    scanf("%d",&x);
     printf("Enter the y:");
    scanf("%d",&y);
    z=x&y;
    printf("x&y is= %d\n",z);
    z=x|y;
    printf("x|y is= %d\n",z);
    z=x^y;
    printf("x^y is= %d\n",z);

}

