#include <stdio.h>
#include <math.h>

int main() {
    double investment_amount;
    double rate = 8.75 / 100.0;
    double cumulative_return;

    printf("Enter the investment amount: ");
    scanf("%lf", &investment_amount);

    cumulative_return = investment_amount * pow(1 + rate, 10);

    printf("The cumulative return after 10 years is: %.2lf\n", cumulative_return);

    return 0;
}
