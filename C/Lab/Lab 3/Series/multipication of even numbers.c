#include <stdio.h>

int main() {
    int n, i, result = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("2*4*6...............*%d=", n);

    for (i = 4; i <= n; i += 2) {
        result = result * i;
    }

    printf("%d", result);

    return 0;
}
