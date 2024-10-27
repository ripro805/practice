#include<stdio.h>
#include <math.h>

int calculate_sqrt (int a)
{
    int root;
    root= sqrt (a);
    return root;
}

int main()
{   
    int x,Root;

    scanf("%d",&x);

    Root=calculate_sqrt(x);
    printf("%d\n",Root);

    return 0;
}