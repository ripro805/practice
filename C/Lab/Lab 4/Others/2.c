#include<stdio.h>
int main()
{
    int arr[100],rev_arr[100],n,i;

    printf("Enter the no :");
    scanf("%d",&n);

    //original array

    for(i=0; i<n; i++)
    {
        printf("Enter the array elements %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Orginal Array: ");

     for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    //reversed array

    for( i=0; i<n; i++){

        rev_arr[i]=arr[n-1-i];
    }

    printf("Reversed Array: ");

     for (int i = 0; i < n; i++) {
        printf("%d ", rev_arr[i]);
    }

    printf("\n");
 
}