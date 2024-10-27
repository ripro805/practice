#include <stdio.h>

int calculateSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + calculateSum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int sum = calculateSum(n);

    printf("Sum of the series 1 + 2 + 3 + ... + %d = %d\n", n, sum);

    return 0;
}

