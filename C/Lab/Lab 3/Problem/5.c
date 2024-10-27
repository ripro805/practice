#include <stdio.h>

int main()
{
    int rem, n1, n2, num1, num2, gcd, lcm;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    n1 = num1;
    n2 = num2;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1 * num2) / gcd;
    printf("GCD is: %d\n", gcd);
}
