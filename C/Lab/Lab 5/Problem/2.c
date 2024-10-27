#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("Result: %s\n", str);

   getch();
}

