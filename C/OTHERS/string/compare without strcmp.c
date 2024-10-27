#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int i;

    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            break;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Both strings are the same.\n");
    else
        printf("Both strings are not the same.\n");

    return 0;
}

