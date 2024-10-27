#include<stdio.h>

int main() {
    int n, i, result = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("1*3*5...............*%d=", n);

    for (i = 1; i <= n; i += 2) {
        result = result * i;
    }

    printf("%d", result);

    return 0;
}
