#include<stdio.h>
int main()
{
    int num1,num2,large_number;
    printf("Enter the numbers :");
    scanf("%d %d",&num1,&num2);
    large_number=num1>num2 ? num1:num2;
    printf("Large number is = %d\n",large_number);
}
