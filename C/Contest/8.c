#include <stdio.h>
#include <stdbool.h>

bool hasOddDivisor(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input. Please enter a positive integer greater than 1.\n");
    } else if (n % 2 == 0) {
        printf("The number %d does not have an odd divisor greater than one.\n", n);
    } else if (hasOddDivisor(n)) {
        printf("The number %d has an odd divisor greater than one.\n", n);
    } else {
        printf("The number %d does not have an odd divisor greater than one.\n", n);
    }

    return 0;
}

