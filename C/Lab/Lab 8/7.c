#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2, *file3;
    file1 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\7.1.input.txt", "r");
    file2 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\7.2.input.txt", "r");
    
    if(file1 == NULL)
    {
        printf("file not found");

        exit (0);
    }

     if(file2 == NULL)
    {
        printf("file not found");

        exit (0);
    }

    int i=0, arr[100];

    while(!feof(file1))
    {
        fscanf(file1,"%d",&arr[i]);
        i++;
    }

     while(!feof(file2))
    {
        fscanf(file2,"%d",&arr[i]);
        i++;
    }

    printf("\n");

    int n=i,j,temp;
    for(i=0 ;i<n; i++)
    {
        for(j=i+1; j<n ;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    file3=fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\7.output.txt","w");

    for(i=0; i<n ;i++)
    {
        printf("%d ",arr[i]);
        fprintf(file3, "%d ", arr[i]);
    }
    // Close the opened files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
