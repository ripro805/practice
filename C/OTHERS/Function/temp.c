#include<stdio.h>


void calculate_temp (float temperature)
{
    
    if (temperature>30)
    {
        printf("Hot");
    }
    else
    {
        printf("Cold");
    }
}

int main()
{   
    float x;

    scanf("%f",&x);

    calculate_temp(x);
    //printf("%f\n",temp);

    return 0;
}