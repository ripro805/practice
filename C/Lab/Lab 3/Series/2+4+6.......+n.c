#include<stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("2+4+6+........+%d=", n);

    for (i = 2; i <= n; i = i + 2) {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}
