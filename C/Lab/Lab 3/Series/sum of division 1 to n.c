#include<stdio.h>

int main() {
    float i,  sum = 0;
    int n;

    printf("Enter the value of n: ");
    scanf("%lf", &n);

    printf("%1/1+1/2+1/3+............+1/%d=", n);

    for (i = 1/1; i <= n; i =i+1) {
        sum = sum + (1/i);
    }

    printf("%lf", sum);

    return 0;
}


