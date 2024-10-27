#include<stdio.h>

int main()
{
    int a = 1, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("1^2 + 2^2 + 3^2 + ... + %d = ", n);

    while (a <= n)
    {
        sum = sum + (a * a);
        a = a + 1;
    }

    printf("%d\n", sum);

    return 0;
}
