#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int *x=&a;
    int *y=&b;
    int diff=abs(*x-*y);
    printf("%d\n",diff);
    

    return 0;
}