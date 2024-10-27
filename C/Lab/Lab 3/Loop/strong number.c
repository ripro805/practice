#include <stdio.h>

int main() {
    int num, temp,i, r,fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        r = temp % 10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum = sum*10+ r;
        temp = temp / 10;
    }

 if (num==sum)
    printf("It's a strong number",num);
 else
    printf("It's not a strong number",num);
    return 0;
}



