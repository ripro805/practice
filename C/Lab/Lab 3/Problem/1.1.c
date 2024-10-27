#include<stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("1^2+2^2+3^2+........+%d=", n);

    for (i = 1; i <= n; i = i + 1) {
        sum = sum + i*i;
    }

    printf("%d", sum);

    return 0;
}

