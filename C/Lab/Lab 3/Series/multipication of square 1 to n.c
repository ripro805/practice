#include<stdio.h>

int main() {
    int i, n, result = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("1^2*2^2*3^2*4^2*5^2*........*%d=", n);

    for (i = 1; i <= n; i++) {
        result = result * (i * i);
    }

    printf("%d", result);

    return 0;
}
