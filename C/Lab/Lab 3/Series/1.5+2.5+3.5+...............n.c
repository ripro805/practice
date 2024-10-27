#include<stdio.h>

int main() {
    float i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%f", &n);

    printf("1.5+2.5+3.5+........+%.2f=", n);

    for (i = 1.5; i <= n; i = i + 1) {
        sum = sum + i;
    }

    printf("%.2f", sum);

    return 0;
}


