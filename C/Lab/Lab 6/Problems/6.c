#include <stdio.h>

int check_odd_even(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}

int check_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

int check_prime(int num) {
    int i, count = 0;


        for (i = 2; i < num ; i++) {
            if (num % i == 0) {
               count++;
                break;
            }
        }


    if (count == 0 ) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

int calculate_factorial(int num) {
    int i;
    int fact = 1;

    if (num < 0) {
        printf("Factorial cannot be calculated for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("The factorial of %d is %d.\n", num, fact);
    }
    return 0;
}

int generate_fibonacci(int num) {
    int  first = 0, second = 1, fib, count = 0;

    while (count < num) {
        if (count <= 1) {
            fib = count;
        } else {
            fib = first + second;
            first = second;
            second = fib;
        }
        printf("%d ", fib);
        count++;
    }

    return 0;
}

int main() {
    int choice, num, year;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Odd or Even\n");
        printf("2. Leap Year\n");
        printf("3. Prime or Not Prime\n");
        printf("4. Factorial\n");
        printf("5. Fibonacci Series\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                check_odd_even(num);
                break;
            case 2:
                printf("Enter a year: ");
                scanf("%d", &year);
                check_leap_year(year);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                check_prime(num);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                calculate_factorial(num);
                break;
            case 5:
                printf("Enter the number of terms: ");
                scanf("%d", &num);
                generate_fibonacci(num);
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please select a number from the menu.\n");
        }
    }

    return 0;
}

