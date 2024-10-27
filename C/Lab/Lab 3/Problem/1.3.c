#include <stdio.h>

int main() {
    int n, a = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

   printf("1^2 + 2^2 + 3^2 + ... + %d = ", n);

    do {
        sum += a * a;
        a++;
    } while (a <= n);

    printf("%d\n", sum);

    return 0;
}

