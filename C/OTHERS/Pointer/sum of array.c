#include <stdio.h>

int calculateSum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    int sum = calculateSum(a, 5);
    printf("Sum of elements: %d\n", sum);

    return 0;
}
