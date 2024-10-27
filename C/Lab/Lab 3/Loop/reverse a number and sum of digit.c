#include <stdio.h>

int main() {
    int num,temp, reversedNum = 0, sum = 0, r;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    // Reversing the number
    while (temp != 0) {
        r = temp % 10;
        reversedNum = reversedNum * 10 + r;
        temp=temp/ 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    // Finding the sum of digits
    while (reversedNum != 0) {
        r = reversedNum % 10;
        sum =sum+ r;
        reversedNum /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
