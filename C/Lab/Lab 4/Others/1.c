#include<stdio.h>
int main()
{
    int arr[100],i,sum=0,avg,n;

    printf("Enter the no:");
    scanf("%d",&n);

    for(i=0 ; i<n; i++)
    {
       printf("Enter the array elements %d: ",i+1);
       scanf("%d",&arr[i]);
       sum=sum+arr[i];
    }

     

    printf("Sum=%d\n",sum);

    avg=sum/n;

    printf("Average=%d\n",avg);


    return 0;
}