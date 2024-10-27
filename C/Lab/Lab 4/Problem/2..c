#include <stdio.h>
int main()
{
    int i,n,num[1000],sum=0;
    float avg;

    printf ("Enter the number of array elements:");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
        printf("Enter the array elements :");
        scanf("%d",&num[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        sum= sum+num[i];
    }

    avg= (float)sum/n;

    printf("The elements larger than the average :");

    for(i=0 ; i<n ; i++)
    {
        if(num[i]>avg)
        {
            printf("%d ",num[i]);
        }
    }

    printf("\n");

    return 0;


}