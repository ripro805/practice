#include<stdio.h>

int main() {
    int n, row, col;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            printf("%d", row);
        }
        printf("\n");
    }

    return 0;
}

