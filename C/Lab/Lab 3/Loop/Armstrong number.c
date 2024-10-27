#include <stdio.h>

int main() {
    int num, temp, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        r = temp % 10;
        sum = sum+ r*r*r;
        temp = temp / 10;
    }
if (num==sum)
    printf("It's a Armstrong number",num);
 else
    printf("It's not a Armstrong number",num);
    return 0;
}
