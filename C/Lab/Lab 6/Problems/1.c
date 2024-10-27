#include <stdio.h>

// Function to compute the maximum of two numbers
int max(int a, int b) {
    int max;
    if(a>b)
        return a;
    else
        return b;
}

// Function to compute the minimum of two numbers
int min(int a, int b) {
    int min;
    if (a<b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int maximum = max(num1, num2);
    int minimum = min(num1, num2);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}

