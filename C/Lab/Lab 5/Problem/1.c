#include <stdio.h>

int main() {
    int i;
    char str[1000];
    printf("Enter a line: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase line: %s\n", str);

    return 0;
}
