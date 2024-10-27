#include<stdio.h>
int calculate_sum (int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int main()
{   
    int x,y,Sum;

    scanf("%d %d",&x,&y);

    Sum=calculate_sum(x,y);
    printf("%d\n",Sum);

    return 0;
}