#include<stdio.h>

int main() {
    int n, first = 0, second = 1, count = 0, fib;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        if (count <= 1) {
            fib = count;
        } else {
            fib = first + second;
            first = second;
            second = fib;
        }
        printf("%d\n", fib);
        count++;
    }

    return 0;
}
