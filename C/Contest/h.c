#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
    } else if (n == 1 || n == 2) {
        printf("The %d-th Fibonacci number is: 1\n", n);
    } else {
        int fib[n + 1];
        fib[1] = fib[2] = 1;
        for (int i = 3; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("\\%d %d\n", n, fib[n]);
    }

    return 0;
}
