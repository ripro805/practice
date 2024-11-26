#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    int *arr = (int *)malloc(sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        if (arr == NULL)
        {
            return 1;
        }

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
